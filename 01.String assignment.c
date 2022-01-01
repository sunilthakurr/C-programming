/*01. Comparison of two string using built in function. */


#include<stdio.h>
int main()
{
    int c;
    char a[100],b[100];
    gets(a);
    gets(b);
    c=strcmp(a,b);
    if(c==0)
    printf("Both the string is equal");
    else if(c>0)
    printf("First string is greater");
    else 
    printf("Second string is greater");
    return 0;
}