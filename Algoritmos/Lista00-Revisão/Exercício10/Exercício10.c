#include <stdio.h>
#include <stdlib.h>

int main(){
    double divisao;
    int opcao, num1, num2, resultado;
    do{
        printf(" 1) Adicao\n");
        printf(" 2) Subtracao\n");
        printf(" 3) Multiplicacao\n");
        printf(" 4) Divisao\n");
        printf(" 5) Resto da divisao\n");
        printf(" 0) Sair\n");
        printf("Selecione uma opcao: ");
        scanf("%d", &opcao);
        if(opcao >= 1 && opcao <= 5){
            printf("Digite um numero: ");
            scanf("%d", &num1);
            printf("Digite outro: ");
            scanf("%d", &num2);
        }
        switch(opcao){
            case 1:
                resultado = num1 + num2;
                printf("A soma entre %d e %d e igual a %d\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("A subtracao entre %d e %d e igual a %d\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("O produto entre %d e %d e igual a %d\n", num1, num2, resultado);
                break;
            case 4:
                divisao = num1 / num2;
                printf("A divisao entre %d e %d e igual e %lf\n", num1, num2, divisao);
                break;
            case 5:
                resultado = num1 % num2;
                printf("O resto da divisao entre %d e %d e igual a %d\n", num1, num2, resultado);
                break;
            case 0:
                printf("Finalizando programa");
                break;
            default:
                printf("Opcao invalida, tente novamente\n");
                break;
        }
    } while(opcao != 0);
    return 0;
}
