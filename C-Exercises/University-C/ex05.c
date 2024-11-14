//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 5

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d\n", i);
        if (i % 10 == 0) {
            printf("O numero %d eh multiplo de 10\n", i);
        }
    }
    return 0;
}
