//program to find greatest of three numbers using ternary operator.


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a>b && a>c ? printf("a is greatest"): 
    b>c ? printf("b is greatest"): printf("c is greatest");
    return 0;
}
