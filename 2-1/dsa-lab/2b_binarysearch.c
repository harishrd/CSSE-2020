// Binary Search Algorithm (without sorting)
#include <stdio.h>
// add a fuction to sort the array
int main()
{
   int i, first, last, middle, n, search, array[5];
   printf("Enter number of elements:");
   scanf("%d", &n);
   printf("\nEnter %d integers:", n);
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last)
   {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }

   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
   return 0;
}
