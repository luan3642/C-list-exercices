#include <stdio.h>

int main(){

    int num = 0;
    int num2 = 0;

    printf("informe um numero");
    scanf("%d", &num);

    printf("informe outro numero");
    scanf("%d", &num2);

    int soma = num + num2;
    int divisao = num / num2;
    int mult = num * num2;
    int subtrcao = num - num2;

    printf("SOMA: %d \n", soma);
    printf("MULT %d \n", mult);
    printf("SUB %d \n", subtrcao);
    printf("Div  %d \n", divisao);

    return 0;
}