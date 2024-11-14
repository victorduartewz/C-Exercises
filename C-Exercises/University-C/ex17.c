//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 17

#include <stdio.h>

int main() {
    int opcao = 0;
    float num1, num2, resultado;

    while (opcao != 5) {
        printf("\nMenu da Calculadora:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1: 
                resultado = num1 + num2;
                printf("O resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("O resultado da subtracao: %.2f\n", resultado);
                break;
            case 3: 
                if (num2 != 0) { 
                    resultado = num1 / num2;
                    printf("O resultado da divisao: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisao por zero nao e permitida\n");
                }
                break;
            case 4: 
                resultado = num1 * num2;
                printf("O resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 5: 
                printf("Encerrando o programa.\n");
                break;
            default: 
                printf("Opcao invalida. Por favor, escolha uma opcao de 1 a 5.\n");
        }
    }

    return 0;
}