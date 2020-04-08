#include<stdio.h>
int main()
{  int i,j,n;float a[3][100],cap,pw=0,k,temp,profit=0;
	printf("Enter the total no of items\n");
	scanf("%d",&n);
	printf("Enter size of knapsack bag\n");
	scanf("%f",&cap);
	printf("Enter your item Profit and wait respectively");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[0][i]);
		scanf("%f",&a[1][i]);
		a[2][i]=(a[0][i]/a[1][i]);
	}
	printf("Your inputed items are \n total items=%d\t size of knapsack=%f\n",n,cap);
	// Greedy sorting
    for (i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[2][j]<a[2][j+1])
			{
				temp=a[2][j];
				a[2][j]=a[2][j+1];
				a[2][j+1]=temp;
				
				temp=a[0][j];
				a[0][j]=a[0][j+1];
				a[0][j+1]=temp;
				
				temp=a[1][j];
				a[1][j]=a[1][j+1];
				a[1][j+1]=temp;
						
			}
		}	
	}
	for(i=0;i<n;i++)
	{

		if(cap>a[1][i])
		{ 	profit=profit+a[0][i];
			cap=cap-a[1][i];
		}
		if(cap>0 && cap<a[1][i])
		{ printf("\nCapicity=%f\n",cap);
		profit=profit+a[2][i]*(cap);
		break;
		}
	}
	printf ("Profit :-");
	for(j=0;j<n;j++)
	{
		printf("\t%f",a[0][j]);
	}
	printf ("\nWeights :-");
	for(i=0;i<n;i++)
	{
		printf("\t%f",a[1][i]);
	}
	printf ("\nPer unit :-");
	for(i=0;i<n;i++)
	{
		printf("\t%f",a[2][i]);
	}
	printf("\n Profit=%f\t",profit);	
	return 0;
}
