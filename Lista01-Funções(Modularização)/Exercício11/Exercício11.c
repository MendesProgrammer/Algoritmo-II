#include <stdio.h>
#include <stdlib.h>

double Produto(double numero){
    double somatorio;
    somatorio = 0;
    for(double i = numero; i > 0; i--){
        somatorio += (((i * i) + 1) / (i+3));
    }
    return somatorio;
}

int main(){
    double num, resultado;
    do {
        printf("Digite um inteiro positivo: ");
        scanf("%lf", &num);
    } while (num < 1);
    resultado = Produto(num);
    printf("O resultado e igual a %lf\n", resultado);
    return 0;
}
