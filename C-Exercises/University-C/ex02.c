//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 2

#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
        }
    }
    printf("Soma dos numeros impares multiplos de 3 entre 1 e 500: %d\n", soma);
    return 0;
}
