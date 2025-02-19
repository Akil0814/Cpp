// AKELI ADILIJIANG      CS1A             Chapter 11, P.673, #1
/**************************************************************
 * DISPLAY MOVIE DATA
 * -----------------------------------------------------------
 * This program defines a structure `MovieData` to store
 * information about movies, including title, director, year
 * released, and running time. It then uses a function to
 * display the stored information.
 * -----------------------------------------------------------
 * INPUT:
 *   - No user input is required. Movie details are hardcoded.
 * OUTPUT:
 *   - Movie details displayed on the console.
 **************************************************************/
#include<iostream>
using namespace std;


struct MovieData
{
    string Title;
    string Director;
    int YearReleased;
    float RunningTime;

};

void ShowInform(MovieData movie)
{
    cout<<"Movie Title:"<<movie.Title<<endl;
    cout<<"Director:"<<movie.Director<<endl;
    cout<<"Year Released:"<<movie.YearReleased<<endl;
    cout<<"Running Time:"<<movie.RunningTime<<" min"<<endl;
}

int main()
{
    MovieData m1{"Fate/stay night: Heaven's Feel I. presage flower","Tomonori Sudō",2017,120};
    MovieData m2{"Fate/stay night: Heaven's Feel II. lost butterfly","Hikaru Kondo",2019,117};

    ShowInform(m1);
    ShowInform(m2);

    return 0;
}
