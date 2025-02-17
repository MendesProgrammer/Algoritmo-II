#include <stdio.h>
#include <stdlib.h>

int Inteiro(int numero);

int main(){
    int dig;
    printf("Digite um numero inteiro: ");
    scanf("%d", &dig);
    Inteiro(dig);
    return 0;
}

int Inteiro(int numero){
    if(numero > 0){
        printf("O numero %d e positivo\n", numero);
    } else {
        if(numero < 0){
            printf("O numero %d e negativo\n", numero);
        } else {
            printf("O numero %d e neutro\n", numero);
        }
    }
}
