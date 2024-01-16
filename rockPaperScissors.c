#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

int usrScore = 0, compScore = 0;

void gotoxy(int x, int y)
{
	COORD CRD;
	CRD.X = x;
	CRD.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CRD);
}

void checkOptions(int usr, int comp)
{
	// 1 = scissor 2= paper 3=rock
	if (usr == comp)
	{
		printf("\n\n\n\t\t --------------------\n");
		printf("\n\n\n\t\t|    Its a tie       |\n");
		printf("\n\n\n\t\t --------------------\n");
	}
	else if (usr == 1)
	{
		if (comp == 2)
		{
			printf("\n\n\n\t\t --------------------\n");
			printf("\t\t|      You Won :)    |\n");
			printf("\t\t| You : Scissor      |\n");
			printf("\t\t| Computer : Paper   |\n");
			printf("\t\t --------------------\n");
			usrScore++;
		}
		else
		{
			printf("\n\n\n\t\t --------------------\n");
			printf("\t\t|     You Lose :(    |\n");
			printf("\t\t| You : Scissor      |\n");
			printf("\t\t| Computer : Rock    |\n");
			printf("\t\t --------------------\n");

			compScore++;
		}
	}
	else if (usr == 2)
	{
		if (comp == 1)
		{
			printf("\n\n\n\t\t --------------------\n");
			printf("\t\t|      You Lose :(   |\n");
			printf("\t\t| You : Paper        |\n");
			printf("\t\t| Computer : Scissor |\n");
			printf("\t\t --------------------\n");
			compScore++;
		}
		else
		{
			printf("\n\n\t\t --------------------\n");
			printf("\t\t|     You Won :)     |\n");
			printf("\t\t| You : Paper        |\n");
			printf("\t\t| Computer : Rock    |\n");
			printf("\t\t --------------------\n");

			usrScore++;
		}
	}
	else if (usr == 3)
	{
		if (comp == 1)
		{
			printf("\n\n\t\t --------------------\n");
			printf("\t\t|      You Won :)    |\n");
			printf("\t\t| You : Rock        |\n");
			printf("\t\t| Computer : Scissor |\n");
			printf("\t\t --------------------\n");
			usrScore++;
		}
		else
		{
			printf("\n\n\t\t --------------------\n");
			printf("\t\t|     You Lose :(    |\n");
			printf("\t\t| You : Rock         |\n");
			printf("\t\t| Computer : Paper    |\n");
			printf("\t\t --------------------\n");

			compScore++;
		}
	}
	else if (usr == 4)
	{
		printf(" --------------------\n");
		if (usrScore > compScore)
			printf("|      You Won :)    |\n");
		else if (usrScore < compScore)
			printf("|     You Lose :(    |\n");
		else
			printf("|      Its a tie     |\n");
		printf("|     Final Score    |\n");
		printf("| You : %d            |\n", usrScore);
		printf("| Computer: %d        |\n", compScore);
		printf(" --------------------\n");
		printf("\a");
	}
	else
	{
		Beep(750, 500);
		printf("\n Invalid Option");
	}
}

void playRockPaperScissors(void)
{
	int userChoice, compChoice;

	srand(time(0));
	system("color 5b");
	gotoxy(35, 20);
	system("cls");
	printf("\n\n\n\n\t\t\t\t==========*Welcome to Rock, Paper & Scissor Game*==========");
	getch();
	for (int i = 0; i < 5; i++)
	{
		system("cls");
		system("color 3f");
		printf("\n\n\t\tYour score: %d\t\t\t\t\tComputer's score: %d", usrScore, compScore);
		gotoxy(40, 16);
		printf("Please select the option:\n ");
		gotoxy(42, 18);
		printf("1.Scissor\n");
		gotoxy(42, 20);
		printf("2.Paper\n");
		gotoxy(42, 22);
		printf("3.Rock\n");

		scanf("%d", &userChoice);

		compChoice = (rand() % 3) + 1;
		checkOptions(userChoice, compChoice);
		getch();
	}
	system("cls");
	system("color 2f");
	gotoxy(40, 30);
	printf("Your score is : %d", usrScore);
	getch();
}