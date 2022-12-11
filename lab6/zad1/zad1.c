#include <stdio.h>

int silnia(int n){
    
    if (n == 0) return 1;
    else return n*silnia(n-1);
}

int main(){
    
    int n;
    printf("Podaj liczbę: ");
    scanf("%i", &n);
    silnia(n);
    printf("n = %i", silnia(n));
    return 0;
}