#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a>b && a>c ? printf("a is greatest"): 
    b>c ? printf("b is greatest"): printf("c is greatest");
    return 0;
}
