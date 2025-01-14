#include <iostream>
#include<iomanip>
using namespace std;

float quiz()
{
	const int num=12;
	float x[num]={20,27,42,28,39,34,30,33,13,25,27,23};
	float y[num]={22,37,46,35,39,36,35,33,20,30,29,27};
	float z[num]={0};

	for(int i=0;i<num;i++)
	{
		z[i]=x[i]/y[i]*100;
	}

	for(int i=num-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(z[j]>z[j+1])
			{
				swap(z[j],z[j+1]);
			}
		}
	}

	float totle=0;

	for(int i=1;i<num;i++)
	{
		totle=totle+z[i];
	}
	totle=totle/(num-1);

	return totle;

}

float practicum()
{
	const int num=2;
	float x[num]={92,80};
	float z[num]={0};
	float totle=0;
	for(int i=0;i<num;i++)
	{
		totle=totle+x[i];
	}
	totle=totle/num;

	return totle;
}


int main()
{
	float quizg=quiz();
	float practicumg=practicum();

	return 0;
}
