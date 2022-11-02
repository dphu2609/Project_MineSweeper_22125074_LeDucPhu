#include <iostream>
#include "console.cpp"
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <fstream>

using namespace std;

ofstream fout;
ifstream fin;

char display[16][60];
char answer[16][30];
bool checkBlankCell[16][30];
bool checkRandomBombs[16][30];
int Time=0;

using namespace std;

void newGame();
void loadGame();

void menu() {
    system("cls");
    SetColor(2);
    int ptr=1;
    cout << endl;
    cout << "WELCOME TO MINESWEEPER" << endl;
    cout << "----------------------" << endl;
    SetBGColor(14);
    cout << "NEW GAME" << endl;
    SetBGColor(0);
    cout << "CONTINUE PLAYING" << endl;
    cout << "HIGHSCORE" << endl;
    cout << "EXIT" << endl;
    while(true) {
        ClearScreen();
        cout << endl;
        switch(getch()) {
            case KEY_DOWN:
                clrscr();
                ptr++;
                if (ptr>4) ptr=1;
                if (ptr==1) {
                    SetBGColor(0);
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
                    SetBGColor(0);
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
                    SetBGColor(0);
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
                    SetBGColor(0);
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
                    SetBGColor(0);
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
                    SetBGColor(0);
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
                    SetBGColor(0);
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
                    SetBGColor(0);
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
                else if (ptr==2) {
                    system("cls");
                    loadGame();
                }
                else if (ptr==3) {
                    system("cls");
                    int highscore[5];
                    fin.open("high_score_beginer.txt");
                    for (int i=0;i<5;i++) {
                        fin >> highscore[i];
                    }
                    fin.close();
                    cout << "TOP 5 of BEGINER: " << endl;
                    for (int i=0;i<5;i++) {
                        cout << highscore[i] << endl;
                    }
                    fin.open("high_score_intermidiate.txt");
                    for (int i=0;i<5;i++) {
                        fin >> highscore[i];
                    }
                    fin.close();
                    cout << "TOP 5 of INTERMIDIATE: " << endl;
                    for (int i=0;i<5;i++) {
                        cout << highscore[i] << endl;
                    }
                    fin.open("high_score_EXPERT.txt");
                    for (int i=0;i<5;i++) {
                        fin >> highscore[i];
                    }
                    fin.close();
                    cout << "TOP 5 of EXPERT: " << endl;
                    for (int i=0;i<5;i++) {
                        cout << highscore[i] << endl;
                    }
                    getch();
                    menu();
                    break;
                }
                else if (ptr==4) {
                    system("cls");
                    cout << "THANK YOU FOR PLAYING!" << endl;
                    system("pause");
                    exit(0);
                    break;
                }
                break;
        }
    }
}

void play(int height, int width, int bombs);
void createAnswer(int height, int width, int bombs);

void newGame() {
    system("cls");
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
                    createAnswer(9,9,10);
                    play(9,9,10);
                }
                else if (ptr==2) {
                    system("cls");
                    createAnswer(16,16,40);
                    play(16,16,40);
                }
                else if (ptr==3) {
                    system("cls");
                    createAnswer(16,30,99);
                    play(16,30,99);
                }
                else if (ptr==4) {
                    SetBGColor(0);
                    system("cls");
                    int height,width,bombs;
                    SetBGColor(0);
                    cout << "Enter height (2-16): ";
                    cin >> height;
                    cout << "Enter width (2-30): ";
                    cin >> width;
                    cout << "Enter bombs (2-400): ";
                    cin >> bombs;
                    if (height<2 || height>16 || width<2 || width >30 || bombs>height*width) {
                        cout << "INVALID VALUE! PLEASE TRY AGAIN" << endl;
                        getch();
                        newGame();
                    }
                    else {
                        createAnswer(height,width,bombs);
                        play(height,width,bombs);
                    }
                }
                break;
        }
    }
}

