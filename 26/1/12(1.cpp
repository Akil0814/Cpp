// #Lab 1
// 1/12/2026

#include<iostream>
#include<vector>
#include <algorithm>

//out put integer vector as XXX form
void print_vector_int(std::vector<int> &v)
{
    for(auto iter:v)
    {
        if(iter<10)
            std::cout<<"00"<<iter<<" ";

        else if(iter<100)
            std::cout<<"0"<<iter<<" ";
        else
        std::cout<<iter<<" ";
    }
    std::cout<<std::endl;
}

//add all digits in one number and print it
void add_digits(std::vector<int> &v)
{
    std::vector<int> v_added;
    int tmp_sum=0;
    int digits=0;
    int num=0;

    for(auto iter:v)
    {
        num=iter;
        while(num>0)
        {
            digits=num%10;
            num/=10;
            tmp_sum+=digits;
        }

        std::cout<<"sum of the digits"<<iter<<" is "<<tmp_sum<<std::endl;
        v_added.push_back(tmp_sum);
        tmp_sum=0;
    }

    std::cout<<"Digits vector:";
    for(auto iter:v_added)
        std::cout<<iter<<" ";
}

int main()
{
    srand(time(NULL));
    std::vector<int> arr;
    std::vector<std::string> str_v;

    //Creat random number and put in vector
    for(int i=0;i<20;i++)
        arr.push_back(rand()%1000);
    std::cout<<"Creat vector: ";
    print_vector_int(arr);

    //Sort the vector
    std::sort(arr.begin(),arr.end());
    std::cout<<"Sort vector:  ";

    //out put vector as XXX form
    print_vector_int(arr);

    //reversed vector and save it
    for(auto iter:arr)
    {
        if(iter<10)
        {
            std::string tmp_str=std::to_string(iter);
            tmp_str=tmp_str+"00";
            str_v.push_back(tmp_str);
        }
        else if(iter<100)
        {
            std::string tmp_str=std::to_string(iter);
            tmp_str="0"+tmp_str;
            std::swap(tmp_str[0],tmp_str[2]);
            str_v.push_back(tmp_str);

        }
        else
        {
            std::string tmp_str=std::to_string(iter);
            std::swap(tmp_str[0],tmp_str[2]);
            str_v.push_back(tmp_str);
        }
    }

    //out put reversed vector
    std::cout<<"Revesr vector:";
    for(auto iter:str_v)
        std::cout<<iter<<" ";
    std::cout<<std::endl;

    //add all digits and print it
    add_digits(arr);

    return 0;
}
