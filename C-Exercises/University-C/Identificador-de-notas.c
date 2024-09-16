#include <stdio.h>

int main()
{
  int nota;

  printf("Digite a nota:\n");
  scanf("%d", &nota);

  if (nota >=8)
  {
    printf("Sua nota é A\n");
  }

  else if (nota < 8 && nota >= 6){
    printf("Sua nota é B\n");
  }

  else if (nota < 6 && nota >= 3){
    printf("Sua nota é C\n");
  }

  else if (nota < 3){
    printf("Sua nota é D\n");
  }

  else{
    printf("Nota incorreta");
  }

  return 0;
}
