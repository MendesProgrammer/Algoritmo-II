#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double salario;
    int numero;
} pessoa;

void Calcular(pessoa *pes, int num, double *sal, double *fil){
    double soma1, soma2;
    soma1 = 0.0;
    soma2 = 0.0;
    for(int i = 0; i < num; i++){
        soma1 += pes[i].salario;
        soma2 += pes[i].numero;
    }

    *sal = soma1 / (num * 1.0);
    *fil = soma2 / (num * 1.0);
}

int main(){
    pessoa p[51];
    int quant;
    double mediaSal, mediaNum;
    do {
        printf("Digite a quantidade de pessoas: (1 ate 50) ");
        scanf("%d", &quant);
    } while (quant < 1 || quant > 50);

    for(int i = 0; i < quant; i++){
        printf("Digite o salario: ");
        scanf("%lf", &p[i].salario);
        printf("Digite o numero de filhos: ");
        scanf("%d", &p[i].numero);
    }

    Calcular(p, quant, &mediaSal, &mediaNum);
    
    printf("A media de salario da populacao e %.2lf\n", mediaSal);
    printf("A media do numero de filhos da populacao e %.2lf\n", mediaNum);
    return 0;
}
