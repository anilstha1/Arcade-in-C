#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct 
{
	char name[40];
	int age;
	int famsize;
	int activemem;
	long int expectedIncome;
	long int expectedSaving;
}personalInfo;

typedef struct 
{
	char title[50];
	long int amount;
	char remark[100];
}finInfo;

personalInfo personalInfoInput()
{
	personalInfo p;

	printf("Enter your name: ");
	fgets(p.name, 40, stdin);

	printf("Enter your age: ");
	scanf("%d", &p.age);
	fflush(stdin);

	printf("Enter your number of people in the family: ");
	scanf("%d", &p.famsize);

	printf("Enter your number of financially active people in the  family: ");
	scanf("%d", &p.activemem);

	printf("Enter your expected income per month: ");
	scanf("%ld", &p.expectedIncome);

	printf("Enter your expected saving per month: ");
	scanf("%ld", &p.expectedSaving);

	return p;
}

void personalInfoOutput(FILE *fp, personalInfo p)
{
	printf( "Name :%s", p.name);
	printf( "Age :%d\n", p.age);
	printf( "Size of family :%d\n", p.famsize);
	printf( "Active members :%d\n", p.activemem);
	printf( "Passive members :%d\n", p.famsize - p.activemem);
	printf( "Expectd income: %ld\n", p.expectedIncome);
	printf( "Expectd saving: %ld\n", p.expectedSaving);
	printf( "Expectd expenditure: %ld\n", p.expectedIncome - p.expectedSaving);

	fprintf(fp, "Name :%s", p.name);
	fprintf(fp, "Age :%d\n", p.age);
	fprintf(fp, "Size of family :%d\n", p.famsize);
	fprintf(fp, "Active members :%d\n", p.activemem);
	fprintf(fp, "Passive members :%d\n", p.famsize - p.activemem);
	fprintf(fp, "Expectd income: %ld\n", p.expectedIncome);
	fprintf(fp, "Expectd saving: %ld\n", p.expectedSaving);
	fprintf(fp, "Expectd expenditure: %ld\n", p.expectedIncome - p.expectedSaving);
	printf("\n");
}

finInfo finInfoInput()
{
	finInfo f;
	fflush(stdin);
	printf("Enter the title of the transaction: ");
	fgets(f.title, 50, stdin);
	printf("Enter the amount: ");
	scanf("%ld", &f.amount);
	fflush(stdin);
	printf("Enter the remark: ");
	fgets(f.remark, 100, stdin);
	return f;
}

void finInfoOutput(FILE *fp, finInfo f)
{
	printf("Title: %sAmount: %ld\nRemark: %s\n", f.title, f.amount, f.remark);

	fprintf(fp, "Title: %sAmount: %ld\nRemark: %s\n", f.title, f.amount, f.remark);
}

int main(void)
{
	system("cls");
	SetConsoleTitle("myFinance");
	personalInfo p;
	finInfo f;
	FILE *fp;
	char ch = 'y';

	fp = fopen("personalInfo.txt", "w");
    if(fp == NULL)
    {
        printf("Couldn't open the file\n");
        exit(1);
    }

    p = personalInfoInput();
	personalInfoOutput(fp, p);
	printf("press enter to continue\n");
	getch();
	system("cls");

	while(ch == 'y' || ch == 'Y')
	{

		f = finInfoInput();
		finInfoOutput(fp, f);
		printf("press Y if you want to add more incomes...\n");
		ch = getchar();
		system("cls");
	}


	printf("The information has been saved in file.\n");
	getch();
	return 0;
}