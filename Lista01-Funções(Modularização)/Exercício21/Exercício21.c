#include <stdio.h>
#include <stdlib.h>

int MaiorValor(int m[][5]){
    int maior, cont;
    
    cont = 1;
    for(int i = 0; i < 5; i++){
        for(int j = cont; j < 5; j++){
            if(i == 0 && j == 1){
                maior = m[i][j];
            } else {
                if(m[i][j] > maior){
                    maior = m[i][j];
                }
            }
        }
        cont++;
    }
    return maior;
}

int main(){
    int matriz[5][5], maior;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    maior = MaiorValor(matriz);
    printf("O maior valor acima da diagonal principal e: %d\n", maior);
    return 0;
}
