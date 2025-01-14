//AKELI ADILIJIANG      CS1A             Chapter 10, P.588 , #3
//
/**************************************************************
 * ____________________________________________________________
 *
 *____________________________________________________________
 * INPUT
 * OUTPUT
 *************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE=256;


int countWords(char* str)
{
    int words=0;

    for(int i=0;i<SIZE;i++)
    {
        if(isspace(str[i]))
            words++;
        if(str[i]=='0')
            return words;
    }
    return -1;
}

int main()
{
    char input[SIZE];
    int  wordNum=0;

    cout << "Enter a string: ";
    cin.getline(input,256);
    wordNum=countWords(input);
    cout<<wordNum<<endl;

    return 0;
}
