#include <stdio.h>
int main()
{
    char n;
    printf("enter a character:");
    scanf("%c",&n);
    if((n>=65) && (n<=90))
    {
        printf("Its in uppercase.");
    }
    else if((n>=97) && (n<=122))
    {
        printf("its in lowercase.");
    }
    else{
        printf("its a special character.");
    }
    return 0;
}