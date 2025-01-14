//AKELI ADILIJIANG      CS1A             Chapter 6, P.375 , #23
//
/**************************************************************
 * PLAY ROCK PAPER SCISSORS GAME
 * ____________________________________________________________
 * This program is a Rock, Paper, Scissors game witch play against
 * the computer. The player chooses either rock, paper, or
 * scissors,and the computer makes a random choice. The program
 * determines the winner based on standard game rules
 *____________________________________________________________
 * INPUT
 *  userChoice: The number that user choose
 *              (1 = Rock, 2 = Paper, 3 = Scissors)
 *  running: Whether the player wants to continue playing
 *           (Loop control variables)
 * OUTPUT
 *  computerChoice:The choice that computer make
 *  Game Results;The results of game (win, lose, or draw)
 *************************************************************/
#include <iostream>
#include <time.h>
using namespace std;

void ShowText(int choice);
void Menu(int &running);
void CheckWin(int userChoice ,int computerChoice);
int ComputerChoice(int computerChoice);
int UserChoice(int userChoice);


int main()
{
    int running=0;                   //INPUT: Loop Control Variables
    int userChoice=0;                //INPUT: The number that user choose
    int computerChoice=0;            //OUTPUT: The choice that computer make

    srand((unsigned int)time(NULL));

    Menu(running);
    while(running==1)
    {
        userChoice = UserChoice(userChoice);
        computerChoice = ComputerChoice(computerChoice);
        CheckWin(userChoice,computerChoice);
        Menu(running);
    }

    return 0;
}

void ShowText(int choice)
{//display user/computer selction
    switch (choice)
    {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }
}

void Menu(int &running)
{//display menu
    cout<<"---------------------------------"<<endl;
    cout<<"----------   1.Play  ------------"<<endl;
    cout<<"----------   0.Exit  ------------"<<endl;
    cout<<"---------------------------------"<<endl;
    cin>> running;
}

void CheckWin(int userChoice ,int computerChoice)
{
    if (userChoice == computerChoice)
        cout << "It's draw!" << endl;

    else if ((userChoice == 1 && computerChoice == 3) ||
    		 (userChoice == 3 && computerChoice == 2) ||
        	 (userChoice == 2 && computerChoice == 1))
        cout << "You win!" << endl;

    else  cout << "Computer wins!" << endl;
}

int ComputerChoice(int computerChoice)
{
    computerChoice=(rand() % 3) + 1;

    cout << "Computer chose: ";
    ShowText(computerChoice);

    return computerChoice;
}

int UserChoice(int userChoice)
{
    cout << "Make your choice (1 = Rock, 2 = Paper, 3 = Scissors):\n";
    cin >>userChoice;

    if(userChoice!=1 && userChoice!=2 && userChoice!=3)
    {
        cout<<"Please enter a valid value."<<endl;
        userChoice=UserChoice(userChoice);
    }
    else
    {
        cout << "You chose: ";
        ShowText(userChoice);
    }

    return userChoice;
}
