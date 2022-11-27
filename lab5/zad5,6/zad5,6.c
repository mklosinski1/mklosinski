#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, a3, b1, b2, b3;
    printf("Podaj a1 i b1: \n");
    printf("a1 = ");
    scanf("%d", &a1);
    printf("b1 = ");
    scanf("%d", &b1);
    printf("Podaj a2 i b2: \n");
    printf("a2 = ");
    scanf("%d", &a2);
    printf("b2 = ");
    scanf("%d", &b2);
    
    if(a1<a2 && b1<b2 && b1>a2){
        a3 = a2;
        b3 = b1;
        printf("a3 = %i\n", a3);
        printf("b3 = %i\n", b3);
    }
    else if(a2<a1 && b1<b2 && b1>a1){
        a3 = a1;
        b3 = b1;
        printf("a3 = %i\n", a3);
        printf("b3 = %i\n", b3);
    }
    else if(a1<a2 && b2<b1 && b2>a2){
        a3 = a2;
        b3 = b2;
        printf("a3 = %i\n", a3);
        printf("b3 = %i\n", b3);  
    }
    else if(a2<a1 && b2<b1 && b2>a1){
        a3 = a1;
        b3 = b2;
        printf("a3 = %i\n", a3);
        printf("b3 = %i\n", b3);
    }
    else{
        printf("-1\n");
    }
}
    