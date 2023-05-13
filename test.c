#include <stdio.h>

// A C program to print all natural numbers from n to 1 using while loop
int main(void) 
{
    int i, j;

    i = 1;
    

    while (i <=3)
    {
      printf("The start of iteration %d of the outer loop.\n", i);
      i++;
       j = 1;
      do
      {
       
        printf("Iteration %d of the inner loop.\n", j);
        j++;
      } while (j <= 4);
      
      printf("The emd of iteration %d of the outer loop.\n", i);
      
    }
    
    return (0);
}
