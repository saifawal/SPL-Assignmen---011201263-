#include<stdio.h>
int main()
{
    int a;

    printf("Enter a Number: ");
    scanf("%d",&a);

    for(int i=1; i<=a; i++)
    {
        if(i%2==1)
            printf("1");
        else if(i%2==0)
            printf("0");
        if(i<a)
            printf(",");
    }
    return 0;
}


