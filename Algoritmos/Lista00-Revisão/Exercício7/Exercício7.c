#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota[12], i, j, aux, valor, quant;
    for(i = 0; i < 12; i++){
        printf("Digite o numero de questoes resolvidas pelo(a) aluno(a): ");
        scanf("%d", &nota[i]);
    }
    for(i = 0; i < 12; i++){
        for(j = i; j < 12; j++){
            if(nota[i] > nota[j]){
                aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;
            }
        }
    }
    valor = nota[11];
    quant = 0;
    i = 11;
    while(valor == nota[i]){
        quant++;
        i--;
    }
    printf("Primeiro lugar: %d (%d alunos)\n", valor, quant);
    valor = nota[i];
    quant = 0;
    while(valor == nota[i]){
        quant++;
        i--;
    }
    printf("Segundo lugar: %d (%d alunos)\n", valor, quant);
    return 0;
}