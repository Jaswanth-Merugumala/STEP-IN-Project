/** @file Transactions function is a
function called in main 
and defined in nope.h*/
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include"nope.h"
void ViewTransactions()
{
	FILE *x;
	char get;
	x = fopen("Transactions.txt","r");
///Checking for Transactions.txt file in the directory
    if(x == NULL)
	{
		printf("file does not found ! :(");
///If not found Transactions.txt file returns an error message
		exit(1);

	}
	else
	{	
		system("cls");
		while( ( get = fgetc(x) ) != EOF )
///Displaying the Transactions 
		{
			printf("%c",get);
		}	
	}
	fclose(x);//
///Closing the transactions file
}
