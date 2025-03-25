//条件变量 生成消费者模型
#include <iostream>
#include <string>
#include <thread>                      // 线程类头文件。
#include <mutex>                      // 互斥锁类的头文件。
#include <deque>                      // deque容器的头文件。
#include <queue>                      // queue容器的头文件。
#include <condition_variable>  // 条件变量的头文件。
using namespace std;

class AA
{
    timed_mutex m_mutex;                              // 更改为带超时机制的互斥锁
    condition_variable_any m_cond;                  // 条件变量
    queue<string, deque<string>> m_q;   // 缓存队列，底层容器用deque
public:
    void incache(int num)     // 生产数据，num指定数据的个数
    {
        lock_guard<timed_mutex> lock(m_mutex);   // 申请加锁
        for (int ii=0 ; ii<num ; ii++)
        {
            static int bh = 1;           // 编号
            string message = to_string(bh++) + "号";    // 拼接出一个数据
            m_q.push(message);     // 把生产出来的数据入队
        }
        //m_cond.notify_one();     //唤醒一个被当前条件变量阻塞的线程
        m_cond.notify_all();       //唤醒全部被当前条件变量阻塞的线程
    }

    void outcache()       // 消费者线程任务函数
    {
        while (true)
        {
            string message;

            {
                // 把互斥锁转换成unique_lock<mutex>，并申请加锁
                cout<<"线程："<<this_thread::get_id()<<" 申请加锁..."<<endl;
                unique_lock<timed_mutex> lock(m_mutex);
                cout<<"线程："<<this_thread::get_id()<<" 加锁成功"<<endl;//所有线程都加锁成功

                //this_thread::sleep_for(chrono::minutes(1));//只有一个线程能加锁成功
                //条件变量虚假唤醒 消费者线程被唤醒后 缓冲队列中没有处理数据
                while (m_q.empty())    // 如果队列空，进入循环，否则直接处理数据。必须用循环，不能用if
                    m_cond.wait(lock);// wait会干三件事情//1.把互斥锁解开 2.阻塞 等待被唤醒 3.给互斥锁加锁

                //m_cond.wati(lock,[this]{return !m_q.empty();});//效果和while循环一样

                // 数据元素出队。
                message = m_q.front();  m_q.pop();
                cout << "线程：" << this_thread::get_id() << "，" << message << endl;//cout放入锁中

            }
            // 处理出队的数据（把数据消费掉）
            this_thread::sleep_for(chrono::milliseconds(1));   // 假设处理数据需要1毫秒
        }
    }
};

int main()
{
    AA aa;

    thread t1(&AA::outcache, &aa);     // 创建消费者线程t1。
    thread t2(&AA::outcache, &aa);     // 创建消费者线程t2。
    thread t3(&AA::outcache, &aa);     // 创建消费者线程t3。

    this_thread::sleep_for(chrono::seconds(2));    // 休眠2秒。
    //aa.incache(3);      // 生产3个数据。

    this_thread::sleep_for(chrono::seconds(3));    // 休眠3秒。
    //aa.incache(5);      // 生产5个数据。

    t1.join();   // 回收子线程的资源。
    t2.join();
    t3.join();

    return 0;
}

