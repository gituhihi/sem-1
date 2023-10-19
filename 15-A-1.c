#include<stdio.h>
int main()
{
int a[50];
int b[50];
int i,n;
printf("enter your element");
scanf("%d",&n);
for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }
	     for(i=0; i<n; i++)
    {
        b[i] = a[i];
    }
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("%d", b[i]);
    }
	       printf("\n\n");
}

