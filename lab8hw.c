#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int number(char *word);
void lCase(char *word);
void uCase(char *word);
void vowel(char *word);
int main(void)
{
	int i,x,y,z;
        char charray[21];
	printf("Enter a string less than 20 characters that includes one number: ");
	fgets(charray,21,stdin);
	printf("Your string is: %s \n",charray);
	char *point=charray;
	i = number(point);
	x = i * 12;
	lCase(point);
	uCase(point);
	vowel(point);
	printf("(Number Entered in string) %d * 12 = %d \n",i,x);
	return EXIT_SUCCESS;
}

int number(char *word)
{
	int i;
	int n;
	for(i=0;i<21;i++)
	{
		if(isdigit(*word)>0)
		{
			n = *word-'0';
		}
		word++;
	}
	return n;
}


void lCase(char *word)
{
	int l;
	printf("lowercase letters:\n");
	for(l=0;l<21;l++)
	{
		if(islower(*word)>0)
		{
			printf("%c",*word);
		}
		word++;
	}
	printf("\n");
}
void uCase(char *word)
{
	int u;
	printf("UPPER CASE LETTERS:\n");
	for(u=0;u<21;u++)
	{
		if(isupper(*word)>0)
		{
			printf("%c",*word);
		}
		word++;
	}
	printf("\n");
}
void vowel(char *word)
{
	int v;
	int o=0;
	printf("Number of Vowels\n");
	for(v=0;v<21;v++)
	{
		if(*word == 'A' || *word == 'E' || *word == 'I' || *word == 'O' || *word == 'U' || *word == 'a' || *word == 'e' || *word == 'i' || *word == 'o' || *word == 'u')
		{
			o++;
		}
	word++;
	}
	printf("%d \n",o);
}

