#include <stdio.h>
#include <stdlib.h>

int znaki(char a, char b){
    if (a==b){
        printf("1\n");
    }
    else{
    printf("0\n");
    }
}

int main(){

    printf("Podaj dwa znaki\n");
    char a, b;
    scanf("%c %c", &a, &b);
    znaki(a,b);
}