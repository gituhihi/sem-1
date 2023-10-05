#include<stdio.h>
void main()
{
	int n,i=2,flag=0;
	printf("enter a number:  ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
				
	}
	if(flag==1)
	{
		printf("not prime:  ");
	}
	else
	{
			printf("prime:  ");
	}
}
