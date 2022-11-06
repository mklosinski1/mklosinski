#include <stdio.h>

int main(){
    int rok;
    printf("Podaj rok: ");
    scanf("%i", &rok);

    if (rok%4==0 && rok%100 !=0){
        printf("\nPodany rok jest przestępny");
    }
    else{
        printf("\nPodany rok nie jest przestępny");
    }
}