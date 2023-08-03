#include <stdio.h>


// escreva um programa que seja otimizado e substituia o switch em termos de performance
int main(){
  
  int num = 0;
  char* meses[] = {"VALOR INVALIDO", "JAN", "FEV", "MAR", "ABRIL", "MAIO", "JUN",
                    "JULHO", "AGOSTO", "SET", "OUT", "NOV", "DEZ" };


  printf("digite o mes valor");
  scanf("%d", &num);

  if(num < 1 || num > 12) num = 0;

  printf("%s", meses[num]);


  return 0;
 
}