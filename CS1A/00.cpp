#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int road=0;
    cout<<"你是一名勇者，两条路选一条\n";
    cout<<"1，村庄。2，丛林\n";
    cin>>road;
    if(road==1){
        cout<<"你什么都没找到\n";
    }
    else
    {
        for(int x=0;x<=3;x++)
        {
            cout<<"你什么都没发现，是否深入。\n";
            cout<<"1，返回。2，继续。\n";
            cin>>road;
            if(road==1){
                cout<<"你什么都没找到\n";
            }

        }
    }
    return 0;
}
