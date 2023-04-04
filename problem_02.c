#include<stdio.h>
int main()
{
    int a=5,b=2,c=10,d=3;
    int sum=a+b;
    int mns=a-b;
    int mlt=a*b;
    float dvd=a*1.0/b;
    int sum2=c+d;
    int mns2=c-d;
    int mlt2=c*d;
    float dvd2=c*1.0/d;
    printf("%d %d %d %0.2f\n",sum,mns,mlt,dvd);
    printf("%d %d %d %0.2f",sum2,mns2,mlt2,dvd2);
    return 0;
}