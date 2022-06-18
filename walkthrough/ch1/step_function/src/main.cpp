#include "step_function.h"
#include <cstdio>

int main()
{
  int num1 = 42;
  int result1 = step_function(num1);

  int num2 = 0;
  int result2 = step_function(num2);

  int num3 = -42;
  int result3 = step_function(num3);

  printf("Num: %0d, Step: %0d\n", num1, result1);
  printf("Num: %0d, Step: %0d\n", num2, result2);
  printf("Num: %0d, Step: %0d\n", num3, result3);

  return 0;
}
