#include <functional>
#include <iostream>
using namespace std;

class Logger
{
public:
    void log(const string &msg)
    {
        cout << "LOG:" << msg << endl;
    }
};

void execute(function<void(const string &)> callback)
{
    callback("This is a massage");
}

int main()
{
    Logger logger;

    // auto fptr=a.log();
    // execute(*fptr);
    // void(const string&);//你可能以为的签名
    // void(Logger*, const string&);//实际上的真实签名
    // 不能直接使用 缺少一个Logger* this作为参数

    // execute(a.log());
    // execute(Logger::log);

    // 方法 1：使用 std::bind 把成员函数和对象绑定起来
    auto bound_cb = bind(&Logger::log, &logger, placeholders::_1);
    execute(bound_cb);

    // 方法 2：使用 lambda 封装成员函数调用
    execute([&logger](const string &msg)
            { logger.log(msg); });

    return 0;
}
