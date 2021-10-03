#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  printf("Start Game!");

  int left = 20, right = 36;
  char answer[10];

  while (right - left > 1)
  {
    int mid = left + (right - left) / 2;

    printf("Is the age less than %d ? (yes/no)", mid);
    scanf("%s", answer);

    if (strcmp(answer, "yes"))
    {
      right = mid;
    }
    else
    {
      left = mid;
    }
  }

  printf("The age is %d !", left);
}
