#include <stdio.h>

int main(void) {
	// your code goes here
	int fact,t,n[100],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&n[i]);
	printf("\n");
	for(i=0;i<t;i++)
	{
		fact=1;
	    while(n[i]>=1)
		{
		fact=fact*n[i];
		n[i]=n[i]-1;	
		}	
		printf("%d\n",fact);
	}
	return 0;
}
