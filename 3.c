#include<stdio.h>

    int main(){

        int a,f=1,i;

        printf("Enter an integer: ");
        scanf("%d",&a);

        if (a < 0)
        printf("Invalid Input");
        else {
        for(i=1;i<=a;i++)
        {
        f=f*i;
        }
        printf("%d!= %d", a, f);
            }
        return 0;
}
