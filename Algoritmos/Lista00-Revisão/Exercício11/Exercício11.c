#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, p, mat1[50][50], mat2[50][50], mat3[50][50], i, j, resultado, g, linha, coluna;
    printf("Digite a dimensao M: ");
    scanf("%d", &m);
    printf("Digite a dimensao N: ");
    scanf("%d", &n);
    printf("Digite a dimensao P: ");
    scanf("%d", &p);

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Digite um numero (matriz M X N): ");
            scanf("%d", &mat1[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            printf("Digite um numero (matriz N X P): ");
            scanf("%d", &mat2[i][j]);
        }
    }

    linha = 0;
    coluna = 0;

    for(i = 0; i < m; i++){

        coluna = 0;

        for(j = 0; j < p; j++){

            resultado = 0;
            for(g = 0; g < n; g++){
                resultado = resultado + (mat1[linha][g] * mat2[g][coluna]);
            }           
            mat3[i][j] = resultado;
            coluna++;
        }
        linha++;
    }

    for(i = 0; i < m; i++){
        printf("[ ");
        for(j = 0; j < p; j++){
            printf(" %d ", mat3[i][j]);
        }
        printf("]\n");
    }
    
    return 0;
}
