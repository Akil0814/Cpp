#include <iostream>
#include <functional>
using namespace std;

class Logger
{
public:
    void log(const string& msg)
    {
        cout<<"LOG:"<<msg<<endl;
    }
};

void execute(function<void(const string&)>callback)
{
    callback("This is a massage");
}

int main()
{
    Logger a;

    //void* fptr=a.log();
    //execute(a.log());
    //execute(Logger::log);
    //execute(*fptr);

    return 0;
}
