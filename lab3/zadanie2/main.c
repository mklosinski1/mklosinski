#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Podaj pierwszą liczbę: ");
    scanf("%i", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%i", &b);

    printf("\nDodawanie: %i", a+b);
    printf("\nOdejmowanie: %i", a-b);
    printf("\nMnożenie: %i", a*b);
    printf("\nDzielenie: %i", a/b);
    printf("\Reszta z dzielenia: %i", a%b);
}
