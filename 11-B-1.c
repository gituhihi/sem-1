#include<stdio.h>
void main()
{
	int n,i,j,a=0,b=1,c;

	printf("enter your number:  ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		c=a+b;

		printf("%d\n",a);
		a=b;
		b=c;
	}
}
