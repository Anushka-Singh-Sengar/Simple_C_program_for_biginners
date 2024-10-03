#include<stdio.h>
#include <string.h>
struct employee
{
	char name[100];
	char address[100];
	int age;
	int salary;
	
}emp[100];

int main() 
{
	int i, j, n, sum=0;
	printf("Enter the total no. of employees\n");
	scanf("%d",&n);
	int avg_salary = 0;
	printf("Enter the data of the employee\n");
	for(i=0; i<n; i++)
	{
		printf("enter the name : \n");
		scanf("%s", &emp[i].name);
		printf("enter the address : \n");
		scanf("%s", &emp[i].address);
		printf("enter the age : \n");
		scanf("%d", &emp[i].age);
		printf("enter the salary : \n");
		scanf("%d", &emp[i].salary);                         
								  
								  	}
								  	
	for(i=0; i<n; i++)
	{
		
		sum = sum + emp[i].salary;
									  }
								
								
	avg_salary = sum/n;								  	
	printf("\n average salary is : %d ", avg_salary);
struct employee temp;
	
for(i=0; i<n-1;i++)
{
	for(j=i+1; j<n; j++)
	{
		if((strcmp(emp[i].name, emp[j].name))>0)
		{
		  temp= emp[i];
		  emp[i]= emp[j];
		  emp[j]=temp;
		  	
		}
	}

	
	}
	
for(i=0; i<n; i++)
	{
		printf(" name : %s\n", emp[i].name);
		printf(" address : %s\n", emp[i].address);
		printf("age : %d\n", emp[i].age);
		printf("salary : %d\n",emp[i].salary);
			
						  						  	
}

}


