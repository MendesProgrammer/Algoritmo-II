#include <stdio.h>
#include <stdlib.h>

int main(){
    int vez, num, maior;
    vez = 0;
    while (vez < 6){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(vez == 0)
            maior = num;
        else
            if (num > maior)
                maior = num; 

        vez++;   
    }
    printf("O maior valor digitado foi %d\n", maior);
    return 0;
}
