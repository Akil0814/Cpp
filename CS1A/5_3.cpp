//AKELI ADILIJIANG      CS1A             Chapter 6, P.374 , #19
//
/**************************************************************
 * CALCULATE STOCK PROFIT
 * ____________________________________________________________
 * This program calculates the profit or loss from the sale of
 * a stock using the following formula:
 *              Profit = ((NS * SP) SC) ((NS * PP) + PC)
 * and told the user whether they make profit or loss.
 *____________________________________________________________
 * INPUT
 *   NS: number of shares
 *   PP: purchase price per share
 *   PC: purchase commission paid
 *   SP: sale price per share
 *   SC: sale commission paid
 * OUTPUT
 *   profit: profit from the sale of stock.
 *************************************************************/
#include <iostream>
using namespace std;

double calculateProfit(int NS, double PP, double PC, double SP, double SC,double profit)
{
    profit = ((NS * SP) - SC) - ((NS * PP) + PC);
    return profit;
}

int main()
{
    int NS = 0;            //INPUT: number of shares
    double PP = 0;         //INPUT:purchase price per share
    double PC = 0;         //INPUT:purchase commission paid
    double SP = 0;         //INPUT:sale price per share
    double SC = 0;         //INPUT:sale commission paid
    double profit = 0;     //OUTPUT:profit from the sale of stock.


    cout << "Enter the number of NS: ";
    cin >> NS;

    cout << "Enter the purchase price per share: $";
    cin >> PP;

    cout << "Enter the purchase commission paid: $";
    cin >> PC;

    cout << "Enter the sale price per share: $";
    cin >> SP;

    cout << "Enter the sale commission paid: $";
    cin >> SC;

    profit = calculateProfit(NS, PP, PC, SP, SC, profit);

    if (profit > 0)
        cout << "The sale resulted in a profit of $" << profit << endl;
    else if (profit < 0)
        cout << "The sale resulted in a loss of $" << -profit << endl;
    else
        cout << "The sale broke even." << endl;

    return 0;
}
