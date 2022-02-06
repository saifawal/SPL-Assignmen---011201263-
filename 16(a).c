#include<stdio.h>

struct triangle
{
    int triangle_id;
    int base;
    int height;
};
void area(struct triangle t[]);

int main()
{
    struct triangle t[30];
    for(int i=0;i<3;i++){
        scanf("%d",&t[i].triangle_id);
        scanf("%d",&t[i].base);
        scanf("%d",&t[i].height);
    }
    area(t);
}
void area(struct triangle t[])
{
    int area1=(t[0].base*t[0].height)/2;
    int area2=(t[1].base*t[1].height)/2;
    int area3=(t[2].base*t[2].height)/2;
    if(area1>area2 && area1>area3)
        printf("Area of 1: %d",area1);
    else if(area2>area1 && area2>area3)
        printf("Area of 2: %d",area2);
    else
        printf("Area of 3: %d",area3);

        return 0;
}
