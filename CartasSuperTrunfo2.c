#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[50], nome2[50];
    unsigned long populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    float dens1, dens2, pibper1, pibper2;

    printf("==== DESAFIO SUPER TRUNFO - NIVEL AVENTUREIRO ====\n\n");

    // ==================== CARTA 1 ====================
    printf("CARTA 1\n");
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    dens1 = populacao1 / area1;
    pibper1 = (pib1 * 1000000000) / populacao1;

    printf("\nCarta 1 cadastrada com sucesso!\n\n");


    // ==================== CARTA 2 ====================
    printf("CARTA 2\n");
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    dens2 = populacao2 / area2;
    pibper2 = (pib2 * 1000000000) / populacao2;

    printf("\nCarta 2 cadastrada com sucesso!\n\n");


    // ==================== MENU ====================
    int opcao;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Nome (apenas exibir)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Densidade demográfica (menor vence)\n");
    printf("7 - PIB per capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n\n");

    switch (opcao) {

        case 1:
            printf("Atributo: Nome (apenas exibição)\n");
            printf("Carta 1: %s\n", nome1);
            printf("Carta 2: %s\n", nome2);
            printf("Este atributo não define vencedor.\n");
            break;

        case 2:
            printf("Atributo: População\n");
            printf("Carta 1: %lu habitantes\n", populacao1);
            printf("Carta 2: %lu habitantes\n", populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedora: Carta 1 (%s)\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: Área (km²)\n");
            printf("Carta 1: %.2f\n", area1);
            printf("Carta 2: %.2f\n", area2);

            if (area1 > area2) {
                printf("Vencedora: Carta 1 (%s)\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedora: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: PIB (bilhões)\n");
            printf("Carta 1: %.2f\n", pib1);
            printf("Carta 2: %.2f\n", pib2);

            if (pib1 > pib2) {
                printf("Vencedora: Carta 1 (%s)\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedora: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Pontos turísticos\n");
            printf("Carta 1: %d\n", pontos1);
            printf("Carta 2: %d\n", pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedora: Carta 1 (%s)\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedora: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: Densidade demográfica (menor vence)\n");
            printf("Carta 1: %.2f hab/km²\n", dens1);
            printf("Carta 2: %.2f hab/km²\n", dens2);

            if (dens1 < dens2) {
                printf("Vencedora: Carta 1 (%s) (menor densidade)\n", nome1);
            } else if (dens2 < dens1) {
                printf("Vencedora: Carta 2 (%s) (menor densidade)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 7:
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1: R$ %.2f\n", pibper1);
            printf("Carta 2: R$ %.2f\n", pibper2);

            if (pibper1 > pibper2) {
                printf("Vencedora: Carta 1 (%s)\n", nome1);
            } else if (pibper2 > pibper1) {
                printf("Vencedora: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("\n==== Fim do Jogo ====\n");

    return 0;
}

