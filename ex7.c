#include <stdio.h>

int main() {
    float indice;

    printf("Informe o indice de poluicao: ");
    scanf("%f", &indice);

    if (indice >= 0.5f) {
        printf("Todos os grupos devem paralisar suas atividades\n");
    } else if (indice >= 0.4f) {
        printf("Empresas do grupo 1 e 2 suspendam suas atividades\n");
    } else if (indice >= 0.3f) {
        printf("Empresas do grupo 1, suspenda suas atividades\n");
    } else {
        printf("Nenhuma acao necessaria\n");
    }

    return 0;
}
