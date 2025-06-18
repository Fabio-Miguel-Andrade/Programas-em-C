#include <stdio.h>

int main(){
    //VAR
    int i, u[5], v[5], soma, sub, mult, prodEscalar;

    //Entrada
    for(i = 0; i < 5; i++){
        printf("Digite um valor para U: ");
        scanf("%d", &u[i]);

        printf("Digite um valor para V: ");
        scanf("%d", &v[i]);
    }

    soma = 0;
    sub = 0;
    mult = 1;
    prodEscalar = 1;

    //Lógica
    for(i = 0; i < 5; i++){
        soma = soma + u[i] + v[i];
        sub = sub - u[i] - v[i];
        mult = v[i] * u[i];
        printf("\nMult = %d", mult);
        prodEscalar = prodEscalar * v[i] + u[i]; //Consertar
    }

    //Saida
    printf("\nSoma = %d", soma);
    printf("\nSub = %d", sub);
    printf("\nProduto Eascalar = %d", prodEscalar);

    return 0;
}