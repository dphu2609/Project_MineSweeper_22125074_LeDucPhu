#include <iostream>
#include "console.cpp"
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

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
    while(true) {
        ClearScreen();
        switch(getch()) {
            case KEY_DOWN:
                clrscr();
                ptr++;
                if (ptr>4) ptr=1;
                if (ptr==1) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "-----------------" << endl;
                    SetBGColor(14);
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    SetBGColor(0);
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    cout << "CUSTOM" << endl;
                }
                else if (ptr==2) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "------------------" << endl;
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    SetBGColor(14);
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    SetBGColor(0);
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    cout << "CUSTOM" << endl;
                }
                else if (ptr==3) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "------------------" << endl;
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    SetBGColor(14);
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    SetBGColor(0);
                    cout << "CUSTOM" << endl;
                }
                else if (ptr==4) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "------------------" << endl;
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    SetBGColor(14);
                    cout << "CUSTOM" << endl;
                }
                break;
            case KEY_UP: 
                clrscr();
                ptr--;
                if (ptr<1) ptr=4;
                if (ptr==1) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "-----------------" << endl;
                    SetBGColor(14);
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    SetBGColor(0);
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    cout << "CUSTOM" << endl;
                }
                else if (ptr==2) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "------------------" << endl;
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    SetBGColor(14);
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    SetBGColor(0);
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    cout << "CUSTOM" << endl;
                }
                else if (ptr==3) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "------------------" << endl;
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    SetBGColor(14);
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    SetBGColor(0);
                    cout << "CUSTOM" << endl;
                }
                else if (ptr==4) {
                    SetBGColor(0);
                    cout << "CHOOSE DIFFICULTY" << endl;
                    cout << "------------------" << endl;
                    cout << "BEGINER (9x9, 10 bombs)" << endl;
                    cout << "INTERMIDIATE (16x16, 40 bombs)" << endl;
                    cout << "EXPERT (16x30, 99 bombs)" << endl;
                    SetBGColor(14);
                    cout << "CUSTOM" << endl;
                    SetBGColor(0);
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
                else if (ptr==4) {
                    system("cls");
                    SetBGColor(0);
                    int height,width,bombs;
                    cout << "Enter height (2-16): ";
                    cin >> height;
                    cout << "Enter width (2-30): ";
                    cin >> width;
                    cout << "Enter bombs (2-400): ";
                    cin >> bombs;
                    play(height,width,bombs);
                }
                    break;
        }
    }
}

char display[16][60];
char answer[16][30];
bool checkRandomBombs[16][30];
bool checkBlankCell[16][30];

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

clock_t Timer(clock_t time_since_epoch, clock_t now) {
    return (int)(now-time_since_epoch)/1000;
}

struct Pointer {
    int x;
    int y;
};

void print(int height, int width, int bombs) {
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            set_BG_color(i,j*2,7,display[i][j*2]);
            set_BG_color(i,j*2+1,7,display[i][j*2+1]);
        }
    }
}

void openBlankCell(int i, int j, int height, int width) {
    if (i<0|| i>height-1 || j<0 || j>width-1) return;
    else if ((answer[i][j]==' ') && (checkBlankCell[i][j]==false)) {
        display[i-1][(j-1)*2]=answer[i-1][j-1];
        display[i-1][j*2]=answer[i-1][j];
        display[i-1][(j+1)*2]=answer[i-1][j+1];
        display[i][(j-1)*2]=answer[i][j-1];
        display[i][j*2]=answer[i][j];
        display[i][(j+1)*2]=answer[i][j+1];
        display[i+1][(j-1)*2]=answer[i+1][j-1];
        display[i+1][j*2]=answer[i+1][j];
        display[i+1][(j+1)*2]=answer[i+1][j+1];
        checkBlankCell[i][j]=true;
        openBlankCell(i,j-1,height,width);
        openBlankCell(i,j+1,height,width);
        openBlankCell(i+1,j,height,width);
        openBlankCell(i-1,j,height,width);
        openBlankCell(i-1,j-1,height,width);
        openBlankCell(i-1,j+1,height,width);
        openBlankCell(i+1,j-1,height,width);
        openBlankCell(i+1,j-1,height,width);
    }   
    else return;
}

