#include <cstdio>

int absolute_value(int x) {
  //Flip sign if negative and return
  return x > 0 ? x : -1*x;
}

int sum( int x, int y )
{
  return x+y;
}

int main() {

  for(int my_num=-100; my_num <= 100; my_num++)
  {
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  }

  printf("The sum of -10 and 5 is %0d\n", sum(-5,10));
  printf("The sum of 5 and -10 is %0d\n", sum(10,-5));
  printf("The sum of 5 and 1 is %0d\n", sum(1,5));
  printf("The sum of 5 and 1 is %0d\n", sum(5,1));
}
