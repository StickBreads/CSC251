/*
Isaiah Estrada
CSC 251-80
Lab 11
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argi, char *argc[])
{
	FILE *in, *out;
	int a,b;
	int c,d;
	int i;
	char words[120];
	if(argi>3)
	{
		puts("There are too many arguements");
	}
	else if (argi<3)
	{
		puts("There are too few args");
	}
	else
	{
		if((in=fopen(argc[1],"r"))==NULL)
		{
			puts("File could not be opened");
		}
		else
		{
			fscanf(in,"%s",words);
			out=fopen(argc[2],"w");
			printf("Choose an option below to modify your wordlist: \n");
			printf("1.Change the second letter to a capital letter. \n");
			printf("2.Make each word lowercase except for the last letter. \n");
			printf("3.Make each word uppercase except for the first letter. \n");
			printf("4.Duplicate each word 5 times. \n");
			scanf(" %d", &a);
			switch(a)
			{
				case 1:
					for(i=0;i<strlen(words);i++)
					{
						if(i==1)
						{
							words[i]=toupper(words[i]);
						}
					}
					fprintf(out,"%s \n",words);
					break;
				case 2:
					for(b=0;b<strlen(words)-1;b++)
					{
						if(isupper(words[b]))
						{
							words[b]=tolower(words[b]);
						}
					}
					fprintf(out,"%s \n",words);
					break;
				case 3:
					for(c=1;c<strlen(words);c++)
					{
						if(islower(words[c]))
						{
							words[c]=toupper(words[c]);
						}
					}
					fprintf(out,"%s \n",words);
					break;
				case 4:
					for(d=0;d<5;d++)
					{
						fprintf(out,"%s",words);
						fprintf(out,"%d \n",d+1);
					}
					break;
				default :
					break;
			}
	fclose(out);
	fclose(in);
	printf("Wordlist complete. Check \"%s\" for results \n",argc[2]);
	}
}
return EXIT_SUCCESS;
}

