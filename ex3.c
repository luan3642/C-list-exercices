#include <stdio.h>

int main(){

    int num = 0;
    int num2 = 0;

    printf("informe um numero\n");
    scanf("%d", &num);

    printf("informe outro numero\n");
    scanf("%d", &num2);

    if(num2 == 0){
        printf("Erro: Divisão por zero é indefinida.\n");
        return 1; // retorna erro
    }

    int soma = num + num2;
    int divisao = num / num2;
    int mult = num * num2;
    int subtracao = num - num2;

    printf("SOMA: %d\n", soma);
    printf("MULT: %d\n", mult);
    printf("SUB: %d\n", subtracao);
    printf("DIV: %d\n", divisao);

    return 0;
}
