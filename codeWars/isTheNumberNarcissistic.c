#include <criterion/criterion.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int AmDigits(int x)  
{  
   int i = 0;    
   while (x != 0)  
   {  
       x = x / 10;  
       i++;  
   }  
   return i;
}  

bool narcissistic(int num)
{
   
  int num2 = num, sum = 0;
  
  for(int i = 0; i < AmDigits(num); i++)
  {
    sum += pow(num2 % 10, AmDigits(num));
    num2 /= 10;
  }
 
  
  if(sum == num)
  {
    return true;
  }else
  {
    return false;
  }
}
