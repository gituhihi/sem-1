#include<stdio.h>
void main()
{
    int num,i,sum;
    printf( "enter your number: ");
    scanf("%d",&num);
    for (int i = 1; i < 10; i++)                       
    {
       printf("%d X %d =%d\n",num,i+1,(i+1)*num);
    }
    
}