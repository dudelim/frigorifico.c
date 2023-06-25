#include <stdio.h>

int main(void) {

  int idade_meses = 0, num_menu = 0, num_identificacao = 0, idade_pesado = 0,
      idade_leve = 0, ident_pesado = 0, ident_leve = 0, idade_velho = 0,
      idade_novo = 500, media_idade = 0, idade_total = 0, contador_animais = 0;
  double arroba = 0, total_arroba = 0, peso = 0, peso_total = 0,
         peso_pesado = 0, peso_leve = 500, peso_velho = 0, peso_novo = 0,
         preco_lote = 0, media_peso = 0;

  printf("Digite o valor da arroba: ");
  scanf("%lf", &arroba);

  while (num_menu != 4) {
    printf("\nMenu: \n1. Digite 1 para inserir dados ");
    printf("\n2. Digite 2 para finalizar lancamento ");
    printf("\n3. Digite 3 para reiniciar os valores inseridos ");
    printf("\n4. Digite 4 para sair \n");
    scanf("%d", &num_menu);

    if (num_menu == 1) {
      printf("Digite o numero de identificacao do animal: ");
      scanf("%d", &num_identificacao);
      printf("Digite o peso do animal (em quilos): ");
      scanf("%lf", &peso);
      printf("Digite a idade do animal (em meses): ");
      scanf("%d", &idade_meses);

      peso_total += peso;
      idade_total += idade_meses;

      if (peso > peso_pesado) {
        peso_pesado = peso;
        idade_pesado = idade_meses;
        ident_pesado = num_identificacao;
      }
      if (peso < peso_leve) {
        peso_leve = peso;
        idade_leve = idade_meses;
        ident_leve = num_identificacao;
      }
      if (idade_meses > idade_velho) {
        idade_velho = idade_meses;
        peso_velho = peso;
      }
      if (idade_meses < idade_novo) {
        idade_novo = idade_meses;
        peso_novo = peso;
      }

      contador_animais++;

    } else if (num_menu == 2) {

      media_peso = peso_total / contador_animais;
      media_idade = idade_total / contador_animais;
      total_arroba = (peso_total / 15) * arroba;

      printf("\nO total de peso dos animais: %g\n", peso_total);
      printf(
          "\nAnimal mais pesado \nIdentificacao: %d \nPeso: %g \nIdade: %d\n",
          ident_pesado, peso_pesado, idade_pesado);
      printf("\nAnimal mais leve \nIdentificacao: %d \nPeso: %g \nIdade: %d\n",
             ident_leve, peso_leve, idade_leve);
      printf("\nAnimal mais velho \nIdade: %d \nPeso: %g\n", idade_velho,
             peso_velho);
      printf("\nAnimal mais novo \nIdade: %d \nPeso: %g\n", idade_novo,
             peso_novo);
      printf("\nMedia de peso dos animais: %g", media_peso);
      printf("\nMedia de idade dos animais: %d\n", media_idade);
      printf("\nO preco total do lote: %g\n", total_arroba);
      break;

    } else if (num_menu == 3) {
      num_menu = 0;
      contador_animais = 0;
      peso = 0;
      peso_total = 0;
      peso_pesado = 0;
      peso_leve = 500;
      peso_velho = 0;
      peso_novo = 0;
      idade_total = 0;
      idade_pesado = 0;
      idade_leve = 0;
      idade_velho = 0;
      idade_novo = 500;
      media_peso = 0;
      media_idade = 0;
      ident_pesado = 0;
      ident_leve = 0;
      arroba = 0;

      printf("Digite o valor da arroba: ");
      scanf("%lf", &arroba);
    }
  }
}
