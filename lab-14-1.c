#include<stdio.h>
void main()
{
	int n,i=0;
	printf("enter the number:");
	 scanf("%d",&n);
	int arr[n];
	printf("enter the element:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("number in normal number:");
		for(i=0;i<n;i++){
	printf("\n%d",arr[i]);
	}
		printf("number in normal number:");
		for(i=n;i>=0;i--){
printf("\n%d",arr[i]);
	}
	printf("\n");
}
