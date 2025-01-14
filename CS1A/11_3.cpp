//AKELI ADILIJIANG      CS1A             Chapter 11, P.673 , #3
//
/**************************************************************
 * REPORT SALES
 * -----------------------------------------------------------
 * This program collects quarterly sales data for multiple
 * company divisions, calculates the total annual sales, and
 * the average quarterly sales. It then displays a sales report.
 *____________________________________________________________
 * INPUT
 *   string name;                  Division Name
 *   double q1_sales;              First-Quarter Sales
 *   double q2_sales;              Second-Quarter Sales
 *   double q3_sales;              Third-Quarter Sales
 *   double q4_sales;              Fourth-Quarter Sales
 *   double total_annual_sales;    Total Annual Sales
 *   double avg_quarterly_sales;   Average Quarterly Sales
 * OUTPUT
 *   All Quarter Sales and Average Quarterly Sales
 *************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

struct Division
{
    string name;                  // Division Name
    double q1_sales;              // First-Quarter Sales
    double q2_sales;              // Second-Quarter Sales
    double q3_sales;              // Third-Quarter Sales
    double q4_sales;              // Fourth-Quarter Sales
    double total_annual_sales;    // Total Annual Sales
    double avg_quarterly_sales;   // Average Quarterly Sales
};

void inputSales(Division &div)
{
    cout << "Enter sales data for " << div.name << " Division:\n";
    cout << "First-Quarter Sales: ";
    cin >> div.q1_sales;
    cout << "Second-Quarter Sales: ";
    cin >> div.q2_sales;
    cout << "Third-Quarter Sales: ";
    cin >> div.q3_sales;
    cout << "Fourth-Quarter Sales: ";
    cin >> div.q4_sales;

    div.total_annual_sales = div.q1_sales + div.q2_sales + div.q3_sales + div.q4_sales;
    div.avg_quarterly_sales = div.total_annual_sales / 4.0;
}

void displaySales(const Division &div)
{
    cout << "\nSales Report for " << div.name << " Division:\n";
    cout << "-----------------------------------\n";
    cout << "First-Quarter Sales: $" << fixed << setprecision(2) << div.q1_sales << "\n";
    cout << "Second-Quarter Sales: $" << div.q2_sales << "\n";
    cout << "Third-Quarter Sales: $" << div.q3_sales << "\n";
    cout << "Fourth-Quarter Sales: $" << div.q4_sales << "\n";
    cout << "Total Annual Sales: $" << div.total_annual_sales << "\n";
    cout << "Average Quarterly Sales: $" << div.avg_quarterly_sales << "\n";
}

int main()
{
    Division divisions[4];

    for (int i = 0; i < 4; ++i)
        inputSales(divisions[i]);
    for (int i = 0; i < 4; ++i)
        displaySales(divisions[i]);

    return 0;
}
