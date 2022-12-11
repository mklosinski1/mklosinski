#include <stdio.h>

int nwd(int a, int b){
    
    int reszta;
    
    if(b==0){
        
        return a;
    }
    else{
        
        nwd(b,(a%b));
    }
}

int main(){
    
    int a,b;
    printf("Podaj liczby: ");
    scanf("%i %i",&a, &b);
    printf("NWD(%i,%i) = %i",a,b,nwd(a,b));
    return 0;
}
    