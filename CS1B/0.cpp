#include<iostream>
using namespace std;

int main()
{
    char input[50]={0};
    char zip[50]={0};
    cout<<"Enter: ";
    cin>>input;
    int index=0;
    int out=0;
    while(input[index]!=0)
    {
        int i=0;
        cout<<input[index];
        if(input[index]==input[index+1])
        {
            int num=1;
            zip[out]==input[index];

            out++;
            num++;

            bool again;
            do
            {
                again=false;
                if(input[index]==input[index+num])
                {
                    num++;
                    again=true;
                }
            } while (again);
            cout<<num;
            zip[out]=num;
            out++;
            index=index+num;
        }
        else
          index++;
    }



    return 0;
}
