#include <stdio.h>
#include <conio.h>

int main()
{
    int ch = 1, i = 0;
    printf("enter a number: ");
    int n = _getch(); // this returns the ascii value of the key pressed.
    printf("the number is A%d\n", n);
    getch();
    while (ch != 13) // 13 is the ascii value of enter
    // 9is the ascii value of tab
    {
        system("cls");
        printf("\033[1;32m"); // 1 sets bold, 32m sets color green
        printf("\t1 for TIC-TAC-TOE\n");
        printf("\033[0m"); // this sets the font to normal
        printf("\t2 for WORDLE\n");
        printf("\t3 for GENERAL-QUIZ\n");
        printf("\t4 for ROCK-PAPER-SCISSORS\n\n");
        printf("\t5 to quit.\n");

        ch = _getch();
        if (ch == 9)
        {
            system("cls");
            i++;
            printf("\tfor TIC-TAC-TOE\n");
            printf("\033[1;32m");
            printf("\t2 for WORDLE\n");
            printf("\033[0m");
            printf("\t3 for GENERAL-QUIZ\n");
            printf("\t4 for ROCK-PAPER-SCISSORS\n\n");
            printf("\t5 to quit.\n");
            ch = _getch();
        }
        if (ch == 13)
            break;
        if (ch == 9)
        {
            system("cls");
            i++;
            printf("\t1 for TIC-TAC-TOE\n");
            printf("\t2 for WORDLE\n");
            printf("\033[1;32m");
            printf("\t3 for GENERAL-QUIZ\n");
            printf("\033[0m");
            printf("\t4 for ROCK-PAPER-SCISSORS\n\n");
            printf("\t5 to quit.\n");
            ch = _getch();
        }
        if (ch == 13)
            break;
        if (ch == 9)
        {
            system("cls");
            i++;
            printf("\t1 for TIC-TAC-TOE\n");
            printf("\t2 for WORDLE\n");
            printf("\t3 for GENERAL-QUIZ\n");
            printf("\033[1;32m");
            printf("\t4 for ROCK-PAPER-SCISSORS\n\n");
            printf("\033[0m");
            printf("\t5 to quit.\n");
            ch = _getch();
        }
        if (ch == 13)
            break;
        if (ch == 9)
        {
            system("cls");
            i++;
            printf("\t1 for TIC-TAC-TOE\n");
            printf("\t2 for WORDLE\n");
            printf("\t3 for GENERAL-QUIZ\n");
            printf("\t4 for ROCK-PAPER-SCISSORS\n\n");
            printf("\033[1;32m");
            printf("\t5 to quit.\n");
            printf("\033[0m");
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
        printf("tiktaktoe");
        break;
    case 1:
        printf("wordle");
        break;
    case 2:
        printf("quiz");
        break;
    case 3:
        printf("rockpaperscissors");
        break;
    case 4:
        // ends the program
        exit(1);
    default:
        system("cls");
        system("color 4f");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t !!!!!!!!!Sorry you broke the game!!!!!!!!!");
        getch();
    }

    return 0;
}