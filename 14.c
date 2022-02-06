#include <stdio.h>
#include <conio.h>

int main() {

	int num,res=0;
	int clrscr();

	printf("Enter a Number: ");
	scanf("%d",&num);
	res=prime(num);

	if(res==0){
		printf("\nPrime");
	}
	else{
		printf("\nNot Prime");
	}
	getch();
}

int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}


