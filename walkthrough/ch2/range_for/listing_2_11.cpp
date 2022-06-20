#include <cstddef>
#include <cstdio>

int main()
{
  unsigned long maximum = 0;
  unsigned long values[] = {10, 50, 20, 10, 0};
  
  for(auto value : values)
  {
    maximum = maximum > value ? maximum : value;
  }

  printf("The maximum value is %lu", maximum);
}
