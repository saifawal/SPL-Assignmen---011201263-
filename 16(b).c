#include<stdio.h>

struct player
{
    char name[100], country[100];
    int run[100], wicket[100], point[100];
};

int main()
{
    int i;
    struct player shakib,tamim;
    gets(shakib.name);
    fflush(stdin);
    gets(shakib.country);
    fflush(stdin);
    for(i=0;i<3;i++){
            scanf("%d",&shakib.run[i]);
            if(shakib.run[i]<=25){
                shakib.point[i] = shakib.point[i] + 5;
            }else if(shakib.run[i]>25 && shakib.run[i]<=50){
                shakib.point[i] = shakib.point[i] + 10;
            }else if(shakib.run[i]>50 && shakib.run[i]<=75){
                shakib.point[i] = shakib.point[i] + 15;
            }else if(shakib.run[i]>75){
                shakib.point[i] = shakib.point[i] + 20;
            }
            shakib.point[i+1]=0;
        }
    for(i=0;i<3;i++){
            scanf("%d",&shakib.wicket[i]);
            shakib.point[i] = shakib.point[i] + shakib.wicket[i]*12;
    }
    fflush(stdin);
    gets(tamim.name);
    fflush(stdin);
    gets(tamim.country);
    fflush(stdin);
    for(i=0;i<3;i++){
            scanf("%d",&tamim.run[i]);
            if(tamim.run[i]<=25){
                tamim.point[i] = tamim.point[i] + 5;
            }else if(tamim.run[i]>25 && tamim.run[i]<=50){
                tamim.point[i] = tamim.point[i] + 10;
            }else if(tamim.run[i]>50 && tamim.run[i]<=75){
                tamim.point[i] = tamim.point[i] + 15;
            }else if(tamim.run[i]>75){
                tamim.point[i] = tamim.point[i] + 20;
            }tamim.point[i+1]=0;
        }

    for(i=0;i<3;i++){
            scanf("%d",&tamim.wicket[i]);
            tamim.point[i] = tamim.point[i] + tamim.wicket[i]*12;
    }

    for(i=0;i<3;i++){
        printf("\nMatch %d: Shakib Al Hasan Points: %d",i+1,shakib.point[i]);
        printf("\nMatch %d: Tamim Iqbal Points: %d",i+1,tamim.point[i]);
        printf("\n");
    }
    return 0;
}


