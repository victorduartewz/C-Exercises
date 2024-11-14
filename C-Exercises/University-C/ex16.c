//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 16

#include <stdio.h>

int main() {
    int opcao = 0;
    float temperatura, convertida;

    while (opcao != 4) {
        printf("\nMenu de Conversao de Temperatura:\n");
        printf("1  Converter de Celsius para Fahrenheit\n");
        printf("2  Converter de Celsius para Kelvin\n");
        printf("3  Converter de Fahrenheit para Celsius\n");
        printf("4  Sair\n");
        printf("Informe a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                convertida = (temperatura * 9 / 5) + 32;
                printf("A temperatura em Fahrenheit e: %.2f°F\n", convertida);
                break;

            case 2: 
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                convertida = temperatura + 273.15;
                printf("A temperatura em Kelvin e: %.2fK\n", convertida);
                break;

            case 3:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                convertida = (temperatura - 32) * 5 / 9;
                printf("A temperatura em Celsius e: %.2f°C\n", convertida);
                break;

            case 4:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opcao invalida. Por favor, escolha uma opcao de 1 a 4.\n");
        }
    }

    return 0;
}