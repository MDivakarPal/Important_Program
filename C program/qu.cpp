#include<stdio.h>
int part(int [],int, int );
void sort(int [],int, int );
int part(int a, int p, int r)
{
	int i,j,temp,k;
	k=a[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(a[j]<key)
		{
			temp=a[j];
			i=i+1;
			a[j]=a[i];
			a[i]=temp;
		}
	}
	
}
int main()
{
	
}
