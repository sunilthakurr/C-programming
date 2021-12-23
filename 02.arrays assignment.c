/*WAP to input an array of N number of
elements and display it in reverse order.*/

#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int a[i];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size/2;i++)
    {
        int temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;
}
printf("Your elements of array after reverse is:\n");
for(i=0;i<size;i++)
{
    printf("%d\n",a[i]);
}
return 0;
}

