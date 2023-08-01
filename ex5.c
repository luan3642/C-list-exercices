#include <stdio.h>

int main(){

    int numero = 0;
    printf("Informe o numero que deseja saber da tabuada: ");
    scanf("%d", &numero);

    printf("");

    for(int x = 1; x<=10; x++){
        printf("%d X %d = %d\n", numero, x, numero*x);
    }

    return 0;
}