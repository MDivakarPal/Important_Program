#include<stdio.h>
int i,j;
int insertion(int [], int);
//void print(int [] , int);
 int main()
 {
 	int arr[100],n=0;
 	printf("Enter the size of array");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	 scanf("%d",&arr[i]);
    insertion(arr,n);
 	//print(arr,n);
 	return 100;
 }
  
int insertion(int arr[],int n)
{ 
printf("okk");
int k;
	for(j=1;j<n;j++)
	{
	    k=arr[j];
	    i=j-1;
		while(i>=0&&arr[i]>k){
				arr[i+1]=arr[i];
				i=i-1;
		}
		arr[i+1]=k;	
	}
for (i=0;i<n;i++)
printf("%d,\t",arr[i]);
 return 0;
}
