#include <stdio.h>

int main(void)
{
  int a, b, min;
  printf("Please input sequence A\n");
  scanf("%d", &a);
  printf("Please input sequence B\n");
  scanf("%d", &b);

  int min = __INT32_MAX__;

  int a_array[a + 1];
  int b_array[b + 1];
  // Create array
  for (int i = 0; i <= a; i++) {
    a_array[i] = i;
  }

  for (int i = 0; i <= b; i++) {
    b_array[i] = i;
  }

  for (int i = 0; i <= a; i++) {
      for (int j = 0; j <= b; j++) {

    }
  }

  printf("Min: %d\n", min);
}
