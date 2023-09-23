#include <stdio.h>
#include "function.h"
#include "euler.h"
#define SIZE 2
int main()
{
   //unsigned int number = 0;
   //printf("number = ");
   //scanf_s("%du", &number);

   //unsigned int multiplace[SIZE];
   //printf("multiplace = ");
   //for (unsigned int i = 0; i < SIZE; ++i)
   //   scanf_s("%du", &multiplace[i]);

   //printf("%llu", Problem_1(number, multiplace, SIZE));



   /*unsigned int number = 0;
   printf("number = ");
   scanf_s("%du", &number);
   printf("%llu", Problem_2(number));
   */

   unsigned int number = 0;
   printf("number = ");
   scanf_s("%du", &number);
   printf("%llu", Problem_3(number));

   return 0;
}