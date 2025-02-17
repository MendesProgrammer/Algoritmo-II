#include <stdio.h>
#include <stdlib.h>

int Resultante(int *vetor1, int *vetor2, int *vetor3){
    int numero, i, cont, aux;
    numero = 0;
    for(i = 0; i < 10; i++){
        if(i == 0){
            vetor3[i] = vetor1[i];
            numero++;
            
        } else {
            cont = 0;
            for(int j = 0; j < i; j++){
                if(vetor1[i] == vetor3[j]){
                    cont++;
                }
            }
            if (cont == 0){
                vetor3[numero] = vetor1[i];
                numero++;
            }
        }
    }

    for(i = 10; i < 20; i++){
        cont = 0;
        for(int j = 0; j < i; j++){
            if(vetor2[i-10] == vetor3[j]){
                cont++;
            }
        }
        if (cont == 0){
            vetor3[numero] = vetor2[i-10];
            numero++;
        }
    }

    for(int g = 0; g < numero; g++){
        for(int h = 0; h < numero-1; h++){
            if(vetor3[h] > vetor3[g]){
                aux = vetor3[g];
                vetor3[g] = vetor3[h];
                vetor3[h] = aux;
            }
        }
    }
    return numero;
}

int main(){
    int num, vet1[10], vet2[10], vet3[21];
    for(int i = 0; i < 10; i++){
        printf("Digite um numero para o primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Digite um numero para o segundo vetor: ");
        scanf("%d", &vet2[i]);
    }

    num = Resultante(vet1, vet2, vet3);

    // Vetor A
    printf("Vetor A: [ ");
    for(int i = 0; i < 8; i++){
        printf("%d - ", vet1[i]);
    }
    printf(" %d ]\n", vet1[9]);

    // ================================
    // Vetor B
    printf("Vetor B: [ ");
    for(int i = 0; i < 8; i++){
        printf("%d - ", vet2[i]);
    }
    printf(" %d ]\n", vet2[9]);

    // ===============================
    // Vetor C
    printf("Vetor C: [ ");
    for(int i = 0; i < num-1; i++){
        printf("%d - ", vet3[i]);
    }
    printf(" %d ]\n", vet3[num-1]);
    return 0;
}
