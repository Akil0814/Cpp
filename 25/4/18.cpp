#include <functional>
#include <iostream>
using namespace std;

class Worker
{
public:
    void do_task(const string& name, int level)
    {
        cout << "Task: " << name << ", Level: " << level << endl;
    }
};

/*
void run(function<void(const string &)> f)
{
    f("CleanRoom");
}
*/

template <typename Fn>
void run(Fn f)
{
    f("CleanRoom");
}

int main()
{
    Worker worker1;
    int x=5;

    auto a=bind(&Worker::do_task,&worker1,placeholders::_1,x);
    //std::function<void(const string&)>a=bind(Worker::do_task,&worker1,placeholders::_1,x);

    run(a);

    return 0;
}
