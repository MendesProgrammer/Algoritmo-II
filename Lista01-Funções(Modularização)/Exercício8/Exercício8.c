#include <stdio.h>
#include <stdlib.h>

int Fatorial(int numero);

int main(){
    int num, resultado;
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    } while(num <= 0);
    resultado = Fatorial(num);
    printf("O fatorial de %d e %d\n", num, resultado);
    return 0;
}

int Fatorial(int numero){
    int resultado;
    resultado = 1;
    for (int i = 1; i <= numero; i++){
        resultado *= i;
    }
    return resultado;
}
