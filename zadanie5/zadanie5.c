#include <stdio.h>
int main(){
    char i;
    printf("Podaj znak ASCII");
    scanf("%c", &i);

    if(i>=65 && i<=90){
        printf("Duża litera alfabetu");
    }
    else if(i>=97 && i<=122){
        printf("Mała litera alfabetu");
    }
    else{
        printf("Znak ten nie jest literą alfabetu");
    }

}