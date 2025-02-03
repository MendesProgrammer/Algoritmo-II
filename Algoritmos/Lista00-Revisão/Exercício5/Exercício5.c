#include <stdio.h>
#include <stdlib.h>

int main(){
    double nota[10], maior, menor, soma, media;
    int i, quant;
    quant = 0;
    for(i = 0; i < 10; i++){
        printf("Digite a nota do aluno: ");
        scanf("%lf", &nota[i]);
    }
    for(i = 0; i < 10; i++){
        if(i == 0){
            maior = nota[i];
            menor = nota[i];
        } else {
            if (nota[i] > maior)
                maior = nota[i];
            else if (nota[i] < menor)
                menor = nota[i];
        }
        soma = soma + nota[i];
    }
    media = soma / 10;
    for(i = 0; i < 10; i++){
        if(nota[i] > media)
            quant++;
    }
    printf("A maior nota e: %lf\n", maior);
    printf("A menor nota e: %lf\n", menor);
    printf("A media da classe e: %lf\n", media);
    printf("O numero de alunos acima da media da classe: %d\n", quant);
    return 0;
}
