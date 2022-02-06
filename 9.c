#include <stdio.h>
#include <string.h>

int main() {

   char arr[100];

   printf("Enter the sentence to reverse: ");
   gets(arr);

   strrev(arr);

   printf("%s", arr);

   return 0;
}
