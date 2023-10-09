#include <iostream>
#include <windows.h>
using namespace std;
int eX = 2, eY = 2;
int eX1 = 35, eY1 = 3;
int eX2 = 45, eY2 = 2;
int pX = 18, pY = 18;
void movePlayerRight();
void movePlayerLeft();
void printPlayer();
void maze();
void printEnemy();
void eraseEnemy();
void printEnemy2();
void eraseEnemy2();
void printEnemy3();
void eraseEnemy3();
void moveEnemy();
void moveEnemy2();
void moveEnemy3();
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}

main()
{
    system("cls");
    maze();
    printEnemy();
    printPlayer();
    printEnemy2();
    printEnemy3();
    while (true)
    {

        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        moveEnemy();
        moveEnemy2();
        moveEnemy3();

        Sleep(100);
    }
}
void printPlayer()

{
    gotoxy(pX, pY);
    cout << "   O   " << endl;
    gotoxy(pX, pY + 1);
    cout << "  /|\\ " << endl;
    gotoxy(pX, pY + 2);
    cout << "  / \\ " << endl;
    gotoxy(pX, pY + 3);
    cout << "  / \\ " << endl;
}
void erasePlayer()

{
    gotoxy(pX, pY);
    cout << "       " << endl;
    gotoxy(pX, pY + 1);
    cout << "       " << endl;
    gotoxy(pX, pY + 2);
    cout << "       " << endl;
    gotoxy(pX, pY + 3);
    cout << "       " << endl;
}
void printEnemy()

{
    gotoxy(eX, eY);
    cout << "   O     " << endl;
    gotoxy(eX, eY + 1);
    cout << "  /|\\   " << endl;
    gotoxy(eX, eY + 2);
    cout << "  / \\   " << endl;
}
void eraseEnemy()

{
    gotoxy(eX, eY);
    cout << "         " << endl;
    gotoxy(eX, eY + 1);
    cout << "         " << endl;
    gotoxy(eX, eY + 2);
    cout << "         " << endl;
}
void printEnemy2()

{
    gotoxy(eX1, eY1);
    cout << "   O    " << endl;
    gotoxy(eX1, eY1 + 1);
    cout << "  /|\\  " << endl;
    gotoxy(eX1, eY1 + 2);
    cout << "  / \\  " << endl;
}
void eraseEnemy2()

{
    gotoxy(eX1, eY1);
    cout << "         " << endl;
    gotoxy(eX1, eY1 + 1);
    cout << "         " << endl;
    gotoxy(eX1, eY1 + 2);
    cout << "         " << endl;
}
void printEnemy3()

{
    gotoxy(eX2, eY2);
    cout << "   O    " << endl;
    gotoxy(eX2, eY2 + 1);
    cout << "  /|\\  " << endl;
    gotoxy(eX2, eY2 + 2);
    cout << "  / \\  " << endl;
}
void eraseEnemy3()

{
    gotoxy(eX2, eY2);
    cout << "         " << endl;
    gotoxy(eX2, eY2 + 1);
    cout << "         " << endl;
    gotoxy(eX2, eY2 + 2);
    cout << "         " << endl;
}
void maze()

{
    cout << "**************************************************************" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "*                                                            *" << endl;
    cout << "**************************************************************" << endl;
}

void moveEnemy()
{
    eraseEnemy();
    eX = eX + 1;
    if (eX == 25)
    {
        while (eX != 3)
        {
            printEnemy();
            Sleep(50);
            eraseEnemy();
            eX = eX - 1;
        }
    }
    printEnemy();
}
void moveEnemy2()
{
    eraseEnemy2();
    eY1 = eY1 + 1;
    if (eY1 > 15)
    {
        eY1 = 2;
    }

    printEnemy2();
}
void moveEnemy3()
{
    eraseEnemy3();
    eY2 = eY2 + 1;
    eX2 = eX2 - 1;
    if (eY2 > 15 && eX2 == 25)
    {
        eY2 = 2;
        eX2 = 45;
    }

    printEnemy3();
}

void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {

        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}
void movePlayerRight()
{
    if (getCharAtxy(pX + 1, pY) == ' ')
    {

        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}