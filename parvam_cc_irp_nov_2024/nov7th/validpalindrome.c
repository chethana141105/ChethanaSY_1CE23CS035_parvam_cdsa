#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
bool is_palindrome(char *s)
{
    int left=0,right=strlen(s)-1;
    while(left<right)
    {
        if(!isalnum(s[left]))
        {
            left++;
        }
        else if(!isalnum(s[right]))
        {
            right--;
        }
        else if(tolower(s[left])!=tolower(s[right]))
        {
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main()
{
    char s[100];
    printf("enter a string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]=0;
    if(is_palindrome(s))
    {
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
    }