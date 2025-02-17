#include <stdio.h>
#include <stdlib.h>

void cal(int *a, int *b, int *c){

    int primo = 0;
    int num = 100, cont=0, i;
    do{
        cont=0;
        for(i = 2;  i < num; i++){
            if(num % i == 0){
                cont++;
            }
        }
        if(cont==0){
            primo++;
            if(primo==1){
                *a=num;
            }else{
                if(primo==2){
                    *b=num;
                }else{
                    if(primo==3){
                        *c=num;
                    }
                }
            }
        }
        
        num++;
    }while(primo<3);
}

int main(){
    int a, b, c;
    cal(&a, &b, &c);
    printf("Os tres primeiros primos acima de 100 sao %d, %d e %d\n", a, b, c);
    return 0;
}
