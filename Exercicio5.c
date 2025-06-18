#include <stdio.h>

int main(){
    //Vaiáveis
    float vet[4], inv[4];
    int i, j;

    //Declaração de VAR (Entrada de DADOS)
    for(i = 0; i < 4; i++){
        printf("\nDigite um numero: ");
        scanf("%f", &vet[i]);
    }

    //Lógica
    for(i = 0; i < 4; i++){
        for(j = 3; j >= 0; j--){
            inv[i] = vet[j];
            printf("\n%.2f", inv[i]);
        }
        //vet[i] = inv[i];
        //printf("\n%.2f", vet[i]);
        return 0;
    }

    return 0;
}