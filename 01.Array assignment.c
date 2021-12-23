/*WAP to input an array of N number of elements and display it. */

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int a[size],i;
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
