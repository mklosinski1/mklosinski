#include <stdio.h>

int main(){

    int a, b, i, liczba;
{
    printf("Podaj podstawe potegi: ");
    scanf("%d", &a);
    printf("Podaj potege: ");
    scanf("%d", &b);

    liczba = a;

    for(i = 2; i <= b; i++)

    liczba = liczba*a;
}
printf("Wynik: %d \n",liczba);
}