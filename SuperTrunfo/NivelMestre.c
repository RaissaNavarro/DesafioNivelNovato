#include <stdio.h>

int main() {
    // Declarando as variáveis da primeira carta
    char pais1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int qtd_pontos_turisticos1;
    float densidadePopu1;

    // Declarando as variáveis da segunda carta
    char pais2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qtd_pontos_turisticos2;
    float densidadePopu2;

    // Recebendo os dados da primeira carta
    printf("Digite o nome do país 1: ");
    scanf("%s", pais1);
    printf("Digite a população do país 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área do país 1 (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB do país 1 (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos 1: ");
    scanf("%d", &qtd_pontos_turisticos1);

    densidadePopu1 = populacao1 / area1;

    // Recebendo os dados da segunda carta
    printf("\nDigite o nome do país 2: ");
    scanf("%s", pais2);
    printf("Digite a população do país 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área do país 2 (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB do país 2 (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos 2: ");
    scanf("%d", &qtd_pontos_turisticos2);

    densidadePopu2 = populacao2 / area2;

    // Escolha de dois atributos
    int escolha1, escolha2;
    printf("\nEscolha dois atributos para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade demográfica\n"); //assim fica mais facil do que criar varios printf
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);

    // Comparação de Valores
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    
    valor1_carta1 = (escolha1 == 1) ? populacao1 :
                    (escolha1 == 2) ? area1 :
                    (escolha1 == 3) ? pib1 :
                    (escolha1 == 4) ? qtd_pontos_turisticos1 : densidadePopu1;

    valor1_carta2 = (escolha1 == 1) ? populacao2 :
                    (escolha1 == 2) ? area2 :
                    (escolha1 == 3) ? pib2 :
                    (escolha1 == 4) ? qtd_pontos_turisticos2 : densidadePopu2;

    valor2_carta1 = (escolha2 == 1) ? populacao1 :
                    (escolha2 == 2) ? area1 :
                    (escolha2 == 3) ? pib1 :
                    (escolha2 == 4) ? qtd_pontos_turisticos1 : densidadePopu1;

    valor2_carta2 = (escolha2 == 1) ? populacao2 :
                    (escolha2 == 2) ? area2 :
                    (escolha2 == 3) ? pib2 :
                    (escolha2 == 4) ? qtd_pontos_turisticos2 : densidadePopu2;
    
    // Exibir os valores escolhidos
    printf("\nComparação:\n");
    printf("%s: %.2f X. %s: %.2f\n", pais1, valor1_carta1, pais2, valor1_carta2);
    printf("%s: %.2f X. %s: %.2f\n", pais1, valor2_carta1, pais2, valor2_carta2);

    // Ideia das vitorias
    int vitorias_carta1 = 0, vitorias_carta2 = 0;
    
    if ((escolha1 == 5 && valor1_carta1 < valor1_carta2) || (escolha1 != 5 && valor1_carta1 > valor1_carta2))
        vitorias_carta1++;
    else if (valor1_carta1 != valor1_carta2)
        vitorias_carta2++;

    if ((escolha2 == 5 && valor2_carta1 < valor2_carta2) || (escolha2 != 5 && valor2_carta1 > valor2_carta2))
        vitorias_carta1++;
    else if (valor2_carta1 != valor2_carta2)
        vitorias_carta2++;

    // Mostra resultado final pro usuario
    printf("\nResultado Final:\n");
    if (vitorias_carta1 > vitorias_carta2)
        printf("%s venceu!\n", pais1);
    else if (vitorias_carta1 < vitorias_carta2)
        printf("%s venceu!\n", pais2);
    else
        printf("Empate!\n");
    return 0;
    
}
