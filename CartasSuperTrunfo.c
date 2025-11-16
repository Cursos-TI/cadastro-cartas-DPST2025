#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis para carta 1
  char estado1;
  char codigo1[4];
  char cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int npt1;

  //Variáveis para carta 2
  char estado2;
  char codigo2[4];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  float npt2;
    
  // Área para entrada de dados
  
  // Entrada de informação da CARTA 1
  printf ("Carta 1: \n");
 
  printf ("Didite o Estado: ");
  scanf("%c", estado1);

  printf("Digite o Código: ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  fgets(cidade1, sizeof(cidade1), stdin);

  printf("Digite numero de População: ");
  scanf("%d", populacao1);

  printf("Digite o Tamanho de Área em Km2: ");
  scanf("%f", area1);

  printf("Digite o PIB da Cidade: ");
  scanf("%f", pib1);

  printf("Digite o Número de Pontos Turisticos: ");
  scanf("%d", npt1);

  // Entrada de informação da CARTA 2

  printf ("Carta 2: \n");

  prinf("Digite o Estado: ");
  scanf("%c", estado2);

  print("Digite o Código: ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin);

  printf("Digite numero de População: ");
  scanf("%d", populacao2);

  printf("Digite o Tamanho de Área em Km2: ");
  scanf("%f", area2);

  printf("Digite o PIB da Cidade: ");
  scanf("%f", pib2);

  printf("Digite o Número de Pontos Turisticos: ");
  scanf("%d", npt2);




  

  // Área para exibição dos dados da cidade

return 0;
} 
