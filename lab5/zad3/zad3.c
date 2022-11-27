#include <stdio.h>

void znak(char napis[], int i)
{
    printf("i-ty znak napisu to: %c\n",napis[i-1]);
}

int main()
{
    int i;
    char napis[20];
    printf("Podaj napis: ");
    scanf("%s",napis);
    printf("Podaj liczbe i: ");
    scanf("%i",&i);

    znak(napis,i);
}
