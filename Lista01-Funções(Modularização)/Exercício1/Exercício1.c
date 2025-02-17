#include <stdio.h>
#include <stdlib.h>

int Somatorio(int n);

int main(){
    int numero, soma;
    do{
        printf("Digite um numero (>= 1) ");
        scanf("%d", &numero);
    } while (numero < 1);
    soma = Somatorio(numero);
    printf("A soma dos numeros entre 1 e %d e %d\n", numero, soma);
    return 0;
}

int Somatorio(int n){
    int soma;
    soma = 0;
    while(n >= 1){
        soma = soma + n;
        n--;
    }
    return soma;
}