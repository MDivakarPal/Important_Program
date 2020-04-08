#include<stdio.h>
int search (int [],int , int);
void delete1 (int , int , int);
int search(int a[],int num,int n)
{
	int i, index[n]={-1},j=0;;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			index[j]=i;
			j=j+1;
		}
	}
	return index;
}
void delete1(int a[],int index,int n)
{
	int i;
	for(i=index;i<n;i++)
	{
		a[i]=a[i+1];
	}
}
int main()
{
	int i,index,a[100],n=0,num;
 	printf("Enter the size of array");
 	scanf("%d",&n);
 	       printf("Enter deleting element");
 	for(i=0;i<n;i++)
 	 scanf("%d",&a[i]);
 	printf("Enter deleting number");
 	scanf("%d",&num);
    index=search(a,num,n);
    if(index>0){
       delete1(a,index,n);
	   printf("Your array after deletion");
	   for(i=0;i<n-1;i++)
	   {
	   	printf("%d\t,",a[i]);
	   }}
    else
       printf("Sorry element not exist");
}
