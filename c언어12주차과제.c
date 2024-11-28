#include <stdio.h>
#include <string.h>

int convCase(int ch) 
{
    const int diff = 'a' - 'A';  
    if (ch >= 'A' && ch <= 'Z') 
    {
        return ch + diff;  
    }
    else if (ch >= 'a' && ch <= 'z') 
    {
        return ch - diff;  
    }
    else 
    {
        return ch;  
    }
}

int main(void) 
{
    char str[100]; 
    int i;

    printf("Input> ");
    fgets(str, sizeof(str), stdin); 
    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
    }
    for (i = 0; str[i] != '\0'; i++) 
    {
        str[i] = convCase(str[i]); 
    }

    printf("Output> %s\n", str); 

    return 0;
}
