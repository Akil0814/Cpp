#include<iostream>
int main()
{
    int a[5]={1,2,3,4,5};//== *(p+2)== *(2+p)
    int* p=a;
    std::cout<<3[a]<<std::endl;
    std::cout<<a[3]<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<a+3<<std::endl;



    return 0;
}
