#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

void printer(int rname[SIZE]);
void fillEven(int evenSteven[SIZE]);
void fillOdd(int oddTodd[SIZE]);
void swap(int
int main(void)
{
	int arr[SIZE]={0};
	fillOdd(arr);
	printer(arr);
	fillEven(arr);
	printer(arr);
	return EXIT_SUCCESS;
}

void printer(int rname[SIZE])
{
	int i=0;
	for (i=0;i<SIZE;i++)
	{
		printf("Array[%d]=%d \n",i,rname[i]);
	}

}
void  fillEven(int rname[SIZE])
{
	int evenSteven=0;
	int stevenEven=2;
	for (evenSteven=0;evenSteven<SIZE;evenSteven++)
	{
		rname[evenSteven]=stevenEven;
		stevenEven=stevenEven+2;
	}
}
void  fillOdd(int rname[SIZE])
{
	int oddTodd=0;
	int toddOdd=1;
	for (oddTodd=0;oddTodd<SIZE;oddTodd++)
	{
		rname[oddTodd]=toddOdd;
		toddOdd=toddOdd+2;
	}
}
void fillboth(

