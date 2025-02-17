#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double PesoIdeal(double altura, char sexo);

int main(){
    double alt, peso;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%lf", &alt);
    printf("Digite o sexo: ");
    fflush(stdin);
    scanf("%c", &sexo);
    peso = PesoIdeal(alt, sexo);
    printf("O seu peso ideal e %.2lf\n", peso);
    return 0;
}

double PesoIdeal(double altura, char sexo){
    if (tolower(sexo) == 'f') {
        return (62.1 * altura - 44.7);
    } else {
        if (tolower(sexo) == 'm') {
            return (72.2 * altura - 58);
        } else {
            return 0.0;
        }
    }
}
