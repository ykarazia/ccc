#include <cstddef>
#include <cstdio>

int main()
{
  unsigned long maximum = 0;
  unsigned long values[] = {10, 50, 20, 10, 0};
  
  for(size_t i=0; i<5; i++)
  {
    maximum = maximum > values[i] ? maximum : values[i];
  }

  printf("The maximum value is %lu", maximum);
}
