//AKELI ADILIJIANG      CS1A             Chapter 7 P.444 , #4
//
/**************************************************************
 * COUCULATE MONKWY EATS
 * ____________________________________________________________
 * A local zoo wants to keep track of how many pounds of food
 * each of its three monkeys eats each day during a typical week.
 * it create a report that includes the following information:
 * Average amount of food eaten per day by the whole family of monkeys.
 * The least amount of food eaten during the week by any one monkey.
 * The greatest amount of food eaten during the week by any one monkey.
 *____________________________________________________________
 * INPUT
 *  food[MONKEYS][DAYS] food monky eat every time
 * OUTPUT
 *  totalFood; total food monkey eat
 *  minFood; min food monkey eat
 *  maxFood; max food monkey eat
 *************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MONKEYS = 3;
    const int DAYS = 7;

    double food[MONKEYS][DAYS];
    double totalFood = 0;
    double minFood;
    double maxFood;
    bool firstEntry = true;

    cout << "Enter the pounds of food eaten by each monkey for each day of the week.\n";
    for (int i = 0; i < MONKEYS; i++) {
        for (int j = 0; j < DAYS; j++) {
            do {
                cout << "Monkey " << (i + 1) << ", Day " << (j + 1) << ": ";
                cin >> food[i][j];
                if (food[i][j] < 0) {
                    cout << "Please enter a non-negative number.\n";
                }
            } while (food[i][j] < 0);

            totalFood += food[i][j];

            if (firstEntry) {
                minFood = maxFood = food[i][j];
                firstEntry = false;
            }

            if (food[i][j] < minFood) minFood = food[i][j];

            if (food[i][j] > maxFood) maxFood = food[i][j];
        }
    }

    double averageFood = totalFood / (MONKEYS * DAYS);

    cout << fixed << setprecision(2);
    cout << "\nReport:\n";
    cout << "Average amount of food eaten per day by the whole family of monkeys: " << averageFood << " pounds\n";
    cout << "The least amount of food eaten during the week by any one monkey: " << minFood << " pounds\n";
    cout << "The greatest amount of food eaten during the week by any one monkey: " << maxFood << " pounds\n";

    return 0;
}
