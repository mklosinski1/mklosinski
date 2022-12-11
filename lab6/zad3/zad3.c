#include <stdio.h>

int liczby(int n){
   if(n==1)
   {
       return printf("1");
   }
   else if(n>1)
   {
      printf("%i ",n);
      return liczby(n-1);
   }
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%i",&n);
    printf("Liczby calkowite z przedzialu od 1 do %i: ",n);
    liczby(n);
    return 0;
}