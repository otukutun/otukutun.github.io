#include <stdio.h>

int recursive_sum(int v)
{
  printf("calling with %d\n", v);

  if (v == 0) {
      return 0;
  }

  return v + recursive_sum(v - 1);
}

int main(void)
{
  int max, v;
  printf("Please input maxium number\n");
  scanf("%d", &max);

  v = recursive_sum(max);

  printf("Sum is %d\n", v);
}
