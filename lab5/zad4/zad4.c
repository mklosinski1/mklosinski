#include <stdio.h>
#include <string.h>

int main()
{
    char napis1[20];
    int rozmiar,j=0,wynik;
    printf("Podaj slowo: ");
    scanf("%s",napis1);

    rozmiar=strlen(napis1);

    for(int i=rozmiar;i>0;i--)
    {
        if(napis1[j]==napis1[i-1])
        {
            wynik=1;
        }
        else
        {
            wynik=0;
        }
        j++;
    }
    if(wynik==1)
    {
        printf("Wyraz jest palindromem\n");
    }
    else if(wynik==0)
    {
        printf("Wyraz nie jest palindromem\n");
    }
}