/*
Isaiah Estrada
4/5/20
CSC-251
Garret Poppe
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int *arr, int size);
void print(int *arr, int size);
int main(void)
{
	int a,b,c,d,e;
	int arr1[10];
	srand(time(NULL));
	fill(arr1,10);
	print(arr1,10);
	return EXIT_SUCCESS;
}
void fill(int *arr, int size)
{
	int i;
	int a;
	for(i=0;i<size;i++)
	{
		a=(rand() % 31) + 20;
		*arr = a;
		arr++;
	}
}

void print(int *arr, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("array[%d] = %d \n",i,*arr);
		arr++;
	}
}
