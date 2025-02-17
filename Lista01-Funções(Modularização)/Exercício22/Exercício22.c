#include <stdio.h>
#include <stdlib.h>

void CriarMatriz(double m[][5]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um numero: ");
            scanf("%lf", &m[i][j]);
        }
    }
}

double Somar(double m[][5]){
    double soma;
    soma = 0.0;
    for(int i = 6; i < 10; i++){
        for(int j = 0; j < 5; j++){
            soma += m[i][j];
        }
    }
    return soma;
}

int main(){
    double matriz[10][5], soma;
    CriarMatriz(matriz);

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            printf(" %.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    soma = Somar(matriz);
    printf("A soma dos elementos a partir da 6 linha e igual a %.2lf\n", soma);
    return 0;
}
