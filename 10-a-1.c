#include<stdio.h>
void main()
{
	int n,rem,n1,a;
	scanf("%d",&n);
	n1=n%10;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
//		rem=i;
	}
	a=rem+n1;
	printf("%d",a);
}
