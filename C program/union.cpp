#include<stdio.h>
int main()
{ int i,*j;
  j=&i;
  i=10;
	struct un{
		int x,y;
		char n[20];
	};
	un un1={10,50,"Divakar Pal"};
	un un2={76,56,"gui"};
	un1.x=90;
	un1.y=90;
	printf("Value of x is\t %d",un1.x);
		printf("Value of y is\t %d",un1.y);
			printf("Value of n is\t %s",un1.n);
				printf("Address of i is\n %d",*j);
								printf("\nSecond object of Union");
		printf("Value of x is\t %d",un2.x);
		printf("Value of y is\t %d",un2.y);
			printf("Value of n is\t %s",un2.n);
}
