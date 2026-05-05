#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades da Carta 1
  char estado1[10];
  char codigo1[10];
  char cidade1[20];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidade1;
  float pib_per1;
  float superpoder1;


  // Área para definição das variáveis para armazenar as propriedades das cidades da Carta 2
  char estado2[10];
  char codigo2[10];
  char cidade2[20];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float pib_per2;
  float superpoder2;
  

  // Área para entrada de dados da Carta 1
  printf("Digite os dados da Carta 1!\n\n");
  
  printf("Estado: ");
  scanf("%s", estado1);

  printf("Código: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf("%s", cidade1);

  printf("População: ");
  scanf("%ld", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos1);

  printf("Densidade Populacional: ");
  scanf("%f", &densidade1);

  printf("PIB per Capita: ");
  scanf("%f", &pib_per1);

  printf("\n");


  // Calculando Densidade Populacional e PIB per Capita
  densidade1 = (float) populacao1 / area1;
  pib_per1 = pib_per1 / (float) populacao1;

  // Calculando o Super Poder da Carta 1
  superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + (1.0 / densidade1) + pib_per1;


  // Área para entrada de dados da Carta 2
  printf("Digite os dados da Carta 2!\n\n");
  
  printf("Estado: ");
  scanf("%s", estado2);

  printf("Código: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf("%s", cidade2);

  printf("População: ");
  scanf("%lu", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos2);

  printf("Densidade Populacional: ");
  scanf("%f", &densidade2);

  printf("PIB per Capita: ");
  scanf("%f", &pib_per2);

  // Calculando Densidade Populacional e PIB per Capita
  densidade2 = (float) populacao2 / area2;
  pib_per2 = pib_per2 / (float) populacao2;

  // Calculando o Super Poder da Carta 2
  superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + (1.0 / densidade2) + pib_per2;

   
  // Área para exibição dos dados da cidade da Carta 1
  printf("\n");
  printf ("Carta 1:\n\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %ld\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_per1);
  printf("Super Poder: %f\n\n", superpoder1);


  // Área para exibição dos dados da Carta 2
  printf("\n");
  printf ("Carta 2:\n\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %ld\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per2);
  printf("Super Poder: %f\n\n", superpoder2);


  // Comparação entre as Cartas
  // Regras: Maior valor vence, exceto densidade populacional (menor vence).
  int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoPontos, resultadoDensidade, resultadoPIBPer, resultadoSuper;

  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPIB = pib1 > pib2;
  resultadoPontos = pontos1 > pontos2;
  resultadoDensidade = densidade1 < densidade2;
  resultadoPIBPer = pib_per1 > pib_per2;
  resultadoSuper = superpoder1 > superpoder2;
  

  // Resultado Comparações
  // OBS: Se o resultado for = 1 -> Carta 1 venceu, se o resultado for = 0 -> Carta 2 venceu.
  printf("População: Carta %d venceu (%d)\n", 2 - resultadoPopulacao, resultadoPopulacao);
  printf("Área: Carta %d venceu (%d)\n", 2 - resultadoArea, resultadoArea);
  printf("PIB: Carta %d venceu (%d)\n", 2 - resultadoPIB, resultadoPIB);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - resultadoPontos, resultadoPontos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resultadoDensidade, resultadoDensidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultadoPIBPer, resultadoPIBPer);
  printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultadoSuper, resultadoSuper);


return 0;

} 
