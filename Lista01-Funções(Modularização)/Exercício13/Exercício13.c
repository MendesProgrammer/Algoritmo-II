#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define maximo 3

struct pessoa{
    int idade;
    char sexo;
    double salario;
    int numeroFilho;
};

void PreencherDados(struct pessoa *pes){
    for(int i = 0; i < maximo; i++){
        printf("Digite a idade: ");
        scanf("%d", &pes[i].idade);

        printf("Informe o sexo: ");
        fflush(stdin);
        scanf("%c", &pes[i].sexo);

        printf("Informe o salario: ");
        scanf("%lf", &pes[i].salario);

        printf("Informe o numero de filhos: ");
        scanf("%d", &pes[i].numeroFilho);
    }
}

double MediaSalario(struct pessoa *pes){
    double soma, media;
    for(int i = 0; i < maximo; i++){
        soma += pes[i].salario;
    }
    media = soma / 15;
    return media;
}

void MaiorMenorIdade(struct pessoa *pes, int *maior, int *menor){
    for(int i = 0; i < maximo; i++){
        if(i == 0){
            *maior = pes[i].idade;
            *menor = pes[i].idade;
        } else {
            if(pes[i].idade > *maior){
                *maior = pes[i].idade;
            } else {
                if (pes[i].idade < *menor){
                    *menor = pes[i].idade;
                }
            }
        }
    }
}

int NumMulher(struct pessoa *pes){
    int soma;
    soma = 0;
    for(int i = 0; i < maximo; i++){
        if(tolower(pes[i].sexo) == 'f'){
            if (pes[i].numeroFilho == 3){
                if (pes[i].salario <= 500){
                    soma++;
                }
            }
        }
    }
    return soma;
}

int main(){
    struct pessoa p[maximo];
    int maior, menor, quant;
    double media;
    PreencherDados(p);

    media = MediaSalario(p);
    printf("A media de salarios e: %.2lf\n", media);

    MaiorMenorIdade(p, &maior, &menor);
    printf("A maior idade e %d e a menor e %d\n", maior, menor);

    quant = NumMulher(p);
    printf("O numero de mulheres que tem tres filhos e ganham ate 500: %d\n", quant);
    return 0;
}
