//How to compute the factorial of a number using recurssion 
#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	int s=1;
	int x = fact(n);
	
	printf("%d",x);
	
}
int fact(int n) // function to compute factorial
{
	if(n==1) // base condition
	 return 1;
	 
	int sum = n * fact(n-1);
	return sum;	
}
