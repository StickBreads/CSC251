/*
Isaiah Estrada
CSC-251
Garret Poppe
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void positive(void);
void negative(void);
void zero(void);
int main(void)
{
	FILE *ptr;
	int i;
	if((ptr=fopen("input.txt","r"))==NULL)
	{
		puts("File could not be opened");
	}
	else
	{	while(i!=4)
		{
			printf("You have four choices type in number only \n");
			printf("1.Display Positive balance \n");
			printf("2.Display Negative balance \n");
			printf("3.Display Zero balance \n");
			printf("4.End program \n");
			scanf("%d \n",&i);
			switch(i)
			{
				case 1:
					positive();
					break;
				case 2:
					negative();
					break;
				case 3:
					zero();
					break;
				case 4:
					break;
				default :
					break;

			}
		}
	}
		return EXIT_SUCCESS;
}
void positive(void)
{
	FILE *ptr,*tr;
	int i=1;
	int ammount=0;
	char string[30];
	double balance=0;
	if((ptr=fopen("input.txt","r"))==NULL)
	{
		puts("File does not exist");
	}
	else
	{
		fscanf(ptr,"%d%29s%lf",&ammount, string, &balance);
		while(!feof(ptr))
		{
			if(balance>0)
			{
				fprintf(tr,"Account: %d , Name: %s, Balance: %.2f \n", ammount, string, balance);
				if((tr = fopen("output.txt", "w")) == NULL)
				{
				fprintf(tr,"%d \n", i);
				}
			}
			fscanf(ptr,"%d%29s%lf",&ammount,string,&balance);
		}
		fclose(tr);
		fclose(ptr);
	}
}
void negative(void)
{
	FILE *ptr;
	FILE *tr;
	int i = 2;
	int ammount;
	double balance;
	char string[30];

	if((ptr=fopen("input.txt", "r")) == NULL)
	{
		printf("File does not exist. \n");
	}
	else
	{
		fscanf(ptr,"%d%29s%lf", &ammount, string, &balance);
		while(!feof(ptr))
		{
			if (balance < 0)
			{
				fprintf(tr,"Account: %d, Name: %s, Balance: %.2f \n",ammount,string,balance);
				if ((tr = fopen("output.txt", "w")) == NULL)
				{
					fprintf(tr,"%d \n", i);
				}
			}
		fscanf(ptr,"%d%29s%lf", &ammount, string, &balance);
		}
		fclose(tr);
		fclose(ptr);
	}
}
void zero(void)
{
	FILE *ptr;
	FILE *tr;
	int ammount;
	int i = 3;
	double balance;
	char string[30];

	if((ptr=fopen("input.txt", "r")) == NULL)
	{
	printf("File does not exist. \n");
	}
	else
	{
		fscanf(ptr, "%d%29s%lf",&ammount, string ,&balance);
		while(!feof(ptr))
		{
			if (balance == 0)
			{
				fprintf(tr,"Account: %d, Name:%s, Balance: %.2f \n", ammount, string, balance);
				if ((tr = fopen("output.txt", "w")) == NULL)
				{
					fprintf(tr,"%d \n", i);

				}
			}
			fscanf(ptr, "%d%29s%lf", &ammount, string , &balance);
		}
		fclose(tr);
		fclose(ptr);
	}
}
