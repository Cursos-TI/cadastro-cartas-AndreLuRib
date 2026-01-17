#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    // CARTA 1

    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // CARTA 2 

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // Variáveis para comparação entre as cartas

    int populacao, area, pib, pontos, densidade, pib_per_capita, super_poder;

  // Área para entrada de dados

    // ===== ENTRADA CARTA 1 =====
    printf("Cadastro da Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta, utilizando a letra escolhida seguida de um número de 01 a 04 (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (produto interno bruto) da cidade em bilhões de reais:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + 1 / densidade1;

    printf("\n");

    // ===== ENTRADA CARTA 2 =====
    printf("Cadastro da Carta 2\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, utilizando a letra escolhida seguida de um número de 01 a 04 (ex: B02):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %ld", &populacao2);

    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area2);

    printf("Digite o PIB (produto interno bruto) da cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + 1 / densidade2;


 
   // Área para exibição dos dados da cidade

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %ld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f \n", pib_per_capita1);
    printf("O super poder da cidade é: %.2f \n", super_poder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f \n", pib_per_capita2);
    printf("O super poder da cidade é: %.2f \n", super_poder2);

    // Área para comparação entre as cartas

    populacao = populacao1 > populacao2;
    area = area1 > area2;
    pib = pib1 > pib2;
    pontos = pontos1 > pontos2;
    densidade = densidade1 < densidade2;
    pib_per_capita = pib_per_capita1 > pib_per_capita2;
    super_poder = super_poder1 > super_poder2;

    // Área para exibição da comparação entre as cartas

    printf("\n===== COMPARAÇÃO ENTRE AS CARTAS =====\n");
    printf("População: Carta 1 venceu? %d\n", populacao);
    printf("Área: Carta 1 venceu? %d\n", area);
    printf("PIB: Carta 1 venceu? %d\n", pib);
    printf("Número de pontos turísticos: Carta 1 venceu? %d\n", pontos);
    printf("Densidade populacional: Carta 1 venceu? %d\n", densidade);
    printf("PIB per capita: Carta 1 venceu? %d\n", pib_per_capita);
    printf("Super poder: Carta 1 venceu? %d\n", super_poder);
   
    // Comparação utilizando estrutura IF e ELSE  
   
    printf("\n Comparação do atributo área em km²: \n");

    if(area1 > area2) {
      printf("Carta 1 venceu com área de %.2f km²\n", area1);      
    } else{
      printf("Carta 2 venceu com área de %.2f km²\n", area2);
    }
    // Fim do programa




return 0;
} 
