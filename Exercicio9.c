#include <stdio.h>

int main(){
    //VAR
    const int N = 20;
    const int M = 10; 

    int vet[N], freq[M], cont; //Vet deve te 20 valores

    //Inicialização
    cont = 0;

    for(int i = 0; i < N; i++){
        do{
            printf("Digite N: ");
            scanf("%d", &vet[i]);
        }while((vet[i] < 0) || (vet[i] > 9));
    }

    //Lógica
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(vet[j] == i){
                cont = cont + 1;
            }
        }
        freq[i] = cont;
        cont = 0;
    }

    //Resultado
    for(int i = 0; i < M; i++){
        printf("\n Quantidade de %d = %d", i, freq[i]);
    }

    return 0;
}