#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
             for(j=1;j<=i;j++){
                if(i%j==0)
                    sum = sum+j;
             }
        }
    }
    printf("%d",sum);
    return 0;
}

