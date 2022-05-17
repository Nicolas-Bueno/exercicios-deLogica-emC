#include <stdio.h>

/*
Problema "terreno"
Algoritmo para ler medidas da largura e compimento de um
terreno retangular
*/

int main() {
    
    double largura, comprimento, valorM, area, preco;

    printf("==== Olá, Bem vindo ====\n");

    printf("Informe a largura do terreno: ");
    scanf("%lf", &largura);

    printf("\nInforme o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("\nInforme o valor do metro quadrado do terreno: ");
    scanf("%lf", &valorM);

    area = largura * comprimento;
    preco = valorM * area;

    printf("\n======================\n");

    printf("A area do terreno é %.2lf\n",area);

    printf("O valor do terreno é R$%.2lf\n",preco);

    printf("\n======================\n");

      return 0;
}