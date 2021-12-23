/*WAP to input an array of N number of elements 
and find the sum and average of all the 
elements of that array.  */


#include<stdio.h>
int main()
{
    int size,i,sum=0;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of all the elements of arrays is %d \n",sum);
    printf("The average of all the elements of arrays is %d",sum/size);
    return 0;
}
