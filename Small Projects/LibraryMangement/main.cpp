#include <algorithm>
#include <fstream>
#include <string>
#include <vector>

#include"Book.h"
#include"Borrower.h"
#include"Transaction.h"
#include"DataHandler.h"
#include"Library.h"

using namespace std;


void show_muen()
{
    cout<<"____________________________________________"<<endl;
    cout << "1.Add a Book" << endl;
    cout << "2.Add a Borrower" << endl;
    cout << "3.Record a Transaction" << endl;
    cout << "4.Search Book by Title" << endl;
    cout << "5.Search Borrower by Name" << endl;
    cout << "6.Display All Books" << endl;
    cout << "7.Display All Borrowers" << endl;
    cout << "8.Display All Transactions" << endl;
    cout << "9.Save Data" << endl;
    cout << "10.Load Data" << endl;
    cout << "-1.Exit" << endl;
    cout<<"____________________________________________"<<endl;
}

main()
{
    int input = 0;
    while (input != -1)
    {
        show_muen();
        cin >> input;
        switch (input)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            cout << "invaled input!" << endl;
            break;
        }
    }

    return 0;
}
