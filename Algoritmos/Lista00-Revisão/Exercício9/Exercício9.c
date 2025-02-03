#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[21];
    int idade;
    float altura;
    printf("Digite o nome:");
    fflush(stdin);
    gets(nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Nome: %s\nIdade: %d\nAltura: %f\n", nome, idade, altura);
    return 0;
}
