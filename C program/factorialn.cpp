#include <stdio.h>
int T,num,fact;
void facto(int);
int main(void) {
	// your code goes here
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&num);
	    facto(num);
	}
	return 0;
}
void facto(int num)
{
    fact=1;
    while(num)
    {
        fact=fact*num;
        num--;
    }
    printf("%d\n",fact);
}


