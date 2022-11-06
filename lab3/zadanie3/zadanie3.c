#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Podaj liczbę a: ");
    scanf("%i", &a);
    printf("Podaj liczbę b: ");
    scanf("%i", &b);

    if(a>b)
    {
        printf("\nLiczba a jest większa");
    }
    else
    {
        printf("\nLiczba b jest większa");
    }
}