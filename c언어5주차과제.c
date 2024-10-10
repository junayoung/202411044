#include <stdio.h>

int main(void)
{
    int num, i, prime = 1; 

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("It is not a prime number.\n");
    }

    for (i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            prime = 0;
            break;  
        }
    }

    if (prime)
        printf("It is a prime number.\n");
    else
        printf("It is not a prime number.\n");

    return 0;
}