#include <stdio.h>
#include <math.h>

double StandardDeviation(double arr[], int size) 
{
    double sum = 0, mean, variance = 0, sd;

    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    mean = sum / size;

    for (int i = 0; i < size; i++) 
    {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;

    sd = sqrt(variance);
    return sd;
}

int main(void) 
{
    double numbers[5];
    int size = 5;

    printf("Enter 5 real number: ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%lf", &numbers[i]);
    }

    double result = StandardDeviation(numbers, size);
    printf("Standard Deviation = %.3lf\n", result);

    return 0;
}