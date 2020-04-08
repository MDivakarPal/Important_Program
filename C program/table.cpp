#include<stdio.h>
int main()
{
	int a[10],n,l,i,j,tap;
	printf("Enter the limit\n");
	scanf("%d%d",&n,&l);
	for(i=1;i<=10;i++)
	{
		a[i]=(n-1)*i;
	}
	for(i=1;i<=10;i++)
	{
		tap=a[i];	
		for(j=1;j<=(l-n+1);j++)
		{ 
		tap+=i;
			printf("%d\t",tap);
		}
		printf("\n");
	}
	
}
