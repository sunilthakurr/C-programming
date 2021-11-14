/* 15. Write a C program to input all sides of a 
triangle and check whether triangle is 
valid or not.  */  
  
 
#include<stdio.h>
  int
main () 
{
  
float a, b, c;
  
printf ("Enter the angles of the triangle\n");
  
scanf ("%f%f%f", &a, &b, &c);
  
if (a + b > c && b + c > a && c + a > b && a + b + c == 180)
    
printf ("Triangle is valid");
  
  else
    
printf ("Triangle is not valid");
  
return 0;

}


 
 
