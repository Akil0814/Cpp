//AKELI ADILIJIANG      CS1A             Chapter 10, P.588 , #4
/**************************************************************
 * Word Counter Program
 * ____________________________________________________________
 * This program accepts a C-string from the user and counts
 * the number of words in it. A word is defined as a sequence
 * of non-space characters separated by spaces.
 * ____________________________________________________________
 * INPUT:
 *    A string entered by the user.
 * OUTPUT:
 *     The number of words in the string.
 *************************************************************/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int SIZE=256;

int countWords(char* str,int* l)
{
    int words=0;
    for(int i=0;i<SIZE;i++)
    {
        if(str[i]=='\0')
            return words;
        if(isspace(str[i]))
        {
            if(isalpha(str[i-1]))
            {
                if(words==0)
                    words++;
                words++;
            }
        }
        else
            (*l)++;
    }

    return -1;
}

int main()
{
    char input[SIZE];
    int  wordNum=0;
    int letter=0;


    cout << "Enter a string: ";
    cin.getline(input,256);
    wordNum=countWords(input,&letter);
    cout<<wordNum<<" "<<letter<<endl;

    return 0;
}
