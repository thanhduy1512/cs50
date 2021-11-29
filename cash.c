#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float dollars;

    do
    {
     dollars = get_float("Change owed: ");
    }
    while (dollars < 0.009);

    int cents = round(dollars * 100);

    int coins = 0;
    
    int c25 = cents / 25;
    coins += c25;
    
    int c10 = cents % 25 / 10;
    coins += c10;
    
    int c5 = cents % 25 % 10 / 5;
    coins += c5;
    
    int c1 = cents % 25 % 10 % 5 / 1;
    coins += c1;
    
    printf("%i\n", coins);
}