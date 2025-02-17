#include <stdio.h>
#include <stdlib.h>

void NumeroPar(int *lista, int *numero){
    for(int i = 0; i < 15; i++){
        if(lista[i] % 2 == 0){
            *numero += 1;
        }
    }
}

int main(){
    int lis[15], par;
    par = 0;
    for(int i = 0; i < 15; i++){
        printf("Digite um numero: ");
        scanf("%d", &lis[i]);
    }
    NumeroPar(lis, &par);
    printf("O numero de valores pares e %d\n", par);
}
