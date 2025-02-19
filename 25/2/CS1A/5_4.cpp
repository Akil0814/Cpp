//AKELI ADILIJIANG      CS1A             Chapter 6, P.374 , #20
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
 *   anotherif: user have another stock
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
    int NS = 0;                  //INPUT: number of shares
    double PP = 0;               //INPUT:purchase price per share
    double PC = 0;               //INPUT:purchase commission paid
    double SP = 0;               //INPUT:sale price per share
    double SC = 0;               //INPUT:sale commission paid
    double profit = 0;           //OUTPUT:profit from the sale of stock.
    double totalProfit = 0;      //OUTPUT:total profit of all the stock.
    char another = 0;            //INPUT: if user have another stock

    do
    {
        cout << "Enter the number of shares: ";
        cin >> NS;

        cout << "Enter the purchase price per share: $";
        cin >> PP;

        cout << "Enter the purchase commission paid: $";
        cin >> PC;

        cout << "Enter the sale price per share: $";
        cin >> SP;

        cout << "Enter the sale commission paid: $";
        cin >> SC;

        double profit = calculateProfit(NS, PP, PC, SP, SC, profit);

        totalProfit = totalProfit + profit;

        cout << "Do you have another stock?(Y/N)";
        cin >>another;

    }while(another=='Y'||another=='y');


    if (totalProfit > 0)
        cout << "The sale resulted in a total profit of $" << totalProfit << endl;
    else if (totalProfit < 0)
        cout << "The sale resulted in a total loss of $" << -totalProfit << endl;
    else
        cout << "The total sale broke even." << endl;

    return 0;
}
