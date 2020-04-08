#include<stdio.h>
int partion(int [],int ,int);
void quicksort(int[],int ,int);

int partion(int a[],int p, int r)
{
	int x,i,j,temp;
	x=a[r];
	i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
		
	}
	a[r]=a[i+1];
	a[i+1]=x;
	return (i+1);
}

void quicksort(int a[], int p, int r)
{ int q;
	if(p<r)
	{
		q=partion(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main()
{
	int n,i,a[100]={0};
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf ("Enter your array\n");
	for (i=1;i<=n;i++)
	scanf("%d",&a[i]);
	quicksort(a,1,n);
	printf("Your sorted array is\n");
	for(i=1;i<=n;i++)
	printf("%d\t,\t",a[i]);
	return 0;
}
