#include <stdio.h>
int main()
{
    int arr[5]={2,12,34,6,9};
    int n=5;
    int i;
    printf("original array:");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\nreversed array:");
    for(i=n-1;i>=0;i--){
        printf(" %d ",arr[i]);
    }
    return 0;
}