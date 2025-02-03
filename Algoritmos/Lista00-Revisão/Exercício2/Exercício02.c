#include <stdio.h>
#include <stdlib.h>

int main(){
    double base, altura, area;
    printf("Digite a altura do triangulo: ");
    scanf("%lf", &altura);
    printf("Digite a base do triangulo: ");
    scanf("%lf", &base);
    area = (base * altura) / 2;
    printf("O valor da area deste triangulo e: %lf\n", area);
    return 0;
}
