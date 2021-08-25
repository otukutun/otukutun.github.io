#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int v;
    printf("Please input number\n");
    scanf("%d", &v);

    int arry[v];
    for (int i = 0; i < v; i++) {
        printf("Please input number %d\n", i);
        scanf("%d", &arry[i]);
    }

    int dp[v];
    dp[0] = 0;
    for (int i = 1; i < v; i++) {
        if (i == 1) {
          dp[i] = abs(arry[i] - arry[i - 1]);
        } else {
          int val1 = abs(arry[i] - arry[i - 1]) + dp[i - 1];
          int val2 = abs(arry[i] - arry[i - 1]) + dp[i - 2];
          dp[i] = val1 > val2 ? val2 : val1;
        }
    }

  printf("number %d\n", v);
  printf("dp %d\n", dp[v - 1]);
}
 