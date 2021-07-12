
/** @file Update and add movies function is a
function called in main and defined in nope.h*/
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include"nope.h"
void Update_Add_Movies()
{
	FILE *x;
	struct Movie M;
    char password[15],Pass_word[15]="password";
	printf("Enter the password for adding movies :) \n ");
///Checking the user credentials
	scanf("%s",&password);
	if (strcmp(password,Pass_word)==0)
	{
		printf("Enter movie code :) ");	
    	scanf("%s",M.moviecode);
	    printf("Enter  movie name :) ");	
	    scanf("%s",M.name);
	    printf("Enetr Ticket Price :) ");	
	    scanf("%d",&M.cost);
	
	    x=fopen("Movies.txt","a");
///Opening Movies.txt file

	   if(x == NULL)
	  {
	    printf("FIle not Found");
	  }
	   else
	  {
		fprintf(x,"%s %s %d \n",M.moviecode,M.name,M.cost);
///Entering the movie details
		printf("Recorded Successfully :)\n");
	  }
	
    	fclose(x);
///Closing the movies.txt file
	    system("cls");
	}
	else 
	{
		printf("The entered password is wrong! \t :(");
///Displays error if the entered password is wrong
	}
}
