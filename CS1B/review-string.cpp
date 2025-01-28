#include<iostream>
using namespace std;

const int row=4;
const int col=4;

char arr[row][col]={{'A','B','C','D'},
                    {'E','F','G','H'},
                    {'I','J','K','L'},
                    {'M','N','O','P'}};

enum Direction
{
    UP=1,
    DOWN,
    RIGHT,
    LEFT
};

bool ContinueLooking(string s,int len,Direction d,int x,int y)
{
        
    switch (d)
    {
    case UP:

        cout<<"UP"<<endl;
            for(int i=0;i<len;i++)
            {
                if(arr[x-i][y]!=s[i])
                    return false;
            }
            return true;

        break;

    case DOWN:
        cout<<"DOWN"<<endl;
            for(int i=0;i<len;i++)
            {
                if(arr[x+i][y]!=s[i])
                    return false;
            }
            return true;


        break;

    case RIGHT:
        cout<<"RIGHT"<<endl;
            for(int i=0;i<len;i++)
            {
                if(arr[x][y+i]!=s[i])
                    return false;
            }
            return true;

        break;

    case LEFT:
        cout<<"LEFT"<<endl;
            for(int i=0;i<len;i++)
            {
                if(arr[x][y-i]!=s[i])
                    return false;
            }
            return true;
        break;
    
    default:
        return false;
        break;
    }

}

bool FindString(string str,int len)
{
    for(int x=0;x<row;x++)
    {
       for(int y=0;y<col;y++)
        {
            if(arr[x][y]==str[0])
            {
                    if(len==1)
                        return true;
                    else
                    {
                        if(x+(len-1)<row)
                        {
                            if(arr[x+1][y]==str[1])
                            {
                                if(ContinueLooking(str,len,DOWN,x,y))
                                    return true;
                                else
                                    return false;
                            }                            
                        }

                        if(y+(len-1)<col)
                        {
                            if(arr[x][y+1]==str[1])
                            {
                                if(ContinueLooking(str,len,RIGHT,x,y))
                                    return true;
                                else
                                    return false;
                            }                            
                        }

                        if(x-(len-1)>=0)
                        {
                            if(arr[x-1][y]==str[1])
                            {
                                if(ContinueLooking(str,len,UP,x,y))
                                    return true;
                                else
                                    return false;
                            }
                        }

                        if(y-(len-1)>=0)
                        {
                            if(arr[x][y-1]==str[1])
                            {
                                if(ContinueLooking(str,len,LEFT,x,y))
                                    return true;
                                else
                                    return false;
                            }                            
                        }
                        else
                            return false;
                    }
            }
        }
    }
    return false;
}



int main()
{
    string str={0};
    int strl=0;

    cout<<"Enter the word you want to find: ";
    cin>>str;
    strl=str.length();

    if (FindString(str,strl))
        cout<<"word found"<<endl;
    else
        cout<<"can't found"<<endl;

    return 0;
}