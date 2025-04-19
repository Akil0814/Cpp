#include <functional>
#include <iostream>
using namespace std;

class DataProcessor
{
public:
    void on_complete(const string &msg)
    {
        cout << "处理器收到消息：" << msg << endl;
    }
};

class Manager
{
public:
    template <class T,typename Fn>
    void register_callback(T t,Fn f,const string& str)
    {
        func=bind(f,t,str);
    }

    void run_task()
    {
        func();
    }

private:
    //std::function<void(const string&)>func; 调用为传入string对象 参数不匹配 无法调用
    std::function<void()>func;

};

int main() {
    DataProcessor processor;
    Manager mgr;
    string str="任务已完成";

    mgr.register_callback(processor,DataProcessor::on_complete,str);
    mgr.run_task();

    return 0;
}
