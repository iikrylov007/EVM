#include "euler.h"

unsigned long long Problem_1(const unsigned int number_,
   const unsigned int* multiples_,
   const unsigned int size_)
{
   unsigned long long sum = 0;

   for (unsigned int n = 0; n < number_; ++n)
   {
      for (unsigned int i = 0; i < size_; ++i)
      {
         if (n % multiples_[i] == 0)
         {
            sum += n; // sum = sum + n;
            break;
         }
      }
   }
   return sum;
}

unsigned long long Problem_2(const unsigned int number_)
{
   unsigned long long sum = 0;
   unsigned int n1 = 1;
   unsigned int n2 = 2;

   while (n2 < number_)
   {
      if (n2 % 2 == 0)
         sum = sum + n2;

      n2 = n2 + n1;
      n1 = n2 - n1;
   }

   return sum;
}

unsigned long long Problem_3(const unsigned int number_)
{
   unsigned int n;
   for (unsigned int n = 2; n < number_; ++n)
   {
      if (number_ % n == 0)
         break;
      if (number_% n  0)
   }
}
