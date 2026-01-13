#include<iostream>
#include<vector>
#include <algorithm>


void print_vector_int(std::vector<int> &v)
{
    std::cout<<"int vector:";
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

void add_digits(std::vector<int> &v)
{
    std::vector<int> v_added;
    int tmp_sum=0;
    int digits=0;

    for(auto iter:v)
    {
        tmp_sum=iter/100;
        digits=iter%10;
        tmp_sum+=digits/10;
        digits%=10;
        tmp_sum+=digits;

        std::cout<<"sum of "<<iter<<" is "<<tmp_sum<<std::endl;
        v_added.push_back(tmp_sum);
    }



    for(auto iter:v_added)
        std::cout<<iter<<" ";

}

int main()
{
    srand(time(NULL));
    std::vector<int> arr;
    std::vector<std::string> str_v;

    for(int i=0;i<20;i++)
        arr.push_back(rand()%1000);

    print_vector_int(arr);
    std::sort(arr.begin(),arr.end());
    print_vector_int(arr);



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



    std::cout<<"string:    ";
    for(auto iter:str_v)
    {
        std::cout<<iter<<" ";
    }
    std::cout<<std::endl;


    add_digits(arr);


    return 0;
}


