#include <stdio.h>

int main(){

    int numero = 0;

    printf("Informe se o numero e par ou impar: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("numero par");
    }else{
        printf("numero impar");
    }
    printf("\n");

    return 0;
}