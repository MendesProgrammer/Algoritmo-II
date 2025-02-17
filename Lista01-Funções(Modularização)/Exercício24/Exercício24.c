#include <stdio.h>
#include <stdlib.h>

void Temperatura(double *temp, int *maior, int *menor){
    for(int i = 0; i < 12; i++){
        if(i == 0){
            *maior = 0;
            *menor = 0;
        } else {
            if(temp[i] < temp[*menor]){
                *menor = i;
            } else {
                if(temp[i] > temp[*maior]){
                    *maior = i;
                }
            }
        }
    }
}

int main(){
    double mes[13];
    int menorInd, maiorInd;
    char meses[13][40] = {{"janeiro"}, {"fevereiro"}, {"marco"}, {"abril"},
    {"maio"}, {"junho"}, {"julho"}, {"agosto"}, {"setembro"}, {"outubro"}, {"novembro"}, {"dezembro"}};
    for(int i = 0; i < 12; i++){
        printf("Digite a temperatura do mes %d: ", i+1);
        scanf("%lf", &mes[i]);
    }

    Temperatura(mes, &maiorInd, &menorInd);
    printf("O mes com a maior temperatura foi %s com %.2lf\n", meses[maiorInd], mes[maiorInd]);
    printf("O mes com a menor temperatura foi %s com %.2f\n", meses[menorInd], mes[menorInd]);
    return 0;
}
