#include <stdio.h>

int main(void)
{
  int max, v;
  printf("Please input maxium number\n");
  scanf("%d", &max);
  printf("Please input the number you want to search\n");
  scanf("%d", &v);

  printf("maxium: %d, search num: %d\n", max, v);

  int array[max + 1];
  // Create array
  for (int i = 1; i <= max; i++)
  {
    array[i] = i;
  }

  int index = -1;
  for (int i = 0; i <= max; i++)
  {
    if (array[i] == v)
    {
      index = i;
    }
  }

  printf("Index: %d, Value: %d\n", index, v);
}
