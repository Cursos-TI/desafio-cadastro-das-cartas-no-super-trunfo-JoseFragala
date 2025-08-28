#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("Desafio: Super Trunfo\n\n");
    // declaração de variáveis:
    char estado;
    char cod_cartas[50];
    char nome_cidade[50];
    int populacao,num_pontos;
    float area, pib;

    //scanf - cadastro de cartas


//CARTA 1:
    printf ("Carta 1\n\n");
    printf("Digite o estado:\n");
    scanf (" %c", &estado);
 

    printf ("Digite o Código da carta:\n");
    scanf ("%s", &cod_cartas);

    printf ("Digite o nome da cidade:\n");
    scanf ("%s", nome_cidade);

    printf ("Digite o número de habitantes:\n");
    scanf ("%d", &populacao);

    printf ("Digite a àrea(km²) da cidade:\n");
    scanf ("%f", &area);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos da cidade:\n");
    scanf ("%d", &num_pontos);

// impressão dos dados cadastrados

    printf ("\nDADOS DA CARTA 1:\n\n");
    printf("Estado: %c\nCódigo: %s\n", estado, cod_cartas);
    printf ("Nome da cidade:%s\nPopulação: %d\n", nome_cidade, populacao);
    printf ("Àrea: %.5f km²\nPIB: R$%f\nNúmero de pontos turísticos:%d\n", area,pib,num_pontos);
    printf ("\n>>>>>>>>>>>CARTA 1 CADASTRADA COM SUCESSO<<<<<<<<<<<<<<<<<\n\n");

//CARTA 2

    printf ("Carta 2\n\n");
    printf("Digite o estado:\n");
    scanf (" %c", &estado);
 

    printf ("Digite o Código da carta:\n");
    scanf ("%s", &cod_cartas);

    printf ("Digite o nome da cidade:\n");
    scanf ("%s", nome_cidade);

    printf ("Digite o número de habitantes:\n");
    scanf ("%d", &populacao);

    printf ("Digite a àrea(km²) da cidade:\n");
    scanf ("%f", &area);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos da cidade:\n");
    scanf ("%d", &num_pontos);

// impressão dos dados cadastrados

    printf ("\nDADOS DA CARTA 2:\n\n");
    printf("Estado: %c\nCódigo: %s\n", estado, cod_cartas);
    printf ("Nome da cidade:%s\nPopulação: %d\n", nome_cidade, populacao);
    printf ("Àrea: %.5f km²\nPIB: R$%f\nNúmero de pontos turísticos:%d\n", area,pib,num_pontos);
    printf ("\n>>>>>>>>>>>CARTA 2 CADASTRADA COM SUCESSO<<<<<<<<<<<<<<<<<\n\n");

    return 0;
}
