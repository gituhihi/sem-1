#include<stdio.h>
void main(){
	int n,i=0,poscount=0,negcount=0;
	printf("enter the number of element: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[n]);
		if(arr[n]>0)
		{
			poscount++;
		}
		else
		{
			negcount++;
		}
	}
		printf("The psitive %d ",poscount);
			printf("The negtive %d",negcount);
}
