//AKELI ADILIJIANG      CS1A             Chapter 11, P.673 , #6
//
/**************************************************************
 * SOCCER TEAM STATS
 * ____________________________________________________________
 * Description: This program accepts input for 12 soccer players,
 * calculates the total points scored by the team, and identifies
 * the player with the most points.
 *____________________________________________________________
 * INPUT
 *  Player's name, number, and points scored
 * OUTPUT
 *  Display total points and player with the most points
 *************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Define the structure for a soccer player
struct SoccerPlayer {
    string name;
    int number;
    int pointsScored;
};

int main() {
    const int TEAM_SIZE = 12; // Number of players on the team
    SoccerPlayer team[TEAM_SIZE];
    int totalPoints = 0;      // Total points earned by the team
    int highestPoints = 0;    // Most points scored by a single player
    int highestIndex = 0;     // Index of the player with the most points

    // Input data for each player
    for (int i = 0; i < TEAM_SIZE; i++) {
        cout << "Enter details for player " << (i + 1) << ":" << endl;

        cout << "Player's Name: ";
        cin.ignore(); // Clear any leftover newline characters
        getline(cin, team[i].name);

        cout << "Player's Number: ";
        cin >> team[i].number;

        cout << "Points Scored by Player: ";
        cin >> team[i].pointsScored;

        // Validate points (should not be negative)
        while (team[i].pointsScored < 0) {
            cout << "Points cannot be negative. Enter again: ";
            cin >> team[i].pointsScored;
        }

        // Update total points
        totalPoints += team[i].pointsScored;

        // Check if this player scored the most points
        if (team[i].pointsScored > highestPoints) {
            highestPoints = team[i].pointsScored;
            highestIndex = i;
        }

        cout << endl;
    }

    // Display the table of players
    cout << "\nTeam Data:\n";
    cout << setw(15) << "Player Number" << setw(20) << "Player Name" << setw(20) << "Points Scored" << endl;
    cout << string(55, '-') << endl;

    for (int i = 0; i < TEAM_SIZE; i++) {
        cout << setw(15) << team[i].number
             << setw(20) << team[i].name
             << setw(20) << team[i].pointsScored << endl;
    }

    // Display total points and player with the most points
    cout << "\nTotal Points Scored by Team: " << totalPoints << endl;
    cout << "Player with the Most Points:\n";
    cout << "Name: " << team[highestIndex].name
         << ", Number: " << team[highestIndex].number
         << ", Points: " << highestPoints << endl;

    return 0;
}
