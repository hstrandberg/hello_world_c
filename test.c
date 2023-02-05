#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int n, i;
   int *array;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   // Dynamically allocate memory for the array
   array = (int*)malloc(n * sizeof(int));
   if (array == NULL) {
      printf("Memory allocation failed.\n");
      return 1;
   }

   // Initialize the array
   for (i = 0; i < n; i++) {
      array[i] = i + 1000;
   }

   // Print the array
   printf("The array elements are:\n");
   for (i = 0; i < n; i++) {
     printf("%d \n",array[i]);
   }
   printf("\n");

   // Deallocate memory
   free(array);

   return 0;
}


