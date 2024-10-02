//This c  program compute the sum of numbers until the user enters 0
#include <stdio.h> 
int main()
 { 
int number, sum = 0; 
do
 { 
printf("Enter a number: "); 
scanf("%d", &number); 
sum += number;
 } 
while(number != 0.0); // false only if the user has entered 0 else true 
printf("Sum = %d ",sum); 
return 0; 
}

