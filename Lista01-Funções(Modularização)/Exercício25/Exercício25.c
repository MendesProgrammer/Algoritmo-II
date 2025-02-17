#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    double nota[5];
} alunos;

void MediaAluno(alunos *pes, double *media){
    double soma;
    soma = 0.0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 4; j++){
            soma += pes[i].nota[j];
        }
        media[i] = soma / 4.0;
        soma = 0.0;
    }
}

int Recupera(alunos *pes, double *vet1, int *vet2){
    int qt;
    qt = 0;
    for(int i = 0; i < 10; i++){
        if(vet1[i] < 60){
            vet2[qt] = pes[i].numero;
            qt++;
        }
    }
    return qt;
}

int main(){
    alunos pes[11];
    double media[11];
    int quant, recupera[11];
    for(int i = 0; i < 10; i++){
        printf("Digite o numero do aluno: ");
        scanf("%d", &pes[i].numero);
        for(int j = 0; j < 4; j++){
            printf("Digite a %d nota: ", j+1);
            scanf("%lf", &pes[i].nota[j]);
        }
    }

    MediaAluno(pes, media);
    for(int i = 0; i < 10; i++){
        printf("Aluno %d - Media = %.2lf\n", pes[i].numero, media[i]);
    }
    quant = Recupera(pes, media, recupera);

    printf("\nAlunos de recuperacao\n");
    for(int i = 0; i < quant; i++){
        printf("Aluno %d\n", recupera[i]);
    }
    return 0;
}
