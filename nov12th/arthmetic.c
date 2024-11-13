#include <stdio.h>
int main()
{
    char ch;
    int a,b,sum,diff;
    float prod,div;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("MENU:");
    printf("A.Addition\n");
    printf("S. Subtraction\n");
    printf("M. Multiplication\n");
    printf("D. Division\n");
    printf("enter your choice:\n");
    scanf(" %c", &ch);
    printf("the choice is:%c",ch);
    switch(ch)
    {
        case 'A':
            printf("You have chosen to add");
            sum=a+b;
            printf("the sum is: %d",sum);
            break;
        case 'S':
            printf("You have chosen to subtract");
            diff=a-b;
            printf("the difference i:%d",diff);
            break;
        case 'M':
            printf("You have chosen to multiply");
            prod=a*b;
            printf("the product is:%f",prod);
            break;
        case 'D':
            printf("You have chosen to divide");
            div=a/b;
            printf("the division is:%f");
            break;
        default:
            printf("INVALID!!");
            break;
    }
    return 0;
}