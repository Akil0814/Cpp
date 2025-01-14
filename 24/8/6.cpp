#include<iostream>
int main()
{
    int sum=0,value=0;

    while(std::cin>>value)//读取数量不定的输入数据
    {
        sum+=value;//sum=sum+value
    }

    std::cout<<"sum is:"<<sum<<std::endl;

    return 0;
}