#include <stdio.h>


    int swap(int * num1, int * num2);

int main() {
    int num1, num2;


    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);


    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    swap(&num1, &num2);


    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    return 0;
}
