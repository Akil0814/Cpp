#include <time.h>
#include <windows.h>
#include<stdio.h>

int main()
{
    srand((unsigned int)time(NULL));

    int i=0;
    while(i<6)
    {
       int x = (rand() % 3);
        printf("%d ",x);
       i++;
    }


}
