#include <stdio.h>
#include <time.h>

int fib(int n)
{
  // printf("calling with %d\n", n);

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
  clock_t t1, t2;
  printf("Please input number\n");
  scanf("%d", &n);

  t1 = clock();
  v = fib(n);
  t2 = clock();

  printf("fibonacchi value is %d\n", v);
  printf("%f\n", (double)(t2 - t1) / CLOCKS_PER_SEC);
}
 