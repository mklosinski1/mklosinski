#include <stdio.h>
int main(){
 int n, sum;
    printf("Podaj liczbę: ");
    scanf("%i", &n);
    sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int kw = 0;
        kw = i*i;
        sum += kw;
    }
    printf("%i",sum);
}