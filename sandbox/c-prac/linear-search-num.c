#include <stdio.h>
#include <stdbool.h>

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
  for (int i = 0; i <= max; i++)
  {
    array[i] = i;
  }

  bool exists = false;
  for (int i = 0; i <= max; i++)
  {
    if (array[i] == v)
    {
      exists = true;
    }
  }

  printf("Exists: %s", exists ? "true" : "false");
}
