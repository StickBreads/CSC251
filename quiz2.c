/*
Isaiah Estrada
CSC-251-80
QUIZ
*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void fillLetter(char array[]);
void fillint(int array[]);
void up(char array[]);
void print(char array[],int arrayy[]);
int main(void)
{
	char charray[5];
	int intarray[5];
	fillint(intarray);
	fillLetter(charray);
	up(charray);
	print(charray,intarray);
	return EXIT_SUCCESS;
}
void fillint(int array[] )
{
	int i;
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
	array[i]=rand()%11;
	array[i]+=10;
	}
}
void fillLetter(char array[])
{
	int i;
	for(i=0;i<5;i++)
	{
	array[i]='a'+rand()%26;
	}
}
void up(char array[])
{
	int i;
	for(i=0;i<5;i++)
	{
	array[i]=toupper(array[i]);
	}
}
void print(char array[],int arrayy[])
{
int i,a;
for(i=0;i<5;i++)
{
printf("arrayOne[%d]=%d\n",i,arrayy[i]);
}
for(a=0;a<5;a++)
	{
	printf("arrayTwo[%d]=%c\n",a,array[a]);
	}
}
