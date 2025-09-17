#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("Desafio: Super Trunfo\n\n");
    // declaração de variáveis:
    char estado, estado2;
    char cod_cartas[50], cod_cartas2[50];
    char nome_cidade[50], nome_cidade2[50];
    unsigned long int populacao = 1,populacao2 = 1; 
    int num_pontos =1, num_pontos2 =1;
    float area =1,area2 =1, pib =1,pib2 =1, dens = 1,dens2 = 1, pibper =1,pibper2 =1;


    // adicionei as variaveis, e fiz o casting



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
    scanf ("%u", &populacao);

    printf ("Digite a àrea(km²) da cidade:\n");
    scanf ("%f", &area);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos da cidade:\n");
    scanf ("%d", &num_pontos);

    dens = (float) populacao / area;
    pibper = (pib * 1000000000) / populacao;

    float superPoder = populacao+area+pib+num_pontos+(1/dens)+pibper;
   


// impressão dos dados cadastrados

    printf ("\nDADOS DA CARTA 1:\n\n");
    printf("Estado: %c\nCódigo: %s\n", estado, cod_cartas);
    printf ("Nome da cidade:%s\nPopulação: %u\n", nome_cidade, populacao);
    printf ("Àrea: %.2f km²\nPIB: R$%.2f\nNúmero de pontos turísticos:%d\n", area,pib,num_pontos);
    printf ("Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", dens,pibper);
    printf("Super poder: %.2f", superPoder);
    printf ("\n>>>>>>>>>>>CARTA 1 CADASTRADA COM SUCESSO<<<<<<<<<<<<<<<<<\n\n");

//CARTA 2

    printf ("Carta 2\n\n");
    printf("Digite o estado:\n");
    scanf (" %c", &estado2);
 

    printf ("Digite o Código da carta:\n");
    scanf ("%s", &cod_cartas2);

    printf ("Digite o nome da cidade:\n");
    scanf ("%s", nome_cidade2);

    printf ("Digite o número de habitantes:\n");
    scanf ("%u", &populacao2);

    printf ("Digite a àrea(km²) da cidade:\n");
    scanf ("%f", &area2);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib2);

    printf ("Digite o número de pontos turísticos da cidade:\n");
    scanf ("%d", &num_pontos2);

    dens = (float) populacao2 / area2;
    pibper = (pib2 * 1000000000) / populacao2;

    float superPoder2 = populacao+area+pib+num_pontos+(1/dens)+pibper;

// impressão dos dados cadastrados

    printf ("\nDADOS DA CARTA 2:\n\n");
    printf("Estado: %c\nCódigo: %s\n", estado2, cod_cartas2);
    printf ("Nome da cidade:%s\nPopulação: %u\n", nome_cidade2, populacao2);
    printf ("Àrea: %.2f km²\nPIB: R$%.2f\nNúmero de pontos turísticos:%d\n", area,pib,num_pontos2);
    printf ("Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", dens,pibper2);
    printf("Super poder: %.2f", superPoder2);
    printf ("\n>>>>>>>>>>>CARTA 2 CADASTRADA COM SUCESSO<<<<<<<<<<<<<<<<<\n\n");

// comparação dos "poderes" e soma.
printf(">>>>>>>>Comparação dos atributos das cartas<<<<<<<<<\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", num_pontos > num_pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", !(dens > dens2)); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibper > pibper2);
    printf("Super Poder: Carta 1 venceu (%d)\n\n", superPoder > superPoder2);


    printf (">>>>>>>> CARTA 1 FOI A VENCEDORA, PARABÉNS<<<<<<<<<<\n");

    return 0;
}
