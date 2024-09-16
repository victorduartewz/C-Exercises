#include <stdio.h>

int main()
{
    char nome[50];
    printf("Digite seu nome:");
    fgets (nome, sizeof(nome), stdin);
    
    printf("Seu nome é %s\n", nome);

    return 0;
}
