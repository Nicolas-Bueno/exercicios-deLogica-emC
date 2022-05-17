#include <stdio.h>
#include <string.h>


// Ler o texto
void ler_texto (char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer,"\n");
}


/*
Problema "pagamento"
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). 
*/

int main () {

    char nome[50];
    char opcao;
    double valor, pagamento;
    int horas;

    printf("==== Olá, Bem vindo ====\n");

      printf("Informe o nome do funcionario: ");
        ler_texto(nome, 50);

        printf("Informe o valor por hora: ");
        scanf("%lf", &valor);

        printf("Quantidade de horas trabalhadas: ");
        scanf("%d", &horas);

        pagamento = valor * horas;

        printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);
    
    return 0;
}