#include <iostream>
#include "Display.h"
using namespace std;

int main()
{
    int rows = 8;
    int cols = 8;
    char Board[8][8];
    Display display;
    display.InitialiseBoard(Board);
    display.DisplayBoard(Board);
}
