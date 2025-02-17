#include <stdio.h>
#include <stdlib.h>

double Volume(double raio);

int main(){
    double raio, volume;
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);
    volume = Volume(raio);
    printf("O volume desta esfera e %.2lf\n", volume);
    return 0;
}

double Volume(double raio){
    return (((4.0/3.0) * (raio*raio*raio)) * 3.141592653);
}
