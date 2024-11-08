#include <stdio.h>
struct student
{
    char name[15];
    int sem;
    char usn[10];
    int m1,m2,m3;
};
void main()
{
    struct student std;
    float avg=0.0,sum=0.0;
    printf("enter the name of the student:");
    scanf("%s",&std.name);
    printf("enter the sem:");
    scanf("%d",&std.sem);
    printf("enter the usn of the student:");
    scanf("%s",std.usn);
    printf("enter the marks of three subjects of the student:");
    scanf("%d %d %d",&std.m1,&std.m2,&std.m3);
    sum=std.m1+std.m2+std.m3;
    avg=sum/3;
    if(avg>35)
    {
        printf("the student has passed\n");
    }
    else
    {
        printf("the student has been failed\n");
    }
    printf("\nSTUDENT DETAILS\n");
    printf("Student Name:%s\n",std.name);
    printf("Sem:%d\n",std.sem);
    printf("USN:%s\n",std.usn);
    printf("The total marks is:%f",sum);
    printf("The average percentage is:%f",avg);
}
