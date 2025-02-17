#include <stdio.h>
#include <stdlib.h>

int Mdc(int a, int b){
    int div, mdc;
    mdc = 1;
    div = 1;
    while(div < a || div < b){
        if(a % div == 0 && b % div == 0){
            mdc = div;
        }
        div++;
    }
    return mdc;
}

int main(){
    int a, b, c;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro: ");
    scanf("%d", &b);

    c = Mdc(a, b);
    printf("O maximo divisor comum entre %d e %d e %d\n", a, b, c);
    return 0;
}
