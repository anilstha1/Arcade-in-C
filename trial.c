#include <stdio.h>
#include <conio.h>

void main()
{
    char pword[20];
    printf("enter the password\n");
    int i = 0;

    while (1)
    {
        char ch = getch();
        if (ch == 13)
        {
            pword[i] = '\0';
            break;
        }
        if (ch == 8)
        {
            i--;
            printf("\b \b");
        }
        else
        {
            pword[i] = ch;
            printf("* \b");
            i++;
        }
    }
    printf("the password was: %s\n", pword);
}