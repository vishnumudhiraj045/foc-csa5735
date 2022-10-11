#include <stdio.h>
int main()
{
    int num1;
 
    printf("Input an integer : ");
    scanf("%d", &num1);
    
    if (num1 % 2 == 0)
        printf("%d is an even integer\n", num1);
    else
        printf("%d is an odd integer\n", num1);
}
