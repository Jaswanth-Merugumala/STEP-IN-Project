 /** @file This is the main function
  * of movie booking program*/
 #include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include"nope.h"

int main()
{
   int a;
///Display the menu atleast once
   do{
   	printf("\t\t   Welcome To Movie Booking          \t\t             \\\\ \n");
	printf("\t\t                                     \t\t              \\\\ \n");
	printf("\t\t  Press '1' for Movie list           \t\t               \\\\ \n");
	printf("\t\t  Press '2' for Transactions         \t\t        ==========\n");
	printf("\t\t  Press '3' for Booking Tickets      \t\t        | |\\  /| | \n");
	printf("\t\t  Press '4' for Update Movie List    \t\t        | | \\/ | | \n");
	printf("\t\t  Press '0' to  exit                 \t\t        | |    | | \n");
	printf("\t\t                                     \t\t        ========== \n");
   	printf("\n\t\tEnter your choise :) ");
///choose from main menu
   	scanf("%d",&a);
   	switch(a)
   	{
   		case 1 :
   			SeeMovies();
///calling the function to view the movies list
   			break;
   		case 2 :
		   ViewTransactions();
///calling a function to view the transactions(only for admins)
		   break;
		case 3 :
			BookTickets();
///TO BOOK tickets
			break;
		case 4 :
		    Update_Add_Movies();
///To update movie list
			break;	
		 case 0 :
		 exit(0); 
		 default :
		  printf("Wrong choise ! :(");
/// Prints wrong choise on the screen when entered a wrong input other than the ones in menu
	   }
   }  
   while(a!=0);  
}








