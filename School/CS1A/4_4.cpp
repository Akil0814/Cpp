//AKELI ADILIJIANG      CS1A             Chapter 5, P. 297, #17
//
/**************************************************************
 * SALES BAR CHART GENERATOR
 * ____________________________________________________________
 * This program prompts the user to enter today's
 * sales for five stores and displays a bar chart representing
 * each store's sales. Each asterisk (*) represents $100 of sales.
 *____________________________________________________________
 * INPUT
 *  Stores:number of stores
 *  sales:sales of each stores
 * OUTPUT
 *  numAsterisks:number of asterisks for each stores
 *************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int Stores = 5;      //INPUT:number of stores
    int sales[Stores]={0};     //INPUT:sales of each stores
    int numAsterisks=0;        //OUTPUT:number of asterisks for each stores

    for (int i = 0; i < Stores; i++)
    {
        cout << "Enter today's sales for store " << (i + 1) << ": ";
        cin >> sales[i];
    }

    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;
    for (int i = 0; i < Stores; i++)
    {
        cout << "Store " << (i + 1) << ": ";
        numAsterisks = sales[i] / 100;

        for (int j = 0; j < numAsterisks; j++) cout << "*";

        cout << endl;
    }

    return 0;
}
