#include <stdio.h>

int main(void)
{
  int max, v;
  printf("Please input maxium number\n");
  scanf("%d", &max);

  printf("search num: %d\n", max);

  int array[max + 1];
  // Create array
  for (int i = 0; i <= max; i++)
  {
    array[i] = i;
  }

  int min = __INT16_MAX__;
  for (int i = 0; i <= max; i++)
  {
    if (array[i] <= min)
    {
      min = array[i];
    }
  }

  printf("Min: %d\n", min);
}
