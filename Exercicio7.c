#include <stdio.h>

int main(){
    //VAR
    int i, vet[5], normaQuad;

    //Entrada
    normaQuad = 0;

    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    //Lógica
    for(i = 0; i < 5; i++){
        normaQuad = normaQuad + (vet[i] * vet[i]);
    }

    //Saida
    printf("Norma ao quadrado = %d", normaQuad);

    return 0;
}