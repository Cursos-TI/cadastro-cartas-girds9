#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[10];
  char codigo[10];
  char cidade[20];
  int populacao;
  float area;
  float pib;
  int pontos;

  // Área para entrada de dados
  printf("Digite os dados da Carta 1!\n\n");
  
  printf("Estado: ");
  scanf("%s", estado);

  printf("Código: ");
  scanf("%s", codigo);

  printf("Nome da Cidade: ");
  scanf("%s", cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos);
   
  // Área para exibição dos dados da cidade
  printf("\n");
  printf ("Carta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n\n", pontos);


  // Área para entrada de dados da Carta 2
  printf("Digite os dados da Carta 2!\n\n");
  
  printf("Estado: ");
  scanf("%s", estado);

  printf("Código: ");
  scanf("%s", codigo);

  printf("Nome da Cidade: ");
  scanf("%s", cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos);

  // Área para exibição dos dados da Carta 2
  printf("\n");
  printf ("Carta 2:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontos);

return 0;
} 
