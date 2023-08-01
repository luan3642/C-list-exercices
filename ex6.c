#include <stdio.h>

int main(){

    float area = 0;
    float perimetro = 0;

    float larguraMetros = 0;
    float larguraEmCentimetros = 0;

    printf("informe o lado do retangulo: ");
    scanf("%f", &larguraMetros);

    printf("informe o outro lado do retangulo: ");
    scanf("%f", &larguraEmCentimetros);

    area = larguraMetros * larguraEmCentimetros;

   
    perimetro = 2 * (larguraMetros + larguraEmCentimetros);

    printf("O perimetro é: %f \n", perimetro);
    printf("Area: %f ", area);
    return 0;

    
}