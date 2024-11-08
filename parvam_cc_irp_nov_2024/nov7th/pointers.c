#include <stdio.h>
int main()
{
    int x,y,*pointer;
    x=22;
    printf("%d,%d",x,y);
    pointer=&x;
    printf("%d %d",x,y);
    y=*pointer;
    printf("%d, %d",x,y);
}