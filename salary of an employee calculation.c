/*write a program to calculate the salary of an employee , given
his basic pay (entered by user) ,HRA=15% of the basic pay & TA=20% of 
the basic pay */

#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the basic pay of salary");
    scanf("%f",&a);
    b=a+((15.0/100)*a);
    c=b+((20.0/100)*a);
    printf("Total salary of employee is %f",c);
    return 0;
}