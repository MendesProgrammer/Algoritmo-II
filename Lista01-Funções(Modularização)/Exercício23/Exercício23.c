#include <stdio.h>
#include <stdlib.h>

int Formar(int a, int b, int c){
    int valor = 0;
    if(a < b+c){
        if(b < a+c){
            if(c < a+b)
                valor = 1;
        }
    }
    return valor;
}

int Tipo(int a, int b, int c){
    int tip;
    if(a == b && b == c && c == a){
        tip = 1;
    } else {
        if(a != b && b != c && c != a){
            tip = 2;
        } else {
            tip = 3;
        }
    }
    return tip;
}

int main(){
    int a, b, c, forma, tipo;

    do{
        printf("Digite o lado A: ");
        scanf("%d", &a);
    } while(a < 1);

    do{
        printf("Digite o lado B: ");
        scanf("%d", &b);
    } while(b < 1);

    do{
        printf("Digite o lado C: ");
        scanf("%d", &c);
    } while(c < 1);

    forma = Formar(a, b, c);
    if(forma){
        tipo = Tipo(a, b, c);
        printf("Pode formar um triangulo: ");
        if(tipo == 1){
            printf("Equilatero\n");
        } else {
            if(tipo == 2){
                printf("Escaleno\n");
            } else {
                if(tipo == 3){
                    printf("Isoceles\n");
                }
            }
        }
    } else {
        printf("Nao pode formar um triangulo\n");
    }

    return 0;
}
