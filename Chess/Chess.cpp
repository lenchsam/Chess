// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array> 
using namespace std;

void InitialiseBoard(char Board[8][8]);
void DisplayBoard(char Board[8][8]);

int main()
{
    int rows = 8;
    int cols = 8;
    char Board[8][8];
    InitialiseBoard(Board);
    DisplayBoard(Board);
}
void InitialiseBoard(char Board[8][8]) {
    char BoardLayout[8][8] = {
    { 'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    { 'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };

    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            Board[x][y] = BoardLayout[x][y];
        }
    }
}
void DisplayBoard(char Board[8][8]) {
    cout << " +---+---+---+---+---+---+---+---+";
    cout << "\n";
    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            cout << " | ";
            cout << Board[x][y];
        }
        cout << " | ";
        cout << "\n";//new line when the row has finished printing
        cout << " +---+---+---+---+---+---+---+---+";
        cout << "\n";
    }
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
