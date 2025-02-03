#include <stdio.h>
#include <stdlib.h>

int main(){
    double num[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite um numero decimal: ");
        scanf("%lf", &num[i]);
    }
    for(i = 0; i < 5; i++)
        printf("Numero %d : %.3lf\n", i+1, num[i]);
    return 0;
}
