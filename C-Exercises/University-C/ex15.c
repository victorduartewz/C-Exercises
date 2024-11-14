//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 15

#include <stdio.h>

int main() {
    int num, fatorial = 1, i = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Numero invalido. Por favor, insira um numero nao negativo.\n");
        return 1; 
    }

    while (i <= num) {
        fatorial *= i;  
        i++;        
    }

    printf("O fatorial de %d e: %d\n", num, fatorial);

    return 0;
}