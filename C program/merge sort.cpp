#include<stdio.h>
//int a[1000]={0};
int b[1000]={0};
void ms(int [],int ,int );
void m(int [],int ,int ,int );
void ms(int a[],int p,int r)
 {  int q,m2;
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
 	int n1,n2,i,j,k,l[500],m2=1,r1[500];
 	 	m2++;
 	   	printf("Merge ,%d",m2);
 	n1=p+q-1;
 	n2=r-q;
 	l[0]=0; 	r1[0]=0;
 	for (i=1;i<=n1;i++)
 	  l[i]=a[p+i-1];
 	for (i=1;i<=n1;i++)
 	  r1[i]=a[q+i];
 	l[n1+1]=9999999;
 	r1[n2+1]=999999;
 	prinf("\t\t\t\t\t\tLeft Subrray\t\t\t");
 	for(i=1;i<=n1;i++)
 	printf("%d\t,",l[i]);
 	prinf("\n\t\t\t\t\t\tRight Subrray\t\t\t");
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
   int n,i,a[1000]={1};
   printf("Enter size of array\n");
   scanf("%d",&n);
   printf("Enter your array\n");
   for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
   ms(a,1,n);
   printf("\n\n\t\t\t\t ****** Your Sorted array******");
   for(i=1;i<=n;i++)
      printf("%d,\t",a[i]);
   
 }
