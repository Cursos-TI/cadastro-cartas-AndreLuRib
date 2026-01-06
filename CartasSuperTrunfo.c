#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  // Estado em que a cidade está localizada
  char estado1, estado2;
  // Código da carta: A letra do estado, seguida de um número
  char codigo1, codigo2[3];
  // Nome da cidade
  char nome1, nome2[50];
  // Número de habitantes da cidade
  int populacao1, populacao2;
  // Área da cidade em Km²
  float area1, area2;
  // O produto interno bruto da cidade
  float pib1, pib2;
  // Número de pontos turísticos da cidade
  int pontos1,  pontos2;

  // Área para entrada de dados

  printf("Carta 1:");
  printf("Digite uma letra de 'A' a 'H' para representar o Estado: \n");
  scanf("%s", &estado1);

  printf("Digite o código da carta: (Utilize a letra do estado seguida de um  \n número de 01 a 04): \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome1);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao1);

  printf("DIgite a área da cidade em quilômetros quadrados (utilize apenas ponto): \n");
  scanf("%f", &area1);

  printf("DIgite o PIB (produto interno bruto) da cidade: \n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontos1);

  printf("Carta 2: \n Digite uma letra de 'A' a 'H' para representar o Estado: \n");
  scanf("%s",&estado2);

  printf("Digite o código da carta: (Utilize a letra do estado seguida de um  \n número de 01 a 04): \n");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome2);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao2);

  printf("DIgite a área da cidade em quilômetros quadrados (utilize apenas ponto): \n");
  scanf("%f", &area2);

  printf("DIgite o PIB (produto interno bruto) da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade

  printf("Carta 1: \n Estado: %s", estado1);
  printf("Código: %s", codigo1);
  printf("Nome da Cidade: %s", nome1);
  printf("População: %f", populacao1);
  printf("Área: %f", area1);
  printf("PIB: %f", pib1);
  printf("Número de pontos turísticos: %d", pontos1);

  printf("Carta 2: \n Estado: %s", estado2);
  printf("Código: %s", codigo2);
  printf("Nome da Cidade: %s", nome2);
  printf("População: %f", populacao2);
  printf("Área: %f", area2);
  printf("PIB: %f", pib2);
  printf("Número de pontos turísticos: %d", pontos2);

return 0;
} 
