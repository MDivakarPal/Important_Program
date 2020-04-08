#include<stdio.h>
int main()
{
	int x;
	int & ref=x;
	x=738;
	ref=98;
	printf("Value of X is %d",x);
	printf("Value of Refrence is %d",ref);
	}
