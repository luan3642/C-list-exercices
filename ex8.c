#include <stdio.h>

int main(){

    int numero = 0;
    printf("informe o mes em formato de numero: ");
    scanf("%d", &numero);

    switch(numero){
        case 1:
            printf("JANEIRO");
            break;
        case 2:
            printf("FEVEREIRO");
            break;
        case 3:
            printf("MARCO");
            break;
        case 4:
            printf("ABRIL");
            break;
        case 5:
            printf("MAIO");
            break;
        case 6:
            printf("JUNHO");
            break;
        case 7: 
            printf("JULHO");
            break;
        case 8:
            printf("AGOSTO");
            break;
          case 9:
            printf("SET.");
            break;
        case 10:
            printf("OUT.");
            break;
        case 11: 
            printf("NOV.");
            break;
        case 12:
            printf("DEZ.");
            break;
        default:
            printf("VALOR INVALIDO");
            break;
    }
    return 0;

}