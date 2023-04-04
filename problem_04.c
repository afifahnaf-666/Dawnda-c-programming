#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive",num);
    }
    else if(num==0)
    {
        printf("zero",num);
    }
    else
    {
        printf("negative",num);
    }
    return 0;
}