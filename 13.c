#include <stdio.h>

int main() {

  int arr[100], size, c, location = 0;

  printf("Enter number of elements in array: ");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++){

    scanf("%d", &arr[c]);
  }

  for (c = 1; c < size; c++){

    if (arr[c] < arr[location])
      location = c;
  }

  printf("Minimum value: %d\n", arr[location]);

  return 0;
}


