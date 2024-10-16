
#include <stdio.h>

void Binary (int num) 
{
    if (num == 0) 
    {
        return;  
    }
    Binary (num / 2); 
    printf ("%d", num % 2);  
}

int main() 
{
    int number;
    printf("Please enter a number: ");
    scanf ("%d", &number);

    Binary (number);

    return 0;
}
