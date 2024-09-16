#include <stdio.h>

int main()
{
  int numero;

  // Ele recolhe a informação e o while é para deixar o loop rodando
  while (1) {
    printf("Digite seu número (Caso queira encerrar, digite 0):\n");
    scanf("%d", &numero);

    // Identifica se o número é 0 e encerra o programa
    if (numero == 0) {
      printf("Programa encerrado\n");
      break;
    }

    if (numero > 0) {
      printf("O número %d é positivo!\n", numero);
    } else {
      printf("O número %d é negativo\n", numero);
    }
  }

  return 0;
}
