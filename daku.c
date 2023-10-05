#include<stdio.h>
void main()
{
	int n=1,sum=0,i,count=0,avg;
//		scanf("%d",&i);
	while(1)
	{
		scanf("%d",&n);
		sum+=n;
		if(n==0){
			break;
		}
	 count++;
	}
//	avg=sum/(count-1);
	printf("%d\n",avg=sum/count);
	printf("%d\n",sum);
}
