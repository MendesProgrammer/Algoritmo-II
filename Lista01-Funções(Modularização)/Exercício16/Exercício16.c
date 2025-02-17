#include <stdio.h>
#include <stdlib.h>

void SomaReal(double *num, double *soma){
    for(int i = 0; i < 10; i++){
        *soma = *soma + num[i];
    }
}

int main(){
    double vet[10], soma;
    soma = 0.0;
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    SomaReal(vet, &soma);
    printf("O somatorio e %lf\n", soma);
    return 0;
}
