#include <stdio.h>
#include <stdlib.h>

double Media(){
    double num, somador, contador;
    do {
        printf("Digite um número(0-sair/valor negativo n considerado): ");
        scanf("%lf", &num);
        if(num > 0.0){
            somador += num;
            contador++;
        }
    } while(num != 0.0);
    return somador / contador;
}

int main(){
    double resultado;
    resultado = Media();
    printf("A media de valores e %.2lf\n", resultado);
    return 0;
}
