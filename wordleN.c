#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int random_num()
{
    srand(time(NULL));
    int num = rand() % 609;
    return num;
}

char table(int i)
{
    for (int j = 0; j <= (5 - i); j++)
    {
        printf("\t\t\t\t\t|     |     |     |     |     |\n");
        printf("\t\t\t\t\t|     |     |     |     |     |\n");
        printf("\t\t\t\t\t|_____|_____|_____|_____|_____|\n");
    }
}

void take_input(int i, char user_word[7][5])
{

top:

    printf("ENTER WORD: ");
    fflush(stdin);
    gets(user_word + i);
    strupr(user_word + i);
    if (strlen(user_word + i) != 5)
    {
        printf("ENTER 5 LETTER WORD\n");
        goto top;
    }
}

int check_char(char word, char random_word[])
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (word == random_word[i])
            return 1;
    }
    return 0;
}

void first_row(int i, char user_word[7][5], char random_word[])
{
    system("cls");
    printf("\033[0;32m");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\tWORDLE\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tGREEN");
    printf("\033[0m");
    printf("-THE LETTER IS IN RIGHT POSITION\n");
    printf("\033[0;33m");
    printf("\t\t\t\t\t\t\t\t\t\t\tYELLOW");
    printf("\033[0m");
    printf("-THE LETTER IS IN THE WORD\n");

    printf("\t\t\t\t\t\t\t\t\t\t\tLIVES-%d\n", (5 - i));

    printf("\t\t\t\t\t _____ _____ _____ _____ _____\n");
    printf("\t\t\t\t\t|     |     |     |     |     |\n");
    printf("\t\t\t\t\t|");
    for (int i = 0; i < 5; i++)
    {
        char word = user_word[0][i];
        int j = check_char(word, random_word);
        if (j == 1 && word == random_word[i])
        {
            printf("\033[1;32m");
            printf("  %c  ", user_word[0][i]);
            printf("\033[0m");
            printf("|");
        }
        else if (j == 1)
        {
            printf("\033[0;33m");
            printf("  %c  ", user_word[0][i]);
            printf("\033[0m");
            printf("|");
        }
        else
        {

            printf("  %c  |", user_word[0][i]);
        }
    }
    printf("\n");
    printf("\t\t\t\t\t|_____|_____|_____|_____|_____|\n");

    if (i > 0)
        second_row(i, user_word, random_word);
    else
        table(i + 1);
}
void second_row(int i, char user_word[7][5], char random_word[])
{
    printf("\t\t\t\t\t|     |     |     |     |     |\n");
    printf("\t\t\t\t\t|");
    for (int i = 0; i < 5; i++)
    {
        char word = user_word[1][i];
        int j = check_char(word, random_word);
        if (j == 1 && word == random_word[i])
        {
            printf("\033[1;32m");
            printf("  %c  ", user_word[1][i]);
            printf("\033[0m");
            printf("|");
        }
        else if (j == 1)
        {
            printf("\033[0;33m");
            printf("  %c  ", user_word[1][i]);
            printf("\033[0m");
            printf("|");
        }
        else
        {

            printf("  %c  |", user_word[1][i]);
        }
    }
    printf("\n");
    printf("\t\t\t\t\t|_____|_____|_____|_____|_____|\n");
    if (i > 1)
        third_row(i, user_word, random_word);
    else
        table(i + 1);
}
void third_row(int i, char user_word[7][5], char random_word[])
{
    printf("\t\t\t\t\t|     |     |     |     |     |\n");
    printf("\t\t\t\t\t|");
    for (int i = 0; i < 5; i++)
    {
        char word = user_word[2][i];
        int j = check_char(word, random_word);
        if (j == 1 && word == random_word[i])
        {
            printf("\033[1;32m");
            printf("  %c  ", user_word[2][i]);
            printf("\033[0m");
            printf("|");
        }
        else if (j == 1)
        {
            printf("\033[0;33m");
            printf("  %c  ", user_word[2][i]);
            printf("\033[0m");
            printf("|");
        }
        else
        {

            printf("  %c  |", user_word[2][i]);
        }
    }
    printf("\n");
    printf("\t\t\t\t\t|_____|_____|_____|_____|_____|\n");
    if (i > 2)
        forth_row(i, user_word, random_word);
    else
        table(i + 1);
}
void forth_row(int i, char user_word[7][5], char random_word[])
{
    printf("\t\t\t\t\t|     |     |     |     |     |\n");
    printf("\t\t\t\t\t|");
    for (int i = 0; i < 5; i++)
    {
        char word = user_word[3][i];
        int j = check_char(word, random_word);
        if (j == 1 && word == random_word[i])
        {
            printf("\033[1;32m");
            printf("  %c  ", user_word[3][i]);
            printf("\033[0m");
            printf("|");
        }
        else if (j == 1)
        {
            printf("\033[0;33m");
            printf("  %c  ", user_word[3][i]);
            printf("\033[0m");
            printf("|");
        }
        else
        {

            printf("  %c  |", user_word[3][i]);
        }
    }
    printf("\n");
    printf("\t\t\t\t\t|_____|_____|_____|_____|_____|\n");
    if (i > 3)
        fifth_row(i, user_word, random_word);
    else
        table(i + 1);
}
void fifth_row(int i, char user_word[7][5], char random_word[])
{
    printf("\t\t\t\t\t|     |     |     |     |     |\n");
    printf("\t\t\t\t\t|");
    for (int i = 0; i < 5; i++)
    {
        char word = user_word[4][i];
        int j = check_char(word, random_word);
        if (j == 1 && word == random_word[i])
        {
            printf("\033[1;32m");
            printf("  %c  ", user_word[4][i]);
            printf("\033[0m");
            printf("|");
        }
        else if (j == 1)
        {
            printf("\033[0;33m");
            printf("  %c  ", user_word[4][i]);
            printf("\033[0m");
            printf("|");
        }
        else
        {

            printf("  %c  |", user_word[4][i]);
        }
    }
    printf("\n");
    printf("\t\t\t\t\t|_____|_____|_____|_____|_____|\n");
    if (i > 4)
        sixth_row(user_word, random_word);
    else
        table(i + 1);
}
void sixth_row(char user_word[7][5], char random_word[])
{
    printf("\t\t\t\t\t|     |     |     |     |     |\n");
    printf("\t\t\t\t\t|");
    for (int i = 0; i < 5; i++)
    {
        char word = user_word[5][i];
        int j = check_char(word, random_word);
        if (j == 1 && word == random_word[i])
        {
            printf("\033[1;32m");
            printf("  %c  ", user_word[5][i]);
            printf("\033[0m");
            printf("|");
        }
        else if (j == 1)
        {
            printf("\033[0;33m");
            printf("  %c  ", user_word[5][i]);
            printf("\033[0m");
            printf("|");
        }
        else
        {

            printf("  %c  |", user_word[5][i]);
        }
    }
    printf("\n");
    printf("\t\t\t\t\t|_____|_____|_____|_____|_____|\n");
}

