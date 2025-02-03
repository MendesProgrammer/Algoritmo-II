#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, razao, vet[10], i;
    printf("Digite o numero inicial: ");
    scanf("%d", &num);
    printf("Digite a razao da P.A: ");
    scanf("%d", &razao);
    vet[0] = num;
    for(i = 0; i < 9; i++)
        vet[i+1] = vet[i] + razao;
    for(i = 0; i < 10; i++)
        printf("Termo %d : %d\n", i+1, vet[i]);
    return 0;
}
