/*Write a C program to check whether a number is 
negative, positive or zero.  */  
  
#include<stdio.h>
  int
main () 
{
  
int a;
  
printf ("Enter the number");
  
scanf ("%d", &a);
  
if (a > 0)
    
    {
      
printf ("a is a positive number");
    
}
  
  else if (a == 0)
    
    {
      
printf ("a is equal to zero");
    
}
  
  else
    
    {
      
printf ("a is negative");
    
}

}
