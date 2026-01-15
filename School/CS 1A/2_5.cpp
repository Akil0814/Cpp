//AKELI ADILIJIANG      CS1A              Chapter 3, P. 146, #15
//
/**************************************************************
 * TUTOTING MATH
 * ____________________________________________________________
 *this program can be used as a math tutor for a young student.
 *The program display two random numbers to be added,then program
 *pause while the student works on the problem. When the student
 *is ready to check the answer, he or she can press spasse and the
 *program will display the correct solution:
 *____________________________________________________________
 * INPUT
 *  x,y: number use to couculate
 * OUTPUT
 *  x+y: anser for the qunsetion
 *************************************************************/
#include<iostream>
#include <iomanip>
#include<time.h>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    //initialization rand

    int range=500;//Value range of x and y
    int x=rand()%range;
    int y=rand()%range;

    cout<<"Press enter to view the answer"<<endl;
    cout<<setw(5)<<x<<"\n"
    <<"+"<<setw(4)<<y<<"\n"
    <<setw(5)<<"_____";

    getchar();//pause while student working on the problem

    cout<<setw(5)<<x+y<<endl;

    return 0;
}
