#include<stdio.h>
void main()
{
	int n,digit,i,g[10]={0,0,0,0,0,0,0,0,0,0};
	printf("enter your number:   ");
	scanf("%d",&n);
	for(;n!=0;)
	{
		digit=n%10;
		n=n/10;
//		printf("%d",digit);
		g[digit]=g[digit]+1;
//		printf("%d",g[digit]);
	}
	for(i=0;i<10;i++){
		if(g[i]!=0)
		 printf("Freqency of %d is %d\n",i,g[i]);
		 
	}
		
		 
}