void createAnswer(int height, int width, int bombs) {
    srand(time(0));
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            checkRandomBombs[i][j]=false;
            answer[i][j]=' ';
            checkBlankCell[i][j]=false;
        }
    }
    int count = 1;
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
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            display[i][j*2]='.';
            display[i][j*2+1]=' ';
        }
    }
    fout.open("answer.txt");
    fout << '1' << endl;
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            if (answer[i][j]==' ') fout << '*' << endl;
            else fout << answer[i][j] << endl;
        }
    }
    fout.close();
    fout.open("height_width.txt");
    fout << height << endl;
    fout << width << endl;
    fout << bombs << endl;
    fout << 0 << endl;
    fout << 0 << endl;
    fout << 0 << endl;
    fout.close();
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
            if (display[i][j*2]=='P') {
                set_BG_color(i,j*2,14,display[i][j*2]);
                set_BG_color(i,j*2+1,14,display[i][j*2+1]);
            }
            else {
                set_BG_color(i,j*2,7,display[i][j*2]);
                set_BG_color(i,j*2+1,7,display[i][j*2+1]);
            }
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
        set_BG_color(i,j*2,7,display[i][j*2]);
        set_BG_color(i,j*2+1,7,display[i][j*2+1]);
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
        openBlankCell(i+1,j+1,height,width);
    }   
    else if (answer[i][j]=='B') return;
    else  {
        set_BG_color(i,j*2,7,display[i][j*2]);
        set_BG_color(i,j*2+1,7,display[i][j*2+1]);
        return;
    }
}

void play(int height, int width, int bombs) {
    int countMark;
    int countMarkMatchBombs;
    fin.open("height_width.txt");
    fin >> Time;
    fin >> Time;
    fin >> Time;
    fin >> Time;
    fin >> countMark;
    fin >> countMarkMatchBombs;
    fin.close();
    NoCursorType();
    SetColor(2);
    clock_t time_since_epoch = clock();
    print(height,width,bombs);
    set_BG_color(0,0,10,display[0][0]);
    set_BG_color(0,1,10,display[0][1]);
    set_BG_color(0,width*2,0,' ');
    set_BG_color(height,0,0,' ');
    cout << endl;
    cout << "TIME: " << Time+Timer(time_since_epoch,clock()) << endl;
    cout << "Press X to OPEN" << endl;
    cout << "Press Z to MARK" << endl;
    Pointer ptr;
    ptr.x=0;
    ptr.y=0;
    while(true) {
        int checkpoint = Time+Timer(time_since_epoch,clock());
        while (!kbhit()) 
        {
            int Sec = Time+Timer(time_since_epoch,clock());
            if (Sec == checkpoint) continue;
            checkpoint = Sec;
            fout.open("height_width.txt");
            fout << height << endl;
            fout << width << endl;
            fout << bombs << endl;
            fout << checkpoint << endl;
            fout << countMark << endl;
            fout << countMarkMatchBombs;
            fout.close();
            // for (int i=0;i<height;i++) {
            //     cout << endl;
            // }
            set_BG_color(height,0,0,' ');
            cout << endl;
            cout << "TIME: " << Time+Timer(time_since_epoch,clock()) << endl;
            cout << "Press X to OPEN" << endl;
            cout << "Press Z to MARK" << endl;
        }
        auto Key = getch();
        switch(Key) {
            case KEY_UP:    
                if (display[ptr.x][ptr.y*2]=='P') {
                    set_BG_color(ptr.x,ptr.y*2,14,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,14,display[ptr.x][ptr.y*2+1]);
                }
                else {
                    set_BG_color(ptr.x,ptr.y*2,7,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,7,display[ptr.x][ptr.y*2+1]);
                }
                ptr.x--;
                if (ptr.x<0) ptr.x=height-1;
                set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                break;
            case KEY_DOWN: 
                if (display[ptr.x][ptr.y*2]=='P') {
                    set_BG_color(ptr.x,ptr.y*2,14,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,14,display[ptr.x][ptr.y*2+1]);
                }
                else {
                    set_BG_color(ptr.x,ptr.y*2,7,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,7,display[ptr.x][ptr.y*2+1]);
                }
                ptr.x++;
                if (ptr.x>height-1) ptr.x=0;
                set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                break;
            case KEY_RIGHT: 
                if (display[ptr.x][ptr.y*2]=='P') {
                    set_BG_color(ptr.x,ptr.y*2,14,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,14,display[ptr.x][ptr.y*2+1]);
                }
                else {
                    set_BG_color(ptr.x,ptr.y*2,7,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,7,display[ptr.x][ptr.y*2+1]);
                }
                ptr.y++;
                if (ptr.y>width-1) ptr.y=0;
                set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                break;
            case KEY_LEFT:
                if (display[ptr.x][ptr.y*2]=='P') {
                    set_BG_color(ptr.x,ptr.y*2,14,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,14,display[ptr.x][ptr.y*2+1]);
                }
                else {
                    set_BG_color(ptr.x,ptr.y*2,7,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,7,display[ptr.x][ptr.y*2+1]);
                }
                ptr.y--;
                if (ptr.y<0) ptr.y=width-1;
                set_BG_color(ptr.x,ptr.y*2,10,display[ptr.x][ptr.y*2]);
                set_BG_color(ptr.x,ptr.y*2+1,10,display[ptr.x][ptr.y*2+1]);
                break;
            case KEY_X:
                if (answer[ptr.x][ptr.y]=='B') {
                    system("cls");
                    for (int i=0;i<height;i++) {
                        for (int j=0;j<width;j++) {
                            if (answer[i][j]=='B') display[i][j*2]=answer[i][j];
                        }
                    }
                    print(height,width,bombs);
                    for (int i=ptr.x;i<height;i++) {
                        cout << endl;
                    }
                    set_BG_color(height,0,0,' ');
                    cout << endl;
                    cout << "GAME OVER!" << endl;
                    cout << "TIME: " << Time + Timer(time_since_epoch,clock()) << endl;
                    cout << "HCMUS HAS EXPLODED! YOU WILL GET 0 POINT THIS SEMESTER! :)" << endl;
                    SetBGColor(0);
                    fout.open("answer.txt");
                    fout << '0';
                    fout.close();
                    system("pause");
                    menu();
                }
                else if (answer[ptr.x][ptr.y]==' ') openBlankCell(ptr.x,ptr.y,height,width);
                else {
                    display[ptr.x][ptr.y*2]=answer[ptr.x][ptr.y];
                    set_BG_color(ptr.x,ptr.y*2,7,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,7,display[ptr.x][ptr.y*2+1]);
                }
                fout.open("display.txt");
                for (int i=0;i<height;i++) {
                    for (int j=0;j<width*2;j++) {
                        if (display[i][j]==' ') fout << '*' << endl;
                        else fout << display[i][j] << endl;
                    }
                }
                fout.close();
                break;
            case KEY_Z:
                if (display[ptr.x][ptr.y*2]=='P') {
                    display[ptr.x][ptr.y*2] = '.';
                    countMark--;
                    if (answer[ptr.x][ptr.y]=='B') countMarkMatchBombs--;
                    set_BG_color(ptr.x,ptr.y*2,7,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,7,display[ptr.x][ptr.y*2+1]);
                }
                else if (display[ptr.x][ptr.y*2]=='.') {
                    display[ptr.x][ptr.y*2]='P';
                    countMark++;
                    if (answer[ptr.x][ptr.y]=='B') countMarkMatchBombs++;
                    set_BG_color(ptr.x,ptr.y*2,14,display[ptr.x][ptr.y*2]);
                    set_BG_color(ptr.x,ptr.y*2+1,14,display[ptr.x][ptr.y*2+1]);
                }
                fout.open("display.txt");
                for (int i=0;i<height;i++) {
                    for (int j=0;j<width*2;j++) {
                        if (display[i][j]==' ') fout << '*' << endl;
                        else fout << display[i][j] << endl;
                    }
                }
                fout.close();
                fout.open("height_width.txt");
                fout << height << endl;
                fout << width << endl;
                fout << bombs << endl;
                fout << Time + Timer(time_since_epoch,clock()) << endl;
                fout << countMark << endl;
                fout << countMarkMatchBombs << endl;
                fout.close();
                break;
            case KEY_ESC:
                fout.open("height_width.txt");
                fout << height << endl;
                fout << width << endl;
                fout << bombs << endl;
                fout << Time + Timer(time_since_epoch,clock()) << endl;
                fout << countMark << endl;
                fout << countMarkMatchBombs;
                fout.close();
                system("cls");
                cout << "YOU HAVE EXITED THE GAME! THE GAME HAS BEEN SAVED!" << endl;
                system("pause");
                exit(0);
                break;
        }
        set_BG_color(height,0,0,' ');
        cout << endl;
        cout << "TIME: " << Time+Timer(time_since_epoch,clock()) << endl;
        cout << "Press X to OPEN" << endl;
        cout << "Press Z to MARK" << endl;
        SetBGColor(0);
        if (countMark==bombs && countMarkMatchBombs==bombs) { //winning condition
            bool checkWin=0;
            for (int i=0;i<height;i++) {
                for (int j=0;j<width;j++) {
                    if (display[i][j*2]=='.') {
                        checkWin=1;
                        break;
                    }
                }
                if (checkWin) break;
            }
            if (checkWin==0) {
                system("cls");
                print(height,width,bombs);
                for (int i=ptr.x;i<height;i++) {
                    cout << endl;
                }
                set_BG_color(height,0,0,' ');
                cout << endl;
                cout << "YOU WIN! YOU WILL GET A+ CS161 THIS SEMESTER!" << endl;
                cout << "TIME: " << Time+Timer(time_since_epoch,clock()) << endl;
                int score = Time+Timer(time_since_epoch,clock()) ;
                int highscore[5];
                if (height==9 && width==9 && bombs==10) fin.open("high_score_beginer.txt");
                else if (height==16 && width==16 && bombs==40) fin.open("high_score_intermidiate.txt");
                else if (height==16 && width==30 && bombs==99) fin.open("high_score_expert.txt");
                for (int i=0;i<5;i++) {
                    fin >> highscore[i];
                }
                fin.close();
                int index=5;
                for (int i=0;i<5;i++) {
                    if (score<highscore[i]) {
                        index=i;
                        break;
                    }
                }
                for (int i=4;i>index;i--) {
                    highscore[i]=highscore[i-1];
                }
                highscore[index]=score;
                if (height==9 && width==9 && bombs==10) fout.open("high_score_beginer.txt");
                else if (height==16 && width==16 && bombs==40) fout.open("high_score_intermidiate.txt");
                else if (height==16 && width==30 && bombs==99) fout.open("high_score_expert.txt");
                for (int i=0;i<5;i++) {
                    fout << highscore[i] << endl;
                }
                fout.close();
                fout.open("answer.txt");
                fout << '0';
                fout.close();
                SetBGColor(0);
                system("pause");
                menu();
            }
        }
    }
}

void loadGame() {
    int height, width, bombs;
    fin.open("answer.txt");
    char temp;
    fin >> temp;
    fin.close();
    if (temp!='1') {
        fin.close();
        newGame();
    }
    else {
        fin.open("height_width.txt");
        fin >> height;
        fin >> width;
        fin >> bombs;
        fin.close();
        fin.open("answer.txt");
        fin >> temp;
        for (int i=0;i<height;i++) {
            for (int j=0;j<width;j++) {
                fin >> temp;
                if (temp=='*') answer[i][j]=' ';
                else answer[i][j]=temp;
            }
        }
        fin.close();
        fin.open("display.txt");
        for (int i=0;i<height;i++) {
            for (int j=0;j<width*2;j++) {
                fin >> temp;
                if (temp=='*') display[i][j]=' ';
                else display[i][j]=temp;
            }
        }
        fin.close();
        play(height,width,bombs);
    }
}