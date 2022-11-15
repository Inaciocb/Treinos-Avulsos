#include <criterion/criterion.h>
int solution(int n)
{
  int i=3, sum = 0;
  
  for(i = 3; i < n; i++)
  {
    if(i % 3 == 0 || i % 5 == 0)
    {
      sum += i;
    }
  }
  return sum;
}
