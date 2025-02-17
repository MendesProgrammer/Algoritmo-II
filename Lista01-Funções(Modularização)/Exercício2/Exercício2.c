#include <stdio.h>
#include <stdlib.h>

int segundos(int hora, int minuto, int segundo);

int main(){
    int hora, minuto, segundo, resultado;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &hora);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minuto);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundo);
    resultado = segundos(hora, minuto, segundo);
    printf("%dh, %dmin e %dseg corresponde a %d segundos\n", hora, minuto, segundo, resultado);
    return 0;
}

int segundos(int hora, int minuto, int segundo){
    return ((hora * 3600) + (minuto * 60) + segundo);
}