void playWordle()
{
    system("cls");
    system("color 0f");
    printf("\033[0;32m");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\tWORDLE\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tGREEN");
    printf("\033[0m");
    printf("-THE LETTER IS IN RIGHT POSITION\n");
    printf("\033[0;33m");
    printf("\t\t\t\t\t\t\t\t\t\t\tYELLOW");
    printf("\033[0m");
    printf("-THE LETTER IS IN THE WORD\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tLIVES-6\n");

    char input_words[609][6];

    FILE *word;
    word = fopen("word.txt", "r");
    int i = 0;

    while (i != 609)
    {
        fscanf(word, "%s", input_words + i);
        i++;
    }

    int num = random_num();
    char random_word[6];
    strcpy(random_word, (input_words + num));
    strupr(random_word);

    char user_word[7][5];
    printf("\t\t\t\t\t _____ _____ _____ _____ _____\n");
    i = 0;
    table(i);
    for (i = 0; i <= 6; i++)
    {
        take_input(i, user_word);
        first_row(i, user_word, random_word);
        if (i == 5)
        {
            goto bottom;
        }
        if (strcmp((user_word + i), random_word) == 0)
            break;
    }
bottom:

    if (strcmp((user_word + i), random_word) == 0)
    {
        system("color 2f");
        printf("\n\n\n\t\t\t\t\t\t\tCONGRATULATION");
    }
    if (i == 5)
    {
        system("color 4f");
        printf("\n\n\n\n\t\t\t\t\tTHE CORRECT WORD IS %s", random_word);
    }

    getch();
}
