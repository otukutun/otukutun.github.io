#include <stdio.h>
#include <stdlib.h>

int binary_search(int *tmp, int size, int key)
{
  int left = 0, right = size - 1;

  printf("left: %d, right: %d\n", left, right);

  while (right >= left)
  {
    int mid = left + (right - left) / 2;
    //printf("left: %d, right: %d, mid: %d\n", left, right, mid);
    if (tmp[mid] == key)
      return mid;
    else if (tmp[mid] > key)
      right = mid - 1;
    else if (tmp[mid] < key)
      left = mid + 1;
  }
  return 0;
}

int main(void)
{
  int arry[] = {3, 5, 8, 10, 14, 17, 21, 39};

  // printf("arry %d\n", (int)(sizeof(arry) / sizeof(arry[0])));
  // binary_search(arry, (int)(sizeof(arry) / sizeof(arry[0])), 3);
  int result;
  result = binary_search(arry, (int)(sizeof(arry) / sizeof(arry[0])), 4);
  printf("4, %d\n", result);
  result = binary_search(arry, (int)(sizeof(arry) / sizeof(arry[0])), 3);
  printf("3, %d\n", result);
  result = binary_search(arry, (int)(sizeof(arry) / sizeof(arry[0])), 40);
  printf("40, %d\n", result);
}
