#include <stdio.h>

int main(){

    int n;
    printf("Podaj liczbę n: ");
    scanf("%i", &n);

    int tab[n];

    for (int i = 0; i < n; i++)
    {
        printf("Podaj liczbę: ");
        scanf("%i", &tab[i]);
    }
    
    for (int i = 0; i != n; i++)
    {
        printf("%i", tab[i]);
    }
    
}