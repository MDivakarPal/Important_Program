#include<stdio.h>
//void selection(int [],int);
//void disp(int [],int);
//int a[1000];
int main()
{
	int i,n,j,min,a[n],temp,loc;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf ("Enter your array\n");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Your unsorted array is\n");
	for(i=0;i<n;i++)
	printf("%d\t,\t",a[i]);
	//selection(a,n);
	//disp(a,n);
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
			min=a[j];
			loc=j;
			}
		}
		
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
	}
	printf("Your sorted array is\n");
	for(i=0;i<n;i++)
	printf("%d\t,\t",a[i]);
	return 0;
}
/*void selection(int a[],int n)
{
	int min,i,j;
	for(i=0;i<n;i++)
	{
		min=a[i];
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			min=a[j];
		}
		a[i]=min;
	}
}
void disp(int a[],int n)
{
	int i;
	printf("Your sorted array is\n");
	for(i=0;i<n;i++)
	printf("%d\t,\t");
}*/
