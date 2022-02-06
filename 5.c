#include <stdio.h>
int main()
{
  int n, c, d, arr1[100], arr2[100];

  printf("Enter the number of elements you want in array: ");
  scanf("%d", &n);

  printf("Enter array elements: \n");

  for (c = 0; c < n ; c++)
    scanf("%d", &arr1[c]);

  for (c = n - 1, d = 0; c >= 0; c--, d++)
    arr2[d] = arr1[c];

  for (c = 0; c < n; c++)
    arr1[c] = arr2[c];

  for (c = 0; c < n; c++)
    printf("%d ", arr1[c]);

  return 0;
}


