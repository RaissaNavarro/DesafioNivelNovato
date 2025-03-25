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
    scanf(" %c", &estado1); // aqui é %c pq só vai preencher com um caractere

    printf("Digite o código da carta (exemplo: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &qtd_pontos_turisticos1);

    densidadePopu1 = populacao1 / area1; // calculando a densidade populacional

    pibCapita1 = pib1 / populacao1; // calculando o pib per capita

    superPoder1 = populacao1 + area1 + pib1 + qtd_pontos_turisticos1 + pibCapita1 + (1 / densidadePopu1); // calculando o superPoder

    // recebendo os dados da segunda carta
    printf("\nDigite o estado da cidade (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (exemplos: B03): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &qtd_pontos_turisticos2);

    densidadePopu2 = populacao2 / area2; // calculando a densidade populacional

    pibCapita2 = pib2 / populacao2; // calculando o pib per capita

    superPoder2 = populacao2 + area2 + pib2 + qtd_pontos_turisticos2 + pibCapita2 + (1 / densidadePopu2); // calculando o superPoder

    // Fazendo a comparação das cartas
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Area: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", qtd_pontos_turisticos1 > qtd_pontos_turisticos2 ? 1 : 2, qtd_pontos_turisticos1 > qtd_pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopu1 < densidadePopu2 ? 1 : 2, densidadePopu1 < densidadePopu2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibCapita1 > pibCapita2 ? 1 : 2, pibCapita1 > pibCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}