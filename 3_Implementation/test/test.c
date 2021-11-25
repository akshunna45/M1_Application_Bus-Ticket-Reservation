#include "./unity/unity.h"

/* Modify these two lines according to the project */
#include "./inc/read_number.h"
#include "./inc/read_name.h"
#define PROJECT_NAME "Ticket Reservation System"

/* Prototypes for all the test functions */
void bus(void);
void booking(void);
void name_number(int, char);
int read_number(int);
void read_name(int);
void status(void);
void status_1(int);
void cancel(void); 

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bus);
  RUN_TEST(test_booking);
  RUN_TEST(test_name_number);
  RUN_TEST(test_read_number);
  RUN_TEST(test_read_name);
  RUN_TEST(test_status);
  RUN_TEST(test_status_1);
  RUN_TEST(test_cancel);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_bus(void)
{

}

void test_booking(void)
{

}

void test_name_number(int, char)
{

}

void test_read_number(int)
{

}

void test_read_name(int)
{

}

void test_status(void)
{

}

void test_status_1(int)
{
  
}

void test_cancel(void)
{
  
}