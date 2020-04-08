#include<stdio.h>
#include<conio.h>
int arr[]={1,2,3,4,5,6,7,8,9};
void imin(int ,int);
void del(int);
int search(int);
void print1(int);
int main()
{   
    int n,k,i,ch;
    printf("1 Intermediate Insertion\n"); 
	printf("2 Search Element\n");
	printf("3 Delete Element\n");
	printf("Enter your Operation\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
			printf("Enter your value\n");
    		scanf("%d",&k);
    		printf("Enter your index\n");
    		scanf("%d",&n);
    		imin(n,k);
	        print1(10);
	        break;
			}
		case 2:
		{
			printf("Enter your searching element\n");
			scanf("%d",&n);
			if(search(n)==1)
			printf("Item found");
			else
			printf("Item Not found");
			break;
		}
		case 3:
		{
			printf("Enter deletable element\n");
			scanf("%d",&n);
			if(search(n)==1)
			{
			del(n);
			print1(8);}
			else
			{
			printf("Item is not exist\n");
			print1(9);
		    }
			break;
		}	
		default:
			printf("Invalid operation");
	}
    	return 0;
}
void imin(int n,int k)
{
	int temp,n1=9;
	while(n1>=n-1)
	{
		arr[n1]=arr[n1-1];
		n1=n1-1;
	}
	arr[n-1]=k;
}
void print1(int n)
{int i;
    printf("Your new array\n");
    for(i=0;i<n;i++)
    printf("%d,",arr[i]);
}
int search(int k)
{
	int i,temp=0;
	for(i=0;i<9;i++)
	{
		if(arr[i]==k)
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	return temp;
	else
    return temp;
}
void del(int k)
{
	int i,n;
	for(i=0;i<9;i++)
	{
		if(arr[i]==k)
		{   n=i;
			break;
		}
	}
	while(n<9-1)
	{
		arr[n]=arr[n+1];
		n=n+1;
	}
}
