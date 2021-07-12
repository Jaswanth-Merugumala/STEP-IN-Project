 /** @file Booking tickets function is a
function called in main and defined in nope.h*/
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include"nope.h"
void BookTickets()
{
	struct Movie M;
	FILE *x;
	FILE *y;
	int nseat,mobile,Tamount;
	char name[20];
	char get;
	char movie_code[20];
	x = fopen("Movies.txt","r");
/// Opening Movies.txt file if it exists it will open or it say no such file
	if(x == NULL)
	{
		printf("file does not found ! :(");
		exit(1);

	}
	else
	{	
		system("cls");
		while( ( get = fgetc(x) ) != EOF )
///Displaying all the files from Movies.txt
      		printf("%c",get);
		
	}
	fclose(x);
	printf("\n Enter movie code :)");
///Enetering the movie code to book movies
	scanf("%s",movie_code);
	x = fopen("Movies.txt","r");
	if(x == NULL)
	{
		printf("file does not found ! :(");
		exit(1);

	}
	else
	{	
		while(getc(x) != EOF)
		{
			fscanf(x,"%d %s %d",M.moviecode,M.name,M.cost);
///Movie record found
			if(strcmp(M.moviecode,movie_code) == 0)
			{
				printf("\n\t\tCode            : %s",M.moviecode);
				printf("\n\t\tMovie name      : %s",M.name);
				printf("\n\t\tPrice of ticket : %d",M.cost);
			}
		}
		
	}
	printf("\t\t                                    \t\t             \\\\ \n");
	printf("\t\t                                    \t\t              \\\\ \n");
	printf("\t\t                                    \t\t               \\\\ \n");
	printf("\t\t                                    \t\t        ==========\n");
	printf("\t\t     Movie Booking                  \t\t        | |\\  /| | \n");
	printf("\t\t                                    \t\t        | | \\/ | | \n");
	printf("\t\t                                    \t\t        | |    | | \n");
	printf("\t\t                                    \t\t        ========== \n");
	printf("\n\n\n\t\t* Fill Deatails  *");
	printf("\n\t\t your name :");
///Taking the person details for booking confirmation
	scanf("%s",name);
	printf("\n\t\t mobile number :");
	scanf("%d",&mobile);
	printf("\n\t\t Total number of tickets :");
	scanf("%d",&nseat);
	
	
	Tamount = M.cost * nseat;
///Caluculating the total prize
	
	printf("\n ENJOY MOVIE \n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);
	printf("\n\t\tmovie name : %s",M.name);
	printf("\n\t\tTotal seats : %d",nseat);
///Customer Details displayed
	printf("\n\t\tcost per ticket : %d",M.cost);
	printf("\n\t\tTotal Amount : %d",Tamount);
	
	
	y=fopen("Transaction.txt","a");
///Opening The transactions file to update the record
	if(y == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(y,"%s %d %d %d %s %d \n",name,mobile,nseat,Tamount,M.name,M.cost);
		printf("\n Record Updated :)");
	}
		printf("\n");
	fclose(y);
	fclose(x);
///Closing Both Movies.txt and Transactions.txt

}
