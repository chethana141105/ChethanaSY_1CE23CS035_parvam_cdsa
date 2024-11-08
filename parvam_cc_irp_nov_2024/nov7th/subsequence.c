#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool is_subsequence(const char *s,const char *t)
{
    int s_len=strlen(s);
    int t_len=strlen(t);
    int s_index=0;
    for(int i=0;i<t_len && s_index<s_len;i++)
    {
        if(s[s_index]==t[i])
        {
            s_index++;
        }
    }
    return s_index==s_len;
}
int main()
{
    char s[100];
    char t[100];
    printf("enter a string:");
    scanf("%s",s);
    printf("enter string to be checked:");
    scanf("%s",t);
    if(is_subsequence(s,t))
    {
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
    }