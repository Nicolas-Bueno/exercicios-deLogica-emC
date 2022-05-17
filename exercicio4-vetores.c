#include <stdio.h>

/*
 Algoritmo para receber N numeros, guardar no vetor
 e retornar a soma e média.
*/
int main(){
    int n;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

	soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + vetor[i];
    }

    media = soma / n;

    printf("\n====================\n");

	printf("VALORES = ");

    for (int i = 0; i < n; i++) {
        printf("%.1lf  ", vetor[i]);
    }

    printf("\nSOMA = %.2lf\n", soma);
	printf("MEDIA = %.2lf\n", media);

    printf("\n====================\n");
    return 0;
}