#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    if(a >= 0 && b >= 0){
        c = a;
        a = b;
        b = c;
    }
    printf("Valor de A: %d\nValor de B: %d\n", a, b);
    return 0;
}