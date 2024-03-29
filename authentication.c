#include <windows.h>
#include <stdio.h>
#include <conio.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct user
{
    char fullName[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];
    char bankacc[50];
};

void takeinput(char ch[50])
{
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;
}

void takepassword(char pwd[50])
{
    int count;
NOT_ENOUGH:
    gets(pwd);
    count = strlen(pwd);
    if (count < 7)
    {
        printf("\nPassword should be at least 8 characters containing lowercase, uppercase letters and symbols.\n");
        goto NOT_ENOUGH;
    }
}

void signup()
{
    FILE *fp;
    int opt, usrFound = 0;
    struct user user[1];
    char password2[50];
    system("cls");
    for (int i = 0; i < 1; i++)
    {
        printf("\n|Enter your full name:       ");
        takeinput(user[i].fullName);
        printf("|What should we call you?    ");
        takeinput(user[i].username);
        printf("|Enter your email:           ");
        takeinput(user[i].email);
        printf("|Enter your contact no:      ");
        takeinput(user[i].phone);
        printf("|Enter your bank account no: ");
        takeinput(user[i].bankacc);
    AGAIN:
        printf("|Enter your password:        ");
        takepassword(user[i].password);
        printf("\n");
        printf("|Confirm your password:      ");
        takepassword(password2);

        if (!strcmp(user[i].password, password2))
        {
            fp = fopen("Users.txt", "a+");
            fwrite(&user, sizeof(struct user), 1, fp);
            if (fwrite != 0)
                printf("\n\nUser resgistration success, \nYour username is %s\n", user[i].username);
            else
                printf("\n\nSorry! Something went wrong :(");
            getch();

            fclose(fp);
        }
        else
        {
            printf("\n\n!Password donot matched\n\n");
            Beep(750, 100);

            goto AGAIN;
        }
    }
}

int login()
{
    FILE *fp;
    char username[50], pword[50];
    int usrFound;
    struct user usr[10];

    printf("\nEnter your username:\t");
    takeinput(username);

    printf("Enter your password:\t");
    takepassword(pword);

    fp = fopen("Users.txt", "r");
    for (int i = 0; i < 10; i++)
    {
        fread(&usr[i], sizeof(usr[i]), 1, fp);
    }

    for (int i = 0; i < 10; i++)
    {
        if (!strcmp(usr[i].username, username))
        {
            if (!strcmp(usr[i].password, pword))
            {
                system("cls");
                printf("\n\t\t\t\t\t\tWelcome %s\n", usr[i].username);
                printf("Your Details>>>\n\n|Full Name:\t%s", usr[i].fullName);
                printf("\n|Email:\t\t%s", usr[i].email);
                printf("\n|Username:\t%s", usr[i].username);
                printf("\n|Contact no.:\t%s", usr[i].phone);
                printf("\n|Bank account no.:\t%s\n|Your current balance:\t$1,000,000.00", usr[i].bankacc);

                getch();
                fclose(fp);
                return 0;
            }
            else
            {
                printf("\n\nInvalid Password!");
                Beep(800, 300);
                getch();
                return 1;
            }
        }
    }

    printf("\n\nUser is not registered!");
    Beep(800, 300);
    printf("Sign in first\n");
    getch();
    fclose(fp);
    return -1;
}

void authentication()
{
    system("color 0b");
    int opt, check;
AUTH:
    system("cls");
    printf("\n\t\t\t\t----------Welcome to authentication system----------");
    printf("\nPlease choose your operation");
    printf("\n1.Signup");
    printf("\n2.Login");
    printf("\n3.Exit");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt)
    {
    case 1:
        signup();
        goto AUTH;
        break;
    case 2:
        check = login();
        if (check == -1 || check == 1)
            goto AUTH;
        break;

    case 3:
        printf("\t\t\tBye Bye :)");
        getch();
        exit(1);

    default:
        goto AUTH;
        break;
    }
}
