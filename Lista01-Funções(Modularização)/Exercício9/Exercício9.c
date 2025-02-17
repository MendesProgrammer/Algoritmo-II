#include <stdio.h>
#include <stdlib.h>

int Soma(int numero);

int main(){
    int num, resultado;
    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    resultado = Soma(num);
    printf("A soma dos divisores de %d e %d\n", num, resultado);
    return 0;
}

int Soma(int numero){
    int somar;
    somar = 0;
    for(int i = numero; i >= 1; i--){
        if(numero % i == 0){
            somar += i;
        }
    }
    return somar;
}
