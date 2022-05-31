#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMedia;

    printf("Insira os dados da primeira pessoa: ");
    
    printf("\nNome: ");
    gets(nome1);
    
    printf("\nIdade: ");
    scanf("%d", &idade1);


    printf("Insira os dados da segunda pessoa: ");
    
    printf("\nNome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    
    printf("\nIdade: ");
    scanf("%d", &idade2);

    idadeMedia = (double) (idade1 + idade2) / 2;

    printf("A idade media de %s e %s e de %.1lf ", nome1, nome2, idadeMedia); 


}