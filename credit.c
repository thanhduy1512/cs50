#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: ");

    int sumNdLast = 0;
    int sumStLast = 0;

    for(long i = 100; i < number * 10; i *= 100)
    {
        int ndLast = number % i / (i/10);
        sumNdLast += ndLast * 2;
    }

    for(long i = 10; i < number * 10; i *= 100)
    {
        int stLast = number % i / (i/10);
        sumStLast += stLast;
    }
    
    int sum = sumNdLast + sumStLast;
    
    if(sum % 10 == 0)
    {
        printf("Visa\n");
    }
    else
    {
        printf("Invalid%i\n", sum);
    }

}