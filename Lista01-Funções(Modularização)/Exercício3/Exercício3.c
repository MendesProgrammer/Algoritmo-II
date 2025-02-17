#include <stdio.h>
#include <stdlib.h>

int divisor(int a, int b);

int main(){
    int n1, n2, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    resultado = divisor(n1, n2);
    printf("O resultado obtido e %d\n", resultado);
    return 0;
}

int divisor(int a, int b){
    int c = b;
    if((a % b) == 0)
        return 0;
    else {
        do{
            b++;
            c--;
        } while((a % b) != 0 && (a % c) != 0);
        if((a % b) == 0)
            return b;
        else
            return c;
    }
}
