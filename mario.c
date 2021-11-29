#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Positive Number: ");
    }
    while (n < 1);

    for (int i = n; i > 0; i--)
    {
        int space = i - 1;
        for (int j = space; j > 0 ;j--)
        {
            printf(" ");
        }
        for (int hash = 1; hash <= n - space; hash++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int hash = 1; hash <= n - space; hash++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}