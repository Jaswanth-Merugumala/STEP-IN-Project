#include "unity.h"
#include <nope.h>

#define PROJECT_NAME    "Movie Booking"

void SeeMovies();
void  ViewTransactions();
void BookTickets();
void Update_Add_Movies();

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(SeeMovies);
  RUN_TEST(ViewTransactions);
  RUN_TEST(BookTickets);
  RUN_TEST(Update_Add_Movies);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void SeeMovies( void ) {
  TEST_ASSERT_EQUAL('*', add( void ));
  
}

void ViewTransactions( void ) {
  TEST_ASSERT_EQUAL('*', ViewTransactions( void ));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}
void BookTickets( void ) {
  TEST_ASSERT_EQUAL('*', BookTickets( void ));
  
}
void Update_Add_Movies( void ) {
  TEST_ASSERT_EQUAL('*', Update_Add_Movies( void ));
  