#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startSize, endSize;
    float years = 0;

    do
    {
     startSize = get_int("Start Size: ");
    }
    while(startSize < 9);

    do
    {
     endSize = get_int("End Size: ");
    }
    while(endSize < startSize);

    int diff = endSize - startSize;

    years = diff / (startSize / 3 - startSize / 4);



    printf("%f year\n ", years);
}