#include <stdio.h>

int bin(int n){
   if(n>0)
   {
       bin(n/2);
       printf("%i",n%2);
   }
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%i",&n);
    printf("Liczba n binarnie: ");
    bin(n);
    
    return 0;
}