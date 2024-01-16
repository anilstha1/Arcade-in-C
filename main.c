#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "quiz.h"
#include "wordle.h"
#include "ticTacToe.h"
#include "rockPaperScissors.h"
#include "authentication.h"

void end(void)
{
    system("cls");
    system("color 9d");
    gotoxy(50, 20);
    Sleep(500);
    ;
    printf("BYE BYE! SEE YOU AGAIN");
    getch();
    system("cls");
    system("color 4f");
    gotoxy(50, 20);
    Sleep(500);
    ;
    printf("WE ARE GONING TO MISS YOU");
    getch();
}

void naatak()
{
    system("cls");
    gotoxy(10, 3);

    printf("<<<< Loading Please Wait >>>>");
    for (int i = 0; i < 5; i++)
    {
        printf("\t(*_*)");
        Sleep(500);
    }
    printf(" \n\n\n\n\n\t\t\t\t\t     *  *  *  *  *  *  *  *");
    printf("\n\n\t\t\t\t\t     *                    *");
    printf("\n\n\t\t\t\t\t     *       Welcome      *");
    printf("\n\n\t\t\t\t\t     *                    *");
    printf("\n\n\t\t\t\t\t     *  *  *  *  *  *  *  *");
    printf("\n\n\n\n\n\t\t\t\t\tPress any key to continue...... ");
    getch();
}

void main(void)
{

    system("cls");
    SetConsoleTitle("                 BK's Arcade");

    printf("\n\n\n\t\t\tPlease make sure you are in full screen mode. Thank you.");
    Sleep(2000);
    // just for decoration
    system("cls");
    gotoxy(10, 3);
    printf("<<<< Loading Please Wait >>>>");
    for (int i = 0; i < 5; i++)
    {
        printf("\t(*_*)");
        Sleep(500);
    }

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  WELCOME TO THE BK'S ARCADE...");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  Press Enter to Continue>>>");
    getch();
    authentication(); // does the authentication job,
    // rest of the code is executed if and only if the user is authenticated.

    // just for the asthetic puspose
    naatak();
    while (1)
    {
        system("cls");

        // allows user to chose a game
        int ch, i = 0;
        goto choose_option;
        while (ch != 13)
        {
        choose_option:
            system("cls");
            printf("\033[1;31m");
            printf("\n\n\n\nENTER TAB TO CHOOSE OPTION\n\n\n");
            printf("\033[0m");

            printf("\033[1;32m");
            printf("\tTIC-TAC-TOE\n");
            printf("\033[0m");
            printf("\tWORDLE\n");
            printf("\tGENERAL-QUIZ\n");
            printf("\tROCK-PAPER-SCISSORS\n\n");
            printf("\tQuit\n");
            fflush(stdin);
            ch = _getch();
            if (ch == 9)
            {
                system("cls");
                printf("\033[1;31m");
                printf("\n\n\n\nENTER TAB TO CHOOSE OPTION\n\n\n");
                printf("\033[0m");
                i++;
                printf("\tTIC-TAC-TOE\n");
                printf("\033[1;32m");
                printf("\tWORDLE\n");
                printf("\033[0m");
                printf("\tGENERAL-QUIZ\n");
                printf("\tROCK-PAPER-SCISSORS\n\n");
                printf("\tQuit\n");
                fflush(stdin);
                ch = _getch();
            }
            if (ch == 13)
                break;
            if (ch == 9)
            {
                system("cls");
                printf("\033[1;31m");
                printf("\n\n\n\nENTER TAB TO CHOOSE OPTION\n\n\n");
                printf("\033[0m");
                i++;
                printf("\tTIC-TAC-TOE\n");
                printf("\tWORDLE\n");
                printf("\033[1;32m");
                printf("\tGENERAL-QUIZ\n");
                printf("\033[0m");
                printf("\tROCK-PAPER-SCISSORS\n\n");
                printf("\tQuit\n");
                fflush(stdin);
                ch = _getch();
            }
            if (ch == 13)
                break;
            if (ch == 9)
            {
                system("cls");
                printf("\033[1;31m");
                printf("\n\n\n\nENTER TAB TO CHOOSE OPTION\n\n\n");
                printf("\033[0m");
                i++;
                printf("\tTIC-TAC-TOE\n");
                printf("\tWORDLE\n");
                printf("\tGENERAL-QUIZ\n");
                printf("\033[1;32m");
                printf("\tROCK-PAPER-SCISSORS\n\n");
                printf("\033[0m");
                printf("\tQuit\n");
                fflush(stdin);
                ch = _getch();
            }
            if (ch == 13)
                break;
            if (ch == 9)
            {
                system("cls");
                printf("\033[1;31m");
                printf("\n\n\n\nENTER TAB TO CHOOSE OPTION\n\n\n");
                printf("\033[0m");
                i++;
                printf("\tTIC-TAC-TOE\n");
                printf("\tWORDLE\n");
                printf("\tGENERAL-QUIZ\n");
                printf("\tROCK-PAPER-SCISSORS\n\n");
                printf("\033[1;32m");
                printf("\tQuit\n");
                printf("\033[0m");
                fflush(stdin);
                ch = _getch();
            }
            if (ch == 13)
                break;
            if (ch == 9)
                i = 0;
        }
        switch (i)
        {
        case 0:
            playTicTacToe(); // plays ticTacToe
            break;
        case 1:
            playWordle(); // plays wordle
            break;
        case 2:
            playQuiz(); // plays quiz
            break;
        case 3:
            playRockPaperScissors(); // plays RockPaperScissors
            break;
        case 4:
            end(); // ends the program
            exit(1);
        default:
            system("cls");
            system("color 4f");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t !!!!!!!!!Sorry you broke the game!!!!!!!!!");
            getch();
        }
        system("cls");
        system("color 0c");
        printf("\n\n\n\t\t\t\tYour cash prize has been transfered to your bank account.\n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWe are taking you to main menu...\n\n\t\t\t\t\t\t\t\t\t\tPress enter to continue>>>\n");
        getch();
        Sleep(2000);
    }
}