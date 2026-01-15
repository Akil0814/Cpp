//AKELI ADILIJIANG      CS1A             Chapter 7 P.444 , #11
//
/**************************************************************
 * PRINT GRADE BOOK
 * ____________________________________________________________
 * This is a program that uses an array of string objects to hold
 * the ve student names,an array of ve characters to hold the students
 * letter grades, and ve arrays of four doubles to hold each
 * student s set of test scores.The program should allow the user
 * to enter each student s name and his or her four test scores.
 * It should then calculate and display each student s average
 * test score and aletter grade based on the average.
 *____________________________________________________________
 * INPUT
 * studentNames
 * testScores
 * OUTPUT
 *	letterGrades
 *  studentNames
 *************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

char calculateGrade(double average)
{
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main()
{
    const int numStudents = 5;
    const int numTests = 4;

    string studentNames[numStudents];
    double testScores[numStudents][numTests];
    char letterGrades[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student #" << (i + 1) << ": ";
        getline(cin, studentNames[i]);

        double total = 0.0;
        for (int j = 0; j < numTests; j++)
		{
            double score;
            do {
                cout << "Enter test score #" << (j + 1) << " for " << studentNames[i] << " (0-100): ";
                cin >> score;
                if (score < 0 || score > 100) {
                    cout << "Invalid score. Please enter a score between 0 and 100." << endl;
                }
            } while (score < 0 || score > 100);

            testScores[i][j] = score;
            total += score;
        }

        double average = total / numTests;
        letterGrades[i] = calculateGrade(average);

        cin.ignore();
    }

    cout << fixed << setprecision(2);
    cout << "\nStudent Grades:\n";
    cout << "----------------------------\n";
    for (int i = 0; i < numStudents; i++)
	{
        double total = 0;

        for (int j = 0; j < numTests; j++)
            total += testScores[i][j];

        double average = total / numTests;

        cout << "Name: " << studentNames[i] << "\n";
        cout << "Average Score: " << average << "\n";
        cout << "Letter Grade: " << letterGrades[i] << "\n";
        cout << "----------------------------\n";
    }

    return 0;
}
