#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // CARTA 2 
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
  
  // Área para entrada de dados

    // ===== ENTRADA CARTA 1 =====
    printf("Cadastro da Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta, utilizando a letra escolhida seguida de um número de 01 a 04 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (produto interno bruto) da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos1);

    printf("\n");

    // ===== ENTRADA CARTA 2 =====
    printf("Cadastro da Carta 2\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, utilizando a letra escolhida seguida de um número de 01 a 04 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (produto interno bruto) da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontos2);
 
   // Área para exibição dos dados da cidade

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);



return 0;
} 
