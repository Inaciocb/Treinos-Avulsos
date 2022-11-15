#include <criterion/criterion.h>

int AmountofDigits(int x)
{
  int counter = 0;
  while(x != 0)
  {
    x = x/10;
    counter++;
  }
  return counter;
}

int persistence(int n) 
{
  int j = n, i = 0, product, counter = 0;
 
    do
    {
        if(AmountofDigits(n) == 1)
        {
            break;
        }else
        {
            
        }
        product = 1;
        for(i = 0; i< AmountofDigits(n); i++)
        {
            product *= j % 10;
            j /= 10;
        }
        if(AmountofDigits(product) > 1)
        {
            j = product;
        }
    
    counter++;
    
    }while(AmountofDigits(product) > 1);
  
  return counter;
}
