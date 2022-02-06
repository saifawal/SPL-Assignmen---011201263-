#include<stdio.h>

struct student
{
    char name[100];
    char id[100];
    float cgpa;
};
int main() {

    struct student s1;
    gets(s1.name);
    fflush(stdin);
    gets(s1.id);
    fflush(stdin);
    scanf("%f",&s1.cgpa);

    return 0;
}


