//AKELI ADILIJIANG      CS1A             Chapter 6, P.369 , #1
//
/**************************************************************
 * RETAIL PRICE CALCULATOR
 * ____________________________________________________________
 * This program calculates the retail price of an item based on
 * its wholesale cost and markup percentage.
 *____________________________________________________________
 * INPUT
 *  wholesale: The wholesale cost of the item
 *  markupPercentage: The markup percentage applied to the wholesale cost
 * OUTPUT
 *  retailPrice: The retail price of the item
 *************************************************************/
#include <iostream>
using namespace std;

double calculateRetail(double wholesale, double markupPercentage)
{
    return wholesale + (wholesale * markupPercentage / 100);
}

int main()
{
    double wholesale = 0;             // INPUT: Wholesale cost of the item
    double markupPercentage = 0;      // INPUT: Markup percentage
    double retailPrice = 0;           // OUTPUT: Calculated retail price

    do
    {
        cout << "Enter the wholesale cost of the item: $";
        cin >> wholesale;
        cout << "Enter the markup percentage: ";
        cin >> markupPercentage;

        if(wholesale < 0 || markupPercentage < 0)
            cout << "Please enter a valid value." << endl;

    }while(wholesale < 0 || markupPercentage < 0);

    retailPrice = calculateRetail(wholesale, markupPercentage);

    cout << "The retail price of the item is: $" << retailPrice << endl;

    return 0;
}
