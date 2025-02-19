//AKELI ADILIJIANG      CS1A              Chapter 2, P. 82, #8
//
/**************************************************************
 * DISPLAY THE PRICE FO THE ITEM
 * ____________________________________________________________
 * this program holds the prices of the five items in five 
 * variables.Display each item s price, the subtotal of the sale,
 * the amount of sales tax, and the total.
 *____________________________________________________________
 * INPUT
 * five item 1,2,3,4,5
 * OUTPUT
 * item price,sales tax,subtotal of the sale ,totle price
 **************************************************************/
#include<iostream>
using namespace std;

int main()
{
    
    double item1=12.95;
    double item2=24.95;
    double item3=6.95;
    double item4=14.95;
    double item5=3.95;//int five price
    double item[5]={item1,item2,item3,item4,item5};//store the price
    double subtotal=0;
    double total=0;//total price of all item
    double tax=0.06;// definr tax
    int i=0;

    for(i=0;i<5;i++)
    {
        subtotal=item[i]*tax+item[i];//get subtotal price
        cout<<i+1<<":Price of item"<<i+1<<": "<<item[i]//display the price of current item
        <<"  tax:"<<item[i]*tax
        <<" subtotal:"<<subtotal<<endl;
        total=subtotal+total;//add current item price to total price
    }
    cout<<"   total:"<<total<<endl;
    return 0;
}