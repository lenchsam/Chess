#include "Display.h"
#include <iostream>
#include <array> 
using namespace std;

void Display::InitialiseBoard(char Board[8][8]) {
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
void Display::DisplayBoard(char Board[8][8]) {
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
