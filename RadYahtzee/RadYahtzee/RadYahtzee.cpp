// Yahtzee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int scorecard[2][19] = { 0 }, scoreboard[2][10] = { 0 };
//scoreCARD will be here, but scoreBOARD will be in a file for high scores
char playerName[20] = { 0 };
//this is here as a cstring is an array, though it will probably be something dynamically allocated instead of a set size
int diceRolled[5] = { 0 };

int main()
{
    std::cout << "RadYahtzee!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
