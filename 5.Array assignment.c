/*WAP to input an array of N number of elements and
store all even numbers in 1 array and all odd 
numbers in another array. Print both the even
and odd array separately.  */


#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
      {  b[j]=a[i];
        j++;}
        else
        {c[k]=a[i];
        k++;
        }
    }
    printf("Even elements are\n");
    for(i=0;i<j;i++)
    {
        printf("%d\n",b[i]);
    }
    printf("Odd elements are\n");
    for(i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
    

}

