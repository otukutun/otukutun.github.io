#include <stdio.h>
#include <time.h>

int fib(int n, int *memo)
{
  // printf("calling with %d\n", n);

  if (n == 0) {
      return 0;
  } else if (n == 1) {
      return 1;
  }

  if (*(memo + n) != -1) {
      return *(memo + n);
  }
  *(memo + n) = fib(n - 1, memo) + fib(n - 2, memo);
  return *(memo + n);
}

int main(void)
{
  int n, v;
  printf("Please input number\n");
  scanf("%d", &n);

  clock_t t1, t2;


  int memo[n - 1];
  for (int i = 2; i < n + 1; i++) {
      memo[i] = -1;
  }

  t1 = clock();
  v = fib(n, memo);
  t2 = clock();

  printf("fibonacchi value is %d\n", v);
  printf("%f\n", (double)(t2 - t1) / CLOCKS_PER_SEC);
}
 