//AKELI ADILIJIANG      CS1A             Chapter 9, P.537 , #1
//
/**************************************************************
 * SHOW ADDRESS OF ARRAY
 * ____________________________________________________________
 * This function dynamically allocates an array of integers. The
 *  function should accept an integer argument indicating the
 * number  of elements to allocate. The function should return
 * a pointer to the array.
 *____________________________________________________________
 * INPUT
 *    the size of the array
 * OUTPUT
 *    the address of the array
 *************************************************************/
 #include <iostream>
using namespace std;

int* CreatArr(int i)
{
   int* arr=new int[i];

   return arr;
}

void DeleteArr(int*p)
{
   delete[] p;
}

 int main()
{
   int x;
   int* ptr=NULL;

   cout<<"enter x:";
   cin>>x;

   ptr=CreatArr(x);
   cout<<ptr<<endl;

   DeleteArr(ptr);

   return 0;
}
