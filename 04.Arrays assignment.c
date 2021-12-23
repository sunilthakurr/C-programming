/*WAP to input an array of N number of elements and
count total number of positives, negatives and
zero elements in that array and display those
counts. */


#include<stdio.h>
int main()
{
    int size,i,posit=0,zer=0,negt=0;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        posit++;
        else if(a[i]==0)
        zer++;
        else
        negt++;
        
    }
    printf("The total number of positive elements is %d\n",posit);
    printf("The total number of zero in array is %d\n",zer);
    printf("The total number of negative elements is %d\n",negt);
    return 0;
    
}