#include<stdio.h>
int main() {
    int n, j, i;

    printf("Enter the Number: ");
    scanf("%d",&n);

    for(j = 1; j <= n; j++) {

        for(i = 1; i <= n ; i++) {

            if(j % 2 == 1) {

                if(i % 2 == 1) {

                printf("1");
                }
            else if(i % 2 == 0) {

                printf("0");
                }
            }
            else
            if(i % 2 == 1){

                printf("0");

            }
            else if(i % 2 == 0){

                printf("1");

            }
        }
        printf("\n");
    }
    return 0;
}


