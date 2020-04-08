#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter any No\n");
	scanf("%d",&n);
	if(n<0)
	n=n*(-1);
	printf("%d",n);
	return 0;
}
