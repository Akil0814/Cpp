#include<iostream>
using namespace std;

int main()
{
    int pos=18;
    int board_render=30;
    int result=(pos-board_render)/50;

    cout<<"result="<<result<< endl;
    if(pos%30>15)
        result++;
    //result =a==b;
    cout<<"pos%30="<<pos%30<< endl;
    cout<<"result="<<result<< endl;

    return 0;
}
