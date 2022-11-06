#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Podaj liczbę a");
    scanf("%d", &a);
    printf("Podaj liczbę b");
    scanf("%d", &b);
    printf("Podaj liczbę c");
    scanf("%d", &c);

    if(a>b){
        if(a>c){
            printf("Liczba a jest największa");
        }else{
            printf("Liczba c jest największa");
        }
    }else if(a<b){
        if(b>c){
            printf("Liczba b jest największa");
        }else{
            printf("Liczba c jest największa");
        }
        }
}
