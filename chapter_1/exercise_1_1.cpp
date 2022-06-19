#include <cstdio>

int absolute_value(int x) {
  //Flip sign if negative and return
  return x > 0 ? x : -1*x;
}

int main() {

  for(int my_num=-100; my_num <= 100; my_num++)
  {
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  }
}