void play(int height, int width, int bombs) {
    srand(time(0));
    createAnswer(height,width,bombs);
    clock_t time_since_epoch = clock();
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            display[i][j*2]='.';
            display[i][j*2+1]=' ';
        }
    }
    print(height,width,bombs);
    set_BG_color(0,0,10,'.');
    set_BG_color(0,1,10,' ');
    for (int i=0;i<height;i++) {
        cout << endl;
    }
    set_BG_color(height,0,0,' ');
    cout << endl;
    cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
    cout << "Double press X to OPEN" << endl;
    cout << "Double press Z to MARK" << endl;
    Pointer ptr;
    ptr.x=0;
    ptr.y=0;
    while(true) {
        if (getch()) {
            switch(getch()) {
                case KEY_UP: 
                    ClearScreen();
                    ptr.x--;
                    if (ptr.x<0) ptr.x=height-1;
                    print(height,width,bombs);
                    set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                    for (int i=ptr.x;i<height;i++) {
                        cout << endl;
                    }
                    set_BG_color(height,0,0,' ');
                    cout << endl;
                    cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                    cout << "Double press X to OPEN" << endl;
                    cout << "Double press Z to MARK" << endl;
                    break;
                case KEY_DOWN: 
                    ClearScreen();
                    ptr.x++;
                    if (ptr.x>height-1) ptr.x=0;
                    print(height,width,bombs);
                    set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                    for (int i=ptr.x;i<height;i++) {
                        cout << endl;
                    }
                    set_BG_color(height,0,0,' ');
                    cout << endl;
                    cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                    cout << "Double press X to OPEN" << endl;
                    cout << "Double press Z to MARK" << endl;
                    break;
                case KEY_RIGHT: 
                    ClearScreen();
                    ptr.y++;
                    if (ptr.y>width-1) ptr.y=0;
                    print(height,width,bombs);
                    set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                    for (int i=ptr.x;i<height;i++) {
                        cout << endl;
                    }
                    set_BG_color(height,0,0,' ');
                    cout << endl;
                    cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                    cout << "Double press X to OPEN" << endl;
                    cout << "Double press Z to MARK" << endl;
                    break;
                case KEY_LEFT:
                    ClearScreen();
                    ptr.y--;
                    if (ptr.y<0) ptr.y=width-1;
                    print(height,width,bombs);
                    set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                    for (int i=ptr.x;i<height;i++) {
                        cout << endl;
                    }
                    set_BG_color(height,0,0,' ');
                    cout << endl;
                    cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                    cout << "Double press X to OPEN" << endl;
                    cout << "Double press Z to MARK" << endl;
                    break;
                case KEY_X:
                    clrscr();
                    if (answer[ptr.x][ptr.y]=='B') {
                        ClearScreen();
                        for (int i=0;i<height;i++) {
                            for (int j=0;j<width;j++) {
                                display[i][j*2]=answer[i][j];
                            }
                        }
                        print(height,width,bombs);
                        for (int i=ptr.x;i<height;i++) {
                            cout << endl;
                        }
                        set_BG_color(height,0,0,' ');
                        cout << endl;
                        cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                        cout << "HCMUS HAS EXPLODED! YOU WILL GET 0 POINT THIS SEMESTER! :)";
                        SetBGColor(0);
                    }
                    else if (answer[ptr.x][ptr.y]==' ') {
                        ClearScreen();
                        openBlankCell(ptr.x,ptr.y,height,width);
                        print(height,width,bombs);
                        for (int i=ptr.x;i<height;i++) {
                            cout << endl;
                        }
                        set_BG_color(height,0,0,' ');
                        cout << endl;
                        cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                        cout << "Double Press X to OPEN" << endl;
                        cout << "Double Press Z to MARK";
                        SetBGColor(0);
                    }
                    else {
                        ClearScreen();
                        display[ptr.x][ptr.y*2]=answer[ptr.x][ptr.y];
                        print(height,width,bombs);
                        for (int i=ptr.x;i<height;i++) {
                            cout << endl;
                        }
                        set_BG_color(height,0,0,' ');
                        cout << endl;
                        cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                        cout << "Double press X to OPEN" << endl;
                        cout << "Double press Z to MARK";
                        SetBGColor(0);
                    }
                    break;
                case KEY_Z:
                    ClearScreen();
                    display[ptr.x][ptr.y*2]='P';
                    print(height,width,bombs);
                    for (int i=ptr.x;i<height;i++) {
                        cout << endl;
                    }
                    set_BG_color(height,0,0,' ');
                    cout << endl;
                    cout << "TIME: " << Timer(time_since_epoch,clock()) << endl;
                    cout << "Double press X to OPEN" << endl;
                    cout << "Double press Z to MARK";
                    SetBGColor(0);
                    break;
            }
        }
    }
}