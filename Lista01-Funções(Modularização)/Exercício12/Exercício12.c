#include <stdio.h>
#include <stdlib.h>

int Potencia(int x, int y){
    int resultado, conta;
    conta = x;
    for(int j = 0; j < y-1; j++){
        resultado = 0;
        for(int i = 0; i < conta; i++){
            resultado += x;
        }
        x = resultado;
    }
    return resultado;
}

int main(){
    int x, y, resultado;
    printf("Digite o valor X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    resultado = Potencia(x, y);
    printf("%d elevado a %d e igual a %d\n", x, y, resultado);
    return 0;
}
