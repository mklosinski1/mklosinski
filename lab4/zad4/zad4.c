#include <stdio.h>

int main(){

    int tab[] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i != 10; i++)
    {
        tab[i] *= tab[i];
        printf("\n%i", tab[i]);
    }//nieskończone
}
