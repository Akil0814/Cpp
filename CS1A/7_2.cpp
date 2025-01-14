//AKELI ADILIJIANG      CS1A             Chapter 7 P.444 , #2
//
/**************************************************************
 * COUCULATE RAIN FALL
 * ____________________________________________________________
 * Largest/Smallest Array Values Write a program that lets the
 * user enter 10 values into an array. The program should then
 * display the largest and smallest values stored in the array
 *____________________________________________________________
 * INPUT
 * rainfall rain fall each month
 * OUTPUT
 * Rainfall
 * average Rainfall
 * rain fall highest Month
 * rain fall lowest Month
 *************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int NUM_MONTHS = 12;
    double totalRainfall = 0;
    double averageRainfall = 0;
    int highestMonth = 0;
    int lowestMonth = 0;

    double rainfall[NUM_MONTHS]={0};
    string monthNames[NUM_MONTHS] = {"January", "February", "March",
    "April", "May", "June","July", "August", "September",
    "October", "November", "December"};

    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << "Enter the total rainfall for " << monthNames[i] << ": ";
        cin >> rainfall[i];

        while (rainfall[i] < 0)
        {
            cout << "Rainfall cannot be negative. Please re-enter: ";
            cin >> rainfall[i];
        }

        totalRainfall += rainfall[i];

        if (rainfall[i] > rainfall[highestMonth])
            highestMonth = i;
        if (rainfall[i] < rainfall[lowestMonth])
            lowestMonth = i;
    }

    averageRainfall = totalRainfall / NUM_MONTHS;

    cout << fixed << setprecision(2);
    cout << "\nTotal rainfall for the year: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " inches" << endl;
    cout << "Month with highest rainfall: " << monthNames[highestMonth]
         << " (" << rainfall[highestMonth] << " inches)" << endl;
    cout << "Month with lowest rainfall: " << monthNames[lowestMonth]
         << " (" << rainfall[lowestMonth] << " inches)" << endl;

    return 0;
}
