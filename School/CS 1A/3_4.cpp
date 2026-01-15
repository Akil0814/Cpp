//AKELI ADILIJIANG      CS1A              Chapter 4, P. 224, #19
//
/**************************************************************
 * CALCULATE SOUND TRAVEL DISTANCE
 * ____________________________________________________________
 * This program calculates the distance sound travels in a given
 * medium over a specified time. The user selects a medium from
 * four options (Carbon Dioxide, Air, Helium, or Hydrogen) and
 * enters a time value. The program then calculates the distance
 * by multiplying the speed of sound in the chosen medium by
 * the time.
 *____________________________________________________________
 * INPUT
 *  selection:the medium user select
 *  time:the time it will traval
 * OUTPUT
 *    distance will travel
 *************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int selection;              //INPUT:the medium user select
    float time;                 //INPUT:the time it will traval

    cout<<"Select one of these four"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Medium          speed(Meter per Scond)"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"1:Carbon Dioxide    258.0 "<<endl;
    cout<<"2:Air               331.5 "<<endl;
    cout<<"3:Helium            972.0"<<endl;
    cout<<"4:Hydrogen          1270.0 "<<endl;
    cout<<"----------------------------------------"<<endl;
    cin>>selection;
    if(selection==1 || selection==2 || selection==3 || selection==4)
    {
         cout<<"Enter time (in seconds):"<<endl;
         cin>>time;
         if( time>0 && time<=30)
         {
            switch(selection)
            {
                case 1:
                cout<<time*258.0<<" meters is the distance."<<endl;
                break;
                case 2:
                cout<<time*331.5<<" meters is the distance."<<endl;
                break;
                case 3:
                cout<<time*972.0<<" meters is the distance."<<endl;
                break;
                case 4:
                cout<<time*1270.0<<" meters is the distance."<<endl;
                break;
            }
         }
         else
            cout<<"error: Time must be between 0 and 30 seconds";
    }
    else
        cout<<"error: Invalid selection.";

    return 0;
}
