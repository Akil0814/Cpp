#include<iostream>
#include<unistd.h>
using namespace std;

enum class TrafficLight
{
    Red=0,
    Green,
    Yellow
};

TrafficLight nextLighy(TrafficLight light)
{
    switch (light)
    {
        case TrafficLight::Green:
            return TrafficLight::Yellow;
        case TrafficLight::Yellow:
            return TrafficLight::Red;
        case TrafficLight::Red:
            return TrafficLight::Green;
    }
    return TrafficLight::Red;
}


void showLight(TrafficLight light)
{
    switch(light)
        {
            case TrafficLight::Green:
                cout<<"Light is Green"<<endl;
                sleep(1);
            break;

            case TrafficLight::Yellow:
                cout<<"Light is Yellow"<<endl;
                sleep(1);
            break;

            case TrafficLight::Red:
                cout<<"Light is Red"<<endl;
                sleep(1);
            break;
       }
}

int main()
{
    TrafficLight light=TrafficLight::Red; 
    int time=0;
    while(1)
    {
        showLight(light);
        light=nextLighy(light);
    }

    return 0;
}