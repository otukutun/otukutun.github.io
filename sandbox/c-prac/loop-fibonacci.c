#include <stdio.h>

int main(void)
{
  unsigned int n, v;
  printf("Please input number\n");
  scanf("%d", &n);

  if (n < 0 || n > __INT16_MAX__) {
      printf("Input number is too large\n");
      return 0;
  }

  unsigned int arry[n];

  arry[0] = 0;
  arry[1] = 1;

  for (int i = 2; i < n; i++) {
      arry[i] = arry[i - 1] + arry[i - 2];
      printf("fibonacchi value is %d, %u\n", i, arry[i]);
  }


  printf("fibonacchi value is %d\n", v);
}
 