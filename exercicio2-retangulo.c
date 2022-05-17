#include <stdio.h>
#include <math.h>

/*
Problema "retangulo"
Algoritmo para ler as medidas da base e altura de um retângulo
e retornar area, perimetro e diagonal.
*/

int main() {
    
    double base, altura, area, perimetro, diagonal;

    printf("==== Olá, Bem vindo ====\n");

    printf("Qual a base do retangulo: ");
    scanf("%lf", &base);
    
    printf("Qual altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2*(altura + base);
    diagonal = sqrt(base * base + altura * altura);

    printf("\n===================\n");
    printf("AREA: %.2lf\n", area);
    printf("PERIMERTO: %.2lf\n", perimetro);
    printf("DIAFGONAL: %.2lf\n", diagonal);
    printf("\n===================\n");

    return 0;
}