#include <stdio.h>
void sumall(int );
int T,sum,num;
int main(void) {
	// your code goes here
	scanf("%d",&T);
	while(T--)
	{
	    sum=0;
	    scanf("%d",&num);
	    sumall(num);
	}
	return 0;
}
void sumall(int num)
{
   sum=0;
   while (num)
   {
       sum=sum+(num%10);
       num=num/10;
   }
   printf("%d",sum);
}


