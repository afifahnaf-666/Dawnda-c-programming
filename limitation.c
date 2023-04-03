#include<stdio.h>
int main()
{
    int a=1000000000;
    long long int b=100000000000;
    double c=88.896523547896214;
    printf("%lld %0.5lf",b,c);
    return 0;
}


//  Limitation of data type int is (10^-9 to 10^9)
//  for greater value than this we need to use 
//   long long int . The limitataion for this is 
//   (10^-18 to 10^18).
//   for using long long int in printf we need to use -
//      printf("%lld",variable name);
// for long float we need to use double in place of float and
// the format specifier will be - %lf 
// for bigger float we need to write the code as -
//     printf("%lf",variable name);