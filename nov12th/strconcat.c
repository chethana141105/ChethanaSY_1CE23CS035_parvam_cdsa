#include <stdio.h>
int main()
{
    int i=0,j=0;
    char str1[50],str2[50];
    printf("enter string1:");
    scanf("%s",str1);
    printf("enter string2:");
    scanf("%s",str2);
    while(str1[i]!='\0')
    i++;
    while(str2[j]!='\0')
    str1[i++]=str2[j++];
    str1[i]='\0';
    printf("the concatenated string is:%s",str1);
    return 0;
}