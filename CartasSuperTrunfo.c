#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desafio Mestre

int main() {

    int resultado1, resultado2;

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

    // Variáveis para comparação

    int atributo1, atributo2;
    float v1_c1, v1_c2;
    float v2_c1, v2_c2;
    float soma1, soma2;

     // Escolha do primeiro atributo 
    printf("Bem-vindo ao jogo!\n");
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1:
            printf("Você escolheu População.\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu Área.\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB.\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Densidade Demográfica.\n");
            densidade1 = populacao1 / area1;
            densidade2 = populacao2 / area2;
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            return 1;
    }
    // Escolha do segundo atributo

    printf("\nEscolha o segundo atributo:\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Você não pode escolher o mesmo atributo. Tente novamente.\n");
    } else {
        switch (atributo2) {
            case 1:
                printf("Você escolheu População.\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu Área.\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu PIB.\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            case 4:
                printf("Você escolheu Densidade Demográfica.\n");
                densidade1 = populacao1 / area1;
                densidade2 = populacao2 / area2;
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }



    // Valores do primeiro atributo 

     switch (atributo1) {
        case 1:
            v1_c1 = populacao1;
            v1_c2 = populacao2;
            break;
        case 2:
            v1_c1 = area1;
            v1_c2 = area2;
            break;
        case 3:
            v1_c1 = pib1;
            v1_c2 = pib2;
            break;
        case 4:
            v1_c1 = densidade1;
            v1_c2 = densidade2;
            break;
        default:
            v1_c1 = v1_c2 = 0;
    }

      // Valores do segundo atributo 

    switch (atributo2) {
        case 1:
            v2_c1 = populacao1;
            v2_c2 = populacao2;
            break;
        case 2:
            v2_c1 = area1;
            v2_c2 = area2;
            break;
        case 3:
            v2_c1 = pib1;
            v2_c2 = pib2;
            break;
        case 4:
            v2_c1 = densidade1;
            v2_c2 = densidade2;
            break;
        default:
            v2_c1 = v2_c2 = 0;
    }

    // Soma dos atributos 

    soma1 = v1_c1 + v2_c1;
    soma2 = v1_c2 + v2_c2;

    // Exibição do resultado 

    printf("\n===== RESULTADO =====\n");
    printf("%s x %s\n\n", pais1, pais2);

    printf("Atributo 1: %.2f x %.2f\n", v1_c1, v1_c2);
    printf("Atributo 2: %.2f x %.2f\n", v2_c1, v2_c2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    printf("\nResultado final: ");
    soma1 == soma2 ? printf("Empate!\n") :
    soma1 > soma2 ? printf("%s venceu!\n", pais1) :
                    printf("%s venceu!\n", pais2); 

    return 0;
}