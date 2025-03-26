#include <stdio.h>

int main()
{
    // declarando as variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int qtd_pontos_turisticos1;
    float densidadePopu1;
    float pibCapita1;
    float superPoder1;

    // declarando as variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qtd_pontos_turisticos2;
    float densidadePopu2;
    float pibCapita2;
    float superPoder2;

    // recebendo os dados da primeira carta
    printf("Digite o estado da cidade(A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (exemplo: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);

    printf("Digite a população da cidade: ");
    scanf(" %lu", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &qtd_pontos_turisticos1);

    densidadePopu1 = populacao1 / area1;
    pibCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + qtd_pontos_turisticos1 + pibCapita1 + (1 / densidadePopu1);

    // recebendo os dados da segunda carta
    printf("\nDigite o estado da cidade (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (exemplos: B03): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);

    printf("Digite a população da cidade: ");
    scanf(" %lu", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &qtd_pontos_turisticos2);

    densidadePopu2 = populacao2 / area2;
    pibCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + qtd_pontos_turisticos2 + pibCapita2 + (1 / densidadePopu2);

    // Fazendo a comparação das cartas
    printf("\nComparacao de Cartas:\n");

    // População
    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu!\n");
    }

    // Área
    if (area1 > area2){
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu!\n");
    }

    // PIB
    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }

    // Pontos turísticos
    if (qtd_pontos_turisticos1 > qtd_pontos_turisticos2){
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }

    // Densidade populacional //aq o menor valor que vence, é o único diferente.
    if (densidadePopu1 < densidadePopu2){
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }

    // PIB per capita
    if (pibCapita1 > pibCapita2){
        printf("PIB per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu!\n");
    }

    // Super Poder
    if (superPoder1 > superPoder2){
        printf("Super Poder: Carta 1 venceu\n");
    } else {
        printf("Super Poder: Carta 2 venceu!\n");
    }

    return 0;
}
