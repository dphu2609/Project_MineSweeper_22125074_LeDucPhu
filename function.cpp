#include <iostream>
#include "console.cpp"
#include <time.h>

using namespace std;

void newGame();

void menu() {
    int ptr=1;
    cout << "WELCOME TO MINESWEEPER" << endl;
    cout << "----------------------" << endl;
    SetBGColor(14);
    cout << "NEW GAME" << endl;
    SetBGColor(0);
    cout << "CONTINUE PLAYING" << endl;
    cout << "HIGHSCORE" << endl;
    cout << "EXIT" << endl;
    _getch();
    while(true) {
        ClearScreen();
        switch(getch()) {
            case KEY_DOWN:
            clrscr();
            ptr++;
            if (ptr>4) ptr=1;
            if (ptr==1) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                SetBGColor(14);
                cout << "NEW GAME" << endl;
                SetBGColor(0);
                cout << "CONTINUE PLAYING" << endl;
                cout << "HIGHSCORE" << endl;
                cout << "EXIT" << endl;
                _getch();
            }
            else if (ptr==2) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                cout << "NEW GAME" << endl;
                SetBGColor(14);
                cout << "CONTINUE PLAYING" << endl;
                SetBGColor(0);
                cout << "HIGHSCORE" << endl;
                cout << "EXIT" << endl;
                _getch();
            }
            else if (ptr==3) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                cout << "NEW GAME" << endl;
                cout << "CONTINUE PLAYING" << endl;
                SetBGColor(14);
                cout << "HIGHSCORE" << endl;
                SetBGColor(0);
                cout << "EXIT" << endl;
                _getch();
            }
            else if (ptr==4) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                cout << "NEW GAME" << endl;
                cout << "CONTINUE PLAYING" << endl;
                cout << "HIGHSCORE" << endl;
                SetBGColor(14);
                cout << "EXIT" << endl;
                SetBGColor(0);
                _getch();
            }
            break;
            case KEY_UP: 
            clrscr();
            ptr--;
            if (ptr<1) ptr=4;
            if (ptr==1) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                SetBGColor(14);
                cout << "NEW GAME" << endl;
                SetBGColor(0);
                cout << "CONTINUE PLAYING" << endl;
                cout << "HIGHSCORE" << endl;
                cout << "EXIT" << endl;
                _getch();
            }
            else if (ptr==2) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                cout << "NEW GAME" << endl;
                SetBGColor(14);
                cout << "CONTINUE PLAYING" << endl;
                SetBGColor(0);
                cout << "HIGHSCORE" << endl;
                cout << "EXIT" << endl;
                _getch();
            }
            else if (ptr==3) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                cout << "NEW GAME" << endl;
                cout << "CONTINUE PLAYING" << endl;
                SetBGColor(14);
                cout << "HIGHSCORE" << endl;
                SetBGColor(0);
                cout << "EXIT" << endl;
                _getch();
            }
            else if (ptr==4) {
                cout << "WELCOME TO MINESWEEPER" << endl;
                cout << "----------------------" << endl;
                cout << "NEW GAME" << endl;
                cout << "CONTINUE PLAYING" << endl;
                cout << "HIGHSCORE" << endl;
                SetBGColor(14);
                cout << "EXIT" << endl;
                SetBGColor(0);
                _getch();
            }
            break;
            case KEY_ENTER:
            if (ptr==1) {
                system("cls");
                newGame();
            }
            else if (ptr==2) cout << 2;
            else if (ptr==3) cout << 3;
            else if (ptr==4) {
                system("cls");
                cout << "THANK YOU FOR PLAYING!" << endl;
                system("pause");
                break;
            }
            break;
        }
    }
}

void play(int height, int width, int bombs);

void newGame() {
    int ptr=1;
    cout << "CHOOSE DIFFICULTY" << endl;
    cout << "-----------------" << endl;
    SetBGColor(14);
    cout << "BEGINER (9x9, 10 bombs)" << endl;
    SetBGColor(0);
    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
    cout << "EXPERT (16x30, 99 bombs)" << endl;
    cout << "CUSTOM" << endl;
    _getch();
    while(true) {
        ClearScreen();
        switch(getch()) {
            case KEY_DOWN:
            clrscr();
            ptr++;
            if (ptr>4) ptr=1;
            if (ptr==1) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "-----------------" << endl;
                SetBGColor(14);
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                SetBGColor(0);
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                cout << "CUSTOM" << endl;
                _getch();
            }
            else if (ptr==2) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "------------------" << endl;
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                SetBGColor(14);
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                SetBGColor(0);
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                cout << "CUSTOM" << endl;
                _getch();
            }
            else if (ptr==3) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "------------------" << endl;
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                SetBGColor(14);
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                SetBGColor(0);
                cout << "CUSTOM" << endl;
                _getch();
            }
            else if (ptr==4) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "------------------" << endl;
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                SetBGColor(14);
                cout << "CUSTOM" << endl;
                SetBGColor(0);
                _getch();
            }
            break;
            case KEY_UP: 
            clrscr();
            ptr--;
            if (ptr<1) ptr=4;
            if (ptr==1) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "-----------------" << endl;
                SetBGColor(14);
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                SetBGColor(0);
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                cout << "CUSTOM" << endl;
                _getch();
            }
            else if (ptr==2) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "------------------" << endl;
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                SetBGColor(14);
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                SetBGColor(0);
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                cout << "CUSTOM" << endl;
                _getch();
            }
            else if (ptr==3) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "------------------" << endl;
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                SetBGColor(14);
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                SetBGColor(0);
                cout << "CUSTOM" << endl;
                _getch();
            }
            else if (ptr==4) {
                cout << "CHOOSE DIFFICULTY" << endl;
                cout << "------------------" << endl;
                cout << "BEGINER (9x9, 10 bombs)" << endl;
                cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                cout << "EXPERT (16x30, 99 bombs)" << endl;
                SetBGColor(14);
                cout << "CUSTOM" << endl;
                SetBGColor(0);
                _getch();
            }
            break;
            case KEY_ENTER:
            if (ptr==1) {
                system("cls");
                play(9,9,10);
            }
            else if (ptr==2) {
                system("cls");
                play(16,16,40);
            }
            else if (ptr==3) {
                system("cls");
                play(16,30,99);
            }
            else if (ptr==4) cout << 1;
            break;
        }
    }
}

char display[61][61];
char answer[16][30];
bool checkRandomBombs[16][30];

void createAnswer(int height, int width, int bombs) {
    int count = 0;
    while (count <= bombs) {
        int i=rand()%height;
        int j=rand()%width;
        if (checkRandomBombs[i][j]) continue;
        else {
            checkRandomBombs[i][j]=true;
            count++;
            answer[i][j]='B';
        }
    }
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            count = 0;
            if (answer[i][j]=='B') continue;
            if (answer[i-1][j-1]=='B') count++;
            if (answer[i-1][j]=='B') count++;
            if (answer[i-1][j+1]=='B') count++;
            if (answer[i][j-1]=='B') count++;
            if (answer[i][j+1]=='B') count++;
            if (answer[i+1][j-1]=='B') count++;
            if (answer[i+1][j]=='B') count++;
            if (answer[i+1][j+1]=='B') count++;
            if (count==0) answer[i][j]=' ';
            else answer[i][j]=count+48;
        }
    }
}

void play(int height, int width, int bombs) {
    srand(time(0));
    createAnswer(height,width,bombs);
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            cout << answer[i][j] << ' ';
        }
        cout << endl;
    }
}