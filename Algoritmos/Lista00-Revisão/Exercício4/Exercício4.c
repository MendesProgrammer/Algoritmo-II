#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[12], aux, i, j;
    for(i = 0; i < 12; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 12; i++){
        for(j = i; j < 12; j++){
            if(vet[i] > vet[j]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
    printf("O primeiro maior valor e: %d\n", vet[11]);
    printf("O segundo maior valor e: %d\n", vet[10]);
    return 0;
}
