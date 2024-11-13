#include <stdio.h>
int main()
{
    int i,j,n,temp,k;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(temp=1;temp<=(n-i)*2;++temp)
        {
            printf(" ");
        }
        for(j=1;j<=i;++j)
        {
            if(i!=j) 
               printf("%d ",j);
            else
               printf("%d",j);
        }
        for(k=i-1;k>=1;--k){
            printf(" %d",k);
        }
        printf("\n");
    }
return 0;
}