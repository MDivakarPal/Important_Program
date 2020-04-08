#include<stdio.h>
int b[1000]={0};
//int b[1000]={0};
void ms(int [],int ,int );
void m(int [],int ,int ,int );
void ms(int a[],int p,int r)
 {  int q=0,m2;
 printf("\n*****Arrray is \n");
 for(m2=1;m2<=r;m2++)
 printf("%d,\t",a[m2]);
 	if(p<r)
 	{
 	   	q=(p+r)/2;
 	   	ms(a,p,q);
 	   	ms(a,q+1,r);
 	   	m(a,p,q,r);
 	   	
	}
 }
 void m(int a[],int p,int q,int r)
 {
 	int n1,n2,i,j,k,m2=1;
 	n1=q-p+1;
 	n2=r-q;
 	int l[n1+1],r1[n1+1];
 	printf("\n****\t p=%d,\t q=%d,\t r=%d,\t n1=%d , \t n2=%d",p,q,r,n1,n2);
 	l[0]=0; 	r1[0]=0;
 	for (i=1;i<=n1;i++)
 	  l[i]=a[p+i-1];
 	for (j=1;j<=n1;j++)
 	  r1[j]=a[q+j];
 	l[n1+1]=32768;
 	r1[n2+1]=32768;
 	printf("\n****Left Subrray\t\t\t");
 	for(i=1;i<=n1;i++)
 	printf("%d\t,",l[i]);
 	printf("\n****Right Subrray\t\t\t");
 	for(i=1;i<=n2;i++)
 	printf("%d\t,",r1[i]);
 	i=1;j=1;
 	for (k=1;k<=r;k++)
 	{
 	  	if(l[i]<=r1[j]){
 	  	 	a[k]=l[i];
			i=i+1;}
 	  	else{
 	  		a[k]=r1[j];
 	  		j=j+1;}
	}

 }
 
 int main()
 {
   int n,i;
   printf("Enter size of array\n");
   scanf("%d",&n);
   int a[n]={0};
   printf("Enter your array\n");
   for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
   ms(a,1,n);
   printf("\n\n\t\t\t\t ****** Your Sorted array******");
   for(i=1;i<=n;i++)
      printf("%d,\t",a[i]);
   
 } 
