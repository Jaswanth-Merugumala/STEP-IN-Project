/** @file See movies function is a
function called in main 
and defined in nope.h*/
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include"nope.h"
void SeeMovies()
{
	FILE *x;
	char get;
	x = fopen("Movies.txt","r");
///Checking for Movies.txt if mot present displays an error
    if(x == NULL)
	{
		printf("file does not found ! :(");
		exit(1);

	}
	else
	{	
		system("cls");
		while( ( get = fgetc(x) ) != EOF )
///Displaying the movies list from Movies.txt
		{
			printf("%c",get);
		}	
	}
	fclose(x);
}
