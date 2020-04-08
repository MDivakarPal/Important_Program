#include<stdio.h>
/*float knapsack(double [][] , int , double []);
float knapsack(double a[][], int n, double tab[])
{
   int i,j;
   double profit;	
}*/
int main()
{
	int i,j,n,cap;
	printf("Enter total no of items\n");
	scanf("%d",&n);
	printf("Enter Size of knapsack bag\n");
	scanf("%d",&cap);
	double a[2][n], profit ,tab[n][cap]={0};
	printf("Enter your item details as profit and weight\n");
	/*for(i=0;i<n;i++)
	scanf("%f%f",a[0][i],a[1][i]);*/
	
	printf("0-1 Knapsack table\n");
	for(i=0;i<n;i++)
	{
		for (j=0;j<cap;j++)
		printf("%f,",tab[i][j]);
		printf("\n");
	}
}
