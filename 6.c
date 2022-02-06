#include<stdio.h>

int main() {
   int arr[100], n, element, pos=0;
   int i;

   printf("Enter size of array: ");
   scanf("%d", &n);

   printf("Enter array elements: \n");
   for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
   }
   printf("Enter element to search: ");
   scanf("%d",&element);

   for(i=0; i<n; i++) {

     if(arr[i]==element) {

       printf("%d found at position %d", element, i+1);
       return 0;
     }
   }

   printf("%d not found.", element);
   return 0;
}
