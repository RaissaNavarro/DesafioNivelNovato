#include <stdio.h>

int main()
{
    // declarando as variáveis da primeira carta
    char pais1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int qtd_pontos_turisticos1;
    float densidadePopu1;

    // declarando as variáveis da segunda carta
    char pais2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qtd_pontos_turisticos2;
    float densidadePopu2;

    // recebendo os dados da primeira carta
    printf("Digite o nome do país 1: \n");
    scanf("%s", &pais1);

    printf("Digite a população do país 1: ");
    scanf(" %lu", &populacao1);

    printf("\nDigite a área do país 1 (km²): ");
    scanf(" %f", &area1);

    printf("\nDigite o PIB do país 1 (bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("\nDigite o número de pontos turísticos 1: ");
    scanf(" %d", &qtd_pontos_turisticos1);

    densidadePopu1 = populacao1 / area1;

    // recebendo os dados da segunda carta
    printf("\nDigite o nome do país 2: ");
    scanf(" %s", &pais2);

    printf("\nDigite a população do país 2:");
    scanf("%lu", &populacao2);

    printf("\nDigite a área do país 2 (km²): ");
    scanf("%f", &area2);

    printf("\nDigite o PIB do país 2 (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("\nDigite o número de pontos turísticos 2: ");
    scanf("%d", &qtd_pontos_turisticos2);

    densidadePopu2 = populacao2 / area2;

    int escolhaUsuario;

    printf("\nQual atributo você quer comparar: \n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Escolha: \n");
    scanf("%d", &escolhaUsuario);

    switch (escolhaUsuario)
    {
    case 1:
        printf("\nPOPULAÇÃO\n");
        printf("Carta 1 - %c: %lu\n", pais1, populacao1);
        printf("Carta 2 - %c: %lu\n", pais2, populacao2);
        break;
    
    case 2:
    printf("\nÁREA\n");
    printf("Carta 1 - %c: %f\n", pais1, area1);
    printf("Carta 2 - %c: %f\n", pais2, area2);
    break;

    case 3:
        printf("\nPIB\n");
        printf("Carta 1 - %c: %f\n", pais1, pib1);
        printf("Carta 2 - %c: %f\n", pais2, pib2);
        break;

    case 4:
    printf("\nNÚMERO DE PONTOS TURÍSTICOS\n");
    printf("Carta 1 - %c: %d\n", pais1, qtd_pontos_turisticos1);
    printf("Carta 2 - %c: %d\n", pais2, qtd_pontos_turisticos2);
    break;

    case 5:
        printf("\nDENSIDADE DEMOGRÁFICA\n");
        printf("Carta 1 - %c: %f\n", pais1, densidadePopu1);
        printf("Carta 2 - %c: %f\n", pais2, densidadePopu2);
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    if (escolhaUsuario == 1){

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if ( populacao1 < populacao2){
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);

        } else{
            printf("EMPATE\n");
        }

    }

    if (escolhaUsuario == 2){ 

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if ( area1 < area2){
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);

        } else{
            printf("EMPATE\n");
        }

    }



    if (escolhaUsuario == 3){ 
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if ( pib1 < pib2){
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        } else{
            printf("EMPATE\n");
        }
    }
    
    if (escolhaUsuario == 4 ) { 
        if (qtd_pontos_turisticos1 > qtd_pontos_turisticos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if ( qtd_pontos_turisticos1 < qtd_pontos_turisticos2){
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);

        } else{
            printf("EMPATE\n");
        }

    }

    if (escolhaUsuario == 5) {
        if (densidadePopu1 > densidadePopu2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        } else if ( densidadePopu1 < densidadePopu2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);

        } else{
            printf("EMPATE\n");
        }
    }

    return 0;
}
