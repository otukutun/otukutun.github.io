#include <stdio.h>

int fib(int n)
{
  printf("calling with %d\n", n);

  if (n == 0) {
      return 0;
  } else if (n == 1) {
      return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

int main(void)
{
  int n, v;
  printf("Please input number\n");
  scanf("%d", &n);

  v = fib(n);

  printf("fibonacchi value is %d\n", v);
}
 