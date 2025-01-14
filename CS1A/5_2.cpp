//AKELI ADILIJIANG      CS1A             Chapter 6, P.369 , #8
//
/**************************************************************
 *COIN TOSS SIMULATION
 * ____________________________________________________________
 * This program simulates the tossing of a coin. The user is asked
 * how many times they would like to toss the coin, and the program
 * outputs "Heads" or "Tails" for each toss.
 *____________________________________________________________
 * INPUT
 *  tosses:times the coin should be tossed
 * OUTPUT
 *  tossResult: Result of coin tossed
 *************************************************************/
#include <iostream>
#include <time.h>
using namespace std;

void coinToss()
{
    int tossResult = rand() % 2 + 1;

    if (tossResult == 1)
        cout << "Heads" << endl;
    else
        cout << "Tails" << endl;
}
int main()
{
    int tosses=0;       //times the coin should be tossed

    cout << "How many times would you like to toss the coin? ";
    cin >> tosses;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < tosses; i++) coinToss();

    return 0;
}

