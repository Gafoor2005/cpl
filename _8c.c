#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*ptr,sum =0;
    printf("enter value of n : ");
    scanf("%d",&n);
    ptr = malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element :",i+1);
        scanf("%d",ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr+i);
    }
    printf("sum of %d elements is %d",n,sum);
    
    return 0;
}