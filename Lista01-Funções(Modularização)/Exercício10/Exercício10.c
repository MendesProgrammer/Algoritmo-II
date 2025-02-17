#include <stdio.h>
#include <stdlib.h>

int Soma(int numero){
    int somatorio;
    somatorio = 0;
    for(int i = numero; i > 0; i--){
        somatorio += (1 + i);
    }
    return somatorio;
}

int main(){
    int num, resultado;
    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    } while (num < 1);
    resultado = Soma(num);
    printf("O resultado da soma e %d\n", resultado);
    return 0;
}
