#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    int escolha;

    // CARTA 1 

    char pais1[50]= "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1839758.0;
    int pontos1 = 150;
    float densidade1;
   
    // CARTA 2

    char pais2[50] = "Argentina";
    int populacao2 = 45195777;
    float area2 = 2780400.0;
    float pib2 = 449663.0;
    int pontos2 = 100;
    float densidade2;

    // Informações da Carta 1
    printf("Carta 1 - País: %s\n", pais1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de USD\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    densidade1 = populacao1 / area1;
    printf("A densidade populacional do país é: %.2f habitantes por km²\n", densidade1);
    printf("\n");

    // Informações da Carta 2
    printf("Carta 2 - País: %s\n", pais2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de USD\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    densidade2 = populacao2 / area2;
    printf("A densidade populacional do país é: %.2f habitantes por km²\n", densidade2);
    printf("\n");

    // Menu de categorias para comparação

    printf("Escolha uma categoria para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    scanf(" %d", &escolha);

    switch (escolha) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A Carta 1 (%s) vence na categoria População!\n", pais1);
            } else if (populacao1 < populacao2) {
                printf("A Carta 2 (%s) vence na categoria População!\n", pais2);
            } else {
                printf("Empate na categoria População!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A Carta 1 (%s) vence na categoria Área!\n", pais1);
            } else if (area1 < area2) {
                printf("A Carta 2 (%s) vence na categoria Área!\n", pais2);
            } else {
                printf("Empate na categoria Área!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("A Carta 1 (%s) vence na categoria PIB!\n", pais1);
            } else if (pib1 < pib2) {
                printf("A Carta 2 (%s) vence na categoria PIB!\n", pais2);
            } else {
                printf("Empate na categoria PIB!\n");
            }
            break;
        case 4:
            if (pontos1 > pontos2) {
                printf("A Carta 1 (%s) vence na categoria Pontos Turísticos!\n", pais1);
            } else if (pontos1 < pontos2) {
                printf("A Carta 2 (%s) vence na categoria Pontos Turísticos!\n", pais2);
            } else {
                printf("Empate na categoria Pontos Turísticos!\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("A Carta 1 (%s) vence na categoria Densidade Populacional!\n", pais1);
            } else if (densidade1 > densidade2) {
                printf("A Carta 2 (%s) vence na categoria Densidade Populacional!\n", pais2);
            } else {
                printf("Empate na categoria Densidade Populacional!\n");
            }
            break;
        default:
            printf("Categoria inválida!\n");
    }



    
    return 0;
}