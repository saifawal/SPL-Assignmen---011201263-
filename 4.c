#include <stdio.h>

int main() {
  int n, i, a = 0;
  printf("Enter a positive Number: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      a = 1;
      break;
    }
  }

  if (n == 0 || n == 1) {
    printf("%d is neither prime nor composite.", n);
  }
  else {

    if (a == 0)
      printf("Prime");
    else
      printf("Not prime");
  }

  return 0;
}


