//AKELI ADILIJIANG      CS1A             Chapter 5, P. 294, #3
//
/**************************************************************
 * COUCULATE OCEAN LEVELS
 * ____________________________________________________________
 * This program displays a table showing the number of millimeters
 * that the ocean will have risen each year for the next 25 years.
 *____________________________________________________________
 * INPUT
 *  none
 * OUTPUT
 *  risePerYear: ocean risen in one year
 *  totalYears: total year user want to see
 *************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double risePerYear = 1.5;  //OUTPUT: ocean risen in one year
    int totalYears = 25;       //OUTPUT: total year user want to see

    cout << "Year           Rise (mm)" << endl;
    cout << "---------------------------" << endl;

    for (int year = 1; year <= totalYears; year++)
    {
        double cumulativeRise = risePerYear * year;

        cout <<left<<setw(10)<< year<<fixed<<setprecision(1)<<right<<setw(10)<< cumulativeRise<< endl;
    }

    return 0;
}
