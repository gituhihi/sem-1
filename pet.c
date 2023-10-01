#include<stdio.h>

int main(){
int i,j,n=11;
    for(i=1;i<=n;i++)
    {
        if(i%3==0||i==1)
        {
            printf("%d", i);
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                if(j%2==0)
                {
                    printf("*");
                }
                else
                {
                    printf("%d",j);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
