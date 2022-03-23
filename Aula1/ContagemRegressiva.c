#include <stdio.h>

int main(){
//Decrementa o numero escolhido até 0;
    int i = 1;
    scanf("%d", &i);

    while(i != 0){
        printf("contagem regressiva: %d\n", i);
        i -= 1;
    }

    return 0;

}
