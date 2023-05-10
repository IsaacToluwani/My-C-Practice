#include <stdio.h>

int main(void) 
{
    int c = 1;
    int n;
    printf("Input a character, n:");
    scanf("%d", &n);
   
    while (c <= n)
     {
        printf("%d\n", c);
        int c = c++;
    }
    
    return (0);
}
