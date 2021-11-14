/* 21. Write a C program to input electricity
unit charges and calculate total electricity 
bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */  
  
#include<stdio.h>
  int
main () 
{
  
float a, b, c, d, e, x;
  
printf ("Enter the number of units consumed\n");
  
scanf ("%f", &a);
  
if (a <= 50)
    
    {
      
x = 0.5 * a;
      
printf ("Total bill = %f", x + x * 0.2);
    
}
  
  else if (a <= 150)
    
    {
      
x = 0.5 * 50 + (a - 50) * 0.75;
      
printf ("Total bill = %f", x + x * 0.2);
    
}
  
  else if (a <= 250)
    
    {
      
x = 0.5 * 50 + 0.75 * 100 + (a - 150) * 1.2;
      
printf ("Total bill = %f", x + x * 0.2);
    
}
  
  else
    
    {
      
x = 0.5 * 50 + 0.75 * 100 + 1.2 * 100 + (a - 250) * 1.5;
      
printf ("Total bill = %f", x + (x * 0.2));
    
}
  
return 0;

}
