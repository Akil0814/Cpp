#include<iostream>
#include<vector>
#include <algorithm>

bool is_char_same(char c_begin,char c_end)
{


}


bool palindrome_string(std::string str)
{
    if(str.length()<=1)
        return true;

    if(str[0].)
    {

    }

    if(str[str.size()-1])
    {

    }

    else if(str[0]==str[str.size()-1])
    {
        str.erase(0,1);
        str.erase(str.size()-1,1);
    }
    else
        return false;

    return palindrome_string(str);
}

int main()
{
    std::vector<std::string> str_list={"Radar", "Saddleback College", "CS 1D", "No lemon, no melon",
                                    "A man a plan a canal Panama", "The rain in Spain", "Racecar", "Dad", "Mom", "Was it a cat I saw ?"};

    for(const auto& iter: str_list)
    {
        std::cout<<iter<<": ";

        if(palindrome_string(iter))
        {
            std::cout<<"True"<<std::endl;
        }
        else
            std::cout<<"Flas"<<std::endl;

    }

    //std::string s={"acbasdaca"};
    //std::cout<<palindrome_string(s)<<std::endl;

    return 0;
}
