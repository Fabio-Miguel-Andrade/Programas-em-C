#include <stdio.h> //Tem erro

int main(){
    //VAR
    const int N = 10;
    const int M = 5; 

    int vet[N], freq[M], cont, comp, x; 

    //Inicialização
    cont = 0;
    comp = 0;
    x = 0;

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

    while(x < M){
        comp = freq[x];
        x++;
        if(comp < freq[x]){
            comp = freq[x];
        }
    }

    //Resultado
    printf("A Moda e: %d", comp);

    return 0;
}