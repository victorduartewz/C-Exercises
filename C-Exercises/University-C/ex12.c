//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 12

#include <stdio.h>

int main() {

    int num, menorNum, maiorNum, primeiraEntrada = 1; 
    
    while (1) {
        printf("Insira um numero inteiro (0 para parar): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (primeiraEntrada) {

            menorNum = num;
            maiorNum = num;
            primeiraEntrada = 0;
        } else {

            if (num < menorNum) {
                menorNum = num;
            }
            if (num > maiorNum) {
                maiorNum = num;
            }
        }
    }
    
    if (!primeiraEntrada) {
        printf("O menor numero e: %d\n", menorNum);
        printf("O maior numero e: %d\n", maiorNum);
    } else {
        printf("Nenhum numero valido foi inserido.\n");
    };
    
    return 0;
}