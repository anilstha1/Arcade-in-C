#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

typedef struct
{
    char question[200];
    char option1[20];
    char option2[20];
    char option3[20];
    char option4[20];
    int rightoption;
} quiz;

int random()
{
    srand(time(NULL));
    int a = rand();

    return a % 5;
}

void play()
{
    int score = 0;
    quiz q[100];
    FILE *fp;
    fp = fopen("question.txt", "r");

    for (int i = 0; i < 5; i++)
    {
        fread(&q[i], sizeof(q[i]), 1, fp);
    }

    for (int i = 0; i < 5; i++)
    {
        system("cls");
        system("color 3f");
        int answer;
        int randomNumber = random();

        printf("%s \n 1.\t%s \n 2.\t%s \n 3. \t%s \n 4. \t%s \n", q[randomNumber].question, q[randomNumber].option1, q[randomNumber].option2, q[randomNumber].option3, q[randomNumber].option4);
        printf("\n\n\n\t\t\tMake a valid choice: ");
        fflush(stdin);
        scanf("%d", &answer);

        if (answer == q[randomNumber].rightoption)
        {
            score++;
            system("cls");
            system("color 2f");
            printf("\n\n\n\t\tCONGRATS!\n");
        }
        else
        {
            system("color 4f");
            Beep(750, 800);
            printf("\n\n\t\t\tThe right option is %d\n", q[randomNumber].rightoption);
        }
        getch();
    }
    system("cls");
    system("color 2f");
    printf("\n\n\t\t Your score is %d.\n", score * 100);
    getch();
    fclose(fp);
}

void takeInput()
{
    system("color 4b");
    FILE *fp;
    fp = fopen("question.txt", "a+");
    char check, temp;
    int n;
    system("cls");
    printf("\n\n\n\n\t\tHow many questions do you want to enter?\n ");
    fflush(stdin);
    scanf("%d", &n);
    quiz q[n];

    for (int i = 0; i < n; i++)
    {
        system("cls");
        fflush(stdin);
        printf("\n\n\nEnter the question: \n");
        fgets(q[i].question, 200, stdin);
        fflush(stdin);
        printf("Enter option 1: \n");
        gets(q[i].option1);
        fflush(stdin);
        printf("Enter option 2: \n");
        gets(q[i].option2);
        fflush(stdin);
        printf("Enter option 3: \n");
        gets(q[i].option3);
        fflush(stdin);
        printf("Enter option 4: \n");
        gets(q[i].option4);
        printf("Enter the correct option : \n");
        scanf("%d", &q[i].rightoption);

        fwrite(&q[i], sizeof(q[i]), 1, fp);
        fflush(stdin);
        printf("Press Y if you want to add more question: ");
        scanf("%c", &check);
        temp = toupper(check);
        if (temp != 'Y')
            break;
    }
    fclose(fp);
}

void playQuiz()
{
    int flag;
    system("color 8b");
    system("cls");
    printf("\n\n\t\t\t\t\t\tGENERAL QUIZ\n");
    printf("\n\n\n\t\tPress 1 to add question.\n\t\tPress 2 to play\n");
    scanf("%d", &flag);

    if (flag == 1)
        takeInput();
    else
        play();
}
