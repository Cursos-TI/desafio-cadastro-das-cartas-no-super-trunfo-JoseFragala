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
    int opcao1, atributo;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Nome (apenas exibir)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Densidade demográfica (menor vence)\n");
    printf("7 - PIB per capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    printf("\n=== Resultado da Comparação ===\n\n");

    int resultado1 = 0;


    switch (opcao1) {

        case 1:
            atributo = 1;
            printf("\n\nAtributo: Nome (apenas exibição)\n\n");
            printf("Carta 1: %s\n", nome1);
            printf("Carta 2: %s\n", nome2);
            printf("\nEste atributo não define vencedor.\n\n");
            break;

        case 2:
            atributo = 2;
            printf("\n\nAtributo: População\n\n");
            printf("Carta 1: %lu habitantes\n", populacao1);
            printf("Carta 2: %lu habitantes\n", populacao2);

            if (populacao1 > populacao2) {
                printf("\n=== Vencedora da rodada 1: Carta 1 (%s) ===\n\n", nome1);
                resultado1 = 1;
            } else if (populacao2 > populacao1) {
                printf("\n=== Vencedora da rodada 1: Carta 2 (%s) ===\n\n", nome2);
                resultado1 = 2;
            } else {
                printf("\n=== Empate na primeira rodada! ===\n\n");
                resultado1 = 0;
            }
            break;

        case 3:
            atributo = 3;
            printf("\n\nAtributo: Área (km²)\n\n");
            printf("Carta 1: %.2f\n", area1);
            printf("Carta 2: %.2f\n", area2);

            if (area1 > area2) {
                printf("\n=== Vencedora da rodada 1: Carta 1 (%s) ===\n\n", nome1);
                resultado1 = 1;
            } else if (area2 > area1) {
                printf("\n=== Vencedora da rodada 1: Carta 2 (%s) ===\n\n", nome2);
                resultado1 = 2;
            } else {
                printf("\n=== Empate na primeira rodada! ===\n\n");
                resultado1 = 0;
            }
            break;

        case 4:
            atributo = 4;
            printf("\n\nAtributo: PIB (bilhões)\n\n");
            printf("Carta 1: %.2f\n", pib1);
            printf("Carta 2: %.2f\n", pib2);

            if (pib1 > pib2) {
                printf("\n=== Vencedora da rodada 1: Carta 1 (%s) ===\n\n", nome1);
                resultado1 = 1;
            } else if (pib2 > pib1) {
                printf("\n=== Vencedora da rodada 1: Carta 2 (%s) ===\n\n", nome2);
                resultado1 = 2;
            } else {
                printf("\n=== Empate na primeira rodada! ===\n\n");
                resultado1 = 0;
            }
            break;

        case 5:
            atributo = 5;
            printf("\n\nAtributo: Pontos turísticos\n\n");
            printf("Carta 1: %d\n", pontos1);
            printf("Carta 2: %d\n", pontos2);

            if (pontos1 > pontos2) {
                printf("\n=== Vencedora da rodada 1: Carta 1 (%s) ===\n\n", nome1);
                resultado1 = 1;
            } else if (pontos2 > pontos1) {
                printf("\n === Vencedora da rodada 1: Carta 2 (%s) ===\n\n", nome2);
                resultado1 = 2;
            } else {
                printf("\n=== Empate da primeira rodada! ===\n\n");
                resultado1 = 0;
            }
            break;

        case 6:
            atributo = 6;
            printf("\n\nAtributo: Densidade demográfica (menor vence)\n\n");
            printf("Carta 1: %.2f hab/km²\n", dens1);
            printf("Carta 2: %.2f hab/km²\n", dens2);

            if (dens1 < dens2) {
                printf("\n === Vencedora da rodada 1: Carta 1 (%s) (menor densidade) ===\n\n", nome1);
                resultado1 = 1;
            } else if (dens2 < dens1) {
                printf("\n=== Vencedora da rodada 1: Carta 2 (%s) (menor densidade) ===\n\n", nome2);
                resultado1 = 2;
            } else {
                printf("\n=== Empate na primeira rodada! ===\n\n");
                resultado1 = 0;
            }
            break;

        case 7:
            atributo = 7;
            printf("\n\nAtributo: PIB per Capita\n\n");
            printf("Carta 1: R$ %.2f\n", pibper1);
            printf("Carta 2: R$ %.2f\n", pibper2);

            if (pibper1 > pibper2) {
                printf("\n=== Vencedora da rodada 1: Carta 1 (%s) === \n\n", nome1);
                resultado1 = 1;
            } else if (pibper2 > pibper1) {
                printf("\n=== Vencedora da rodada 1: Carta 2 (%s) ===\n\n", nome2);
                resultado1 = 2;

            } else {
                printf("\n === Empate na primeira rodada! ===\n\n");
                resultado1 = 0;
            }
            break;

        default:
            printf("\n\nOpção inválida!\n\n");
            break;
        }

    int opcao2;

        if (atributo == 1){
        printf("\nEscolha o segundo atributo para comparar:\n\n");
        printf("2 - População\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Pontos turísticos\n");
        printf("6 - Densidade demográfica (menor vence)\n");
        printf("7 - PIB per capita\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao2);
        } else if (atributo ==2){
        printf("\nEscolha o atributo para comparar:\n\n");
        printf("1 - Nome (apenas exibir)\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Pontos turísticos\n");
        printf("6 - Densidade demográfica (menor vence)\n");
        printf("7 - PIB per capita\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao2);

        } else if (atributo ==3){
        printf("\nEscolha o atributo para comparar:\n\n");
        printf("1 - Nome (apenas exibir)\n");
        printf("2 - População\n");
        printf("4 - PIB\n");
        printf("5 - Pontos turísticos\n");
        printf("6 - Densidade demográfica (menor vence)\n");
        printf("7 - PIB per capita\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao2);
        } else if (atributo == 4){
        printf("\nEscolha o atributo para comparar:\n\n");
        printf("1 - Nome (apenas exibir)\n");
        printf("2 - População\n");
        printf("3 - Área\n");
        printf("5 - Pontos turísticos\n");
        printf("6 - Densidade demográfica (menor vence)\n");
        printf("7 - PIB per capita\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao2);
        } else if (atributo == 5){
        printf("\nEscolha o atributo para comparar:\n\n");
        printf("1 - Nome (apenas exibir)\n");
        printf("2 - População\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("6 - Densidade demográfica (menor vence)\n");
        printf("7 - PIB per capita\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao2);
        } else if (atributo == 6){
        printf("\nEscolha o atributo para comparar:\n\n");
        printf("1 - Nome (apenas exibir)\n");
        printf("2 - População\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Pontos turísticos\n");
        printf("7 - PIB per capita\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao2);
        } else if (atributo == 7){
        printf("\nEscolha o atributo para comparar:\n\n");
        printf("1 - Nome (apenas exibir)\n");
        printf("2 - População\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Pontos turísticos\n");
        printf("6 - Densidade demográfica (menor vence)\n");
        printf("Digite a opção: ");
        scanf("%d\n", &opcao2);
        } else {
            printf ("opção inválida\n\n");
        }
 int resultado2 = 0;


    switch (opcao2) {

        case 1:
            printf("\n\nAtributo: Nome (apenas exibição)\n\n");
            printf("Carta 1: %s\n", nome1);
            printf("Carta 2: %s\n", nome2);
            printf("\nEste atributo não define vencedor.\n\n");
            break;

        case 2:
            printf("\n\nAtributo: População\n\n");
            printf("Carta 1: %lu habitantes\n", populacao1);
            printf("Carta 2: %lu habitantes\n", populacao2);

            if (populacao1 > populacao2) {
                printf("\n === Vencedora da rodada 2: Carta 1 (%s) ===\n\n", nome1);
                resultado2 = 1;
            } else if (populacao2 > populacao1) {
                printf("\n === Vencedora da rodada 2: Carta 2 (%s) ===\n\n", nome2);
                resultado2 = 2;
            } else {
                printf("\n === Empate na segunda rodada! ===\n\n");
                resultado2 = 0;
            }
            break;

        case 3:
            printf("\n\nAtributo: Área (km²)\n\n");
            printf("Carta 1: %.2f\n", area1);
            printf("Carta 2: %.2f\n", area2);

            if (area1 > area2) {
                printf("\n === Vencedora da rodada 2: Carta 1 (%s) ===\n\n", nome1);
                resultado2 = 1;
            } else if (area2 > area1) {
                printf("\n === Vencedora da rodada 2: Carta 2 (%s) ===\n\n", nome2);
                resultado2 = 2;
            } else {
                printf("\n === Empate na segunda rodada! === \n\n");
                resultado2 = 0;
            }
            break;

        case 4:
            printf("\n\nAtributo: PIB (bilhões)\n\n");
            printf("Carta 1: %.2f\n", pib1);
            printf("Carta 2: %.2f\n", pib2);

            if (pib1 > pib2) {
                printf("\n=== Vencedora da rodada 2: Carta 1 (%s) ===\n\n", nome1);
                resultado2 = 1;
            } else if (pib2 > pib1) {
                printf("\n=== Vencedora da rodada 2: Carta 2 (%s) ===\n\n", nome2);
                resultado2 = 2;
            } else {
                printf("\n=== Empate na segunda rodada! === \n\n");
                resultado2 = 0;
            }
            break;

        case 5:
            printf("\n\nAtributo: Pontos turísticos\n\n");
            printf("Carta 1: %d\n", pontos1);
            printf("Carta 2: %d\n", pontos2);

            if (pontos1 > pontos2) {
                printf("\n=== Vencedora da rodada 2: Carta 1 (%s) ===\n\n", nome1);
                resultado2 = 1;
            } else if (pontos2 > pontos1) {
                printf("\n=== Vencedora da rodada 2: Carta 2 (%s) ===\n\n", nome2);
                resultado2 = 2;
            } else {
                printf("\n=== Empate da segunda rodada! === \n\n");
                resultado2 = 0;
            }
            break;

        case 6:
            printf("\n\nAtributo: Densidade demográfica (menor vence)\n\n");
            printf("Carta 1: %.2f hab/km²\n", dens1);
            printf("Carta 2: %.2f hab/km²\n", dens2);

            if (dens1 < dens2) {
                printf("\n=== Vencedora da rodada 2: Carta 1 (%s) (menor densidade) === \n\n", nome1);
                resultado2 = 1;
            } else if (dens2 < dens1) {
                printf("\n=== Vencedora da rodada 2: Carta 2 (%s) (menor densidade) === \n\n", nome2);
                resultado2 = 2;
            } else {
                printf("\n=== Empate na segunda rodada! === \n\n");
                resultado2 = 0;
            }
            break;
        

        case 7:
            printf("\n\nAtributo: PIB per Capita\n\n");
            printf("Carta 1: R$ %.2f\n", pibper1);
            printf("Carta 2: R$ %.2f\n", pibper2);

            if (pibper1 > pibper2) {
                printf("n=== Vencedora da rodada 2: Carta 1 (%s) ===\n\n", nome1);
                resultado2 = 1;
            } else if (pibper2 > pibper1) {
                printf("\n=== Vencedora da rodada 2: Carta 2 (%s) ===\n\n", nome2);
                resultado2 = 2;

            } else {
                printf("\n=== Empate na segunda rodada! ===\n\n");
                resultado2 = 0;
            }
            break;

          default:
            printf("Opção inválida!\n\n");
            break;
        }
    
    if ( ((resultado1 == 1) && (resultado2 == 1)) ||
         ((resultado1 == 1) && (resultado2 == 0)) ||
         ((resultado1 == 0) && (resultado2 == 1)) )
    {
        printf ("\nRESULTADO FINAL:\n");
        printf ("===================== A carta vencedora foi a CARTA 1, PARABÉNS!!!!! =====================\n\n");
    }else if ( ((resultado1 == 2) && (resultado2 == 2)) ||
         ((resultado1 == 2) && (resultado2 == 0)) ||
         ((resultado1 == 0) && (resultado2 == 2)) )
         {
        printf ("\nRESULTADO FINAL:\n");
        printf ("===================== A carta vencedora foi a CARTA 2, PARABÉNS!!!! ===================== \n\n");
    }else{
        printf ("\nRESULTADO FINAL:\n");
        printf ("===================== O JOGO EMPATOU!!!===================== \n\n");
    }
    printf("\n==== Fim do Jogo ====\n");

    return 0;
}
