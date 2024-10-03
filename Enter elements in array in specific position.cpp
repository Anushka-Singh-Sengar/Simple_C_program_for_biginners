// enter elements in specific position in array
#include <stdio.h>
#define MAX_SIZE 100

void insertElement(int array[], int *size, int position, int element ) {
    
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    
    for (int i = *size; i > position; i--) {
        array[i] = array[i - 1];
    }

   
    array[position] = element;

    
    (*size)++;
}

void deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid position!\n");
        return;
    }


    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Element deleted successfully!\n");
}
int linearsearch(int arr[],int size, int k)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i]==k)
		{
			return i;
			
		}
		else{
			return NULL;
		}
	}
}

int main() {
    int array[MAX_SIZE];
    int size, position, element, index, k;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    

    printf("Enter the element to insert: ");
    scanf("%d", &element);


    insertElement(array, &size, position, element);

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
     printf("Enter the index to delete an element\n");
        scanf("%d", &index);
         deleteElement(array, &size, index);
         printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("\n%d ", array[i]);}
        printf("\nenter the element which you have to search using linea search \n");
        scanf("&d",&k);
        int x = linearsearch(array, size, k);
		printf(" Indesx of the element is %d", k);
		  
}

    
