#include <stdio.h>

int gcd(int m, int n)
{
  printf("calling with %d / %d \n", m, n);

  int r = m % n;
  if (r == 0) {
      return n;
  }

return gcd(n, r);
}

int main(void)
{
  int m, n, v;
  printf("Please input number1\n");
  scanf("%d", &m);

  printf("Please input number2\n");
  scanf("%d", &n);

  v = gcd(m, n);

  printf("greatest common divisor is %d\n", v);
}
