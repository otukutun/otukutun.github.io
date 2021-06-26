#include <stdio.h>
#include <stdbool.h>

bool search(int i, int w, int *a)
{
  if (i == 0)
  {
    if (w == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  // a[i - 1]を選ばない場合　
  if (search(i - 1, w, a))
  {
    return true;
  }

  // a[i - 1]を選ぶ場合
  if (search(i - 1, w - a[i - 1], a))
  {
    return true;
  }

  // どちらもfalseの場合はfalse

  return false;
}

int main(void)
{
  int n, w;
  printf("Please input size of number\n");
  scanf("%d", &n);
  printf("Please input sum you want to search\n");
  scanf("%d", &w);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    printf("Please input num %d\n", i);
    scanf("%d", &a[i]);

    printf("%d\n", a[i]);

    bool result;
    result = search(n, w, a);

    printf("Reulst: %s\n", result ? "Yes" : "No");
  }
}