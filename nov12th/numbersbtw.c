#include <stdio.h>
int main()
{
    int n1,n2;
    printf("enter two numbers:");
    scanf("%d %d",&n1,&n2);
    if(n1<n2)
    {
        printf("the numbers between %d and %d are:",n1,n2);
        for(;n1++<n2)
        {
         printf("%d\n",n1);  
        }
    }
    else{
        printf("make sure n1 is less than n2");
    }
    return 0;
}

