#include <stdio.h>

int main(){
    //Variáveis
    int i, x2, x1, fib, vet[100];

    x1 = 1;
    x2 = 1;
    vet[0] = 1;
    vet[1] = 1;

    printf("%d", vet[0]);
    printf("\n%d", vet[1]);

    for(i = 2; i <= 100; i++){
        fib = x1 + x2;
        x2 = x1;
        x1 = fib;
        vet[i] = fib;
        printf("\n%d", vet[i]);
    }

    
    return 0;
}