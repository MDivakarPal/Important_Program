#include<stdio.h>
int main ()
{ int i;
	float x=0,y=0,op;
	char c;
	printf ("\t\t\t\t******CALCULATOR*******");
	scanf("%f%c",&x,&c);
	op=int(c);
	while(op<=61)
	{
		//op=int(c);
		switch (op)
		{
			case 43:
				{
					scanf("%f",&y);
					x=x+y;
					scanf("%c",&c);
					break;
				}
			case 45:
				{
					scanf("%f",&y);
					x=x-y;
					scanf("%c",&c);
					break;
				}
			case 42:
				{
					scanf("%f",&y);
					x=x*y;
					scanf("%c",&c);
					break;
				}
			case 47:
				{
					scanf("%f",&y);
					x=x/y;
					scanf("%c",&c);
					break;
				}
			case 61:
				{
					printf("Total=%f",x);
					break;
				}
		}
	}
	return 0;
	/*char arr[]={'+','-','*','/','='};
	for (i=0;i<5;i++)
	printf("%d\t",arr[i]);*/
}
