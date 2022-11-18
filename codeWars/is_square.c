#include <stdbool.h>
#include <math.h>

bool is_square(int n) 
{
  int integer_Sqrt_n = (int)sqrt(n);
  return (sqrt(n) == integer_Sqrt_n && n >= 0);
}
