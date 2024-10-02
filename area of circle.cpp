//Compute the area of the circle taking radius from user
#include<stdio.h>   
#define PI 3.141  // macros defination
//macros: replace 3.14 where PI is used
int main()   
{  
float radius, area;  
printf("Enter radius of circle\n");  
scanf("%f", & radius);  
area = PI * radius * radius;  
printf("Area of circle : %f\n", area);  
return 0;  
}
