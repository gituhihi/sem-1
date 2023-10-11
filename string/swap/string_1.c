#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],b[50];
    printf("Enter your number:  ");
    gets(a);
    int lenth=strlen(a);
    int i=0,j=lenth-1;
    i++;
    for ( i=0; i < lenth/2; i++)
    {
        char temp=a[i];
        a[i]=a[j];
        a[j]= temp;
        j--;
    }
    printf("reverse is : %s",a);
}       