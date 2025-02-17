#include <stdio.h>
#include <stdlib.h>

void CriarVetor(int *a, int *b, int *c){
    int sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] > 0){
            b[sum1] = a[i];
            sum1++;
        } else {
            c[sum2] = a[i];
            sum2++;
        }
    }
}

int main(){
    int vet1[10], vet2[10], vet3[10];
    CriarVetor(vet1, vet2, vet3);

    for(int i = 0; i < 10; i++)
        printf("A = %d\n", vet2[i]);

    for(int i = 0; i < 10; i++)
        printf("B = %d\n", vet3[i]);

    return 0;
}
