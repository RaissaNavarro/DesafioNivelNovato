#include <stdio.h>

int main() {

    //declarando as variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int qtd_pontos_turisticos1;
    
    //declarando as variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int qtd_pontos_turisticos2;

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
        
        // Mostrando pro usuário os dados da primeira carta
        printf("\nCarta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nome1);
        printf("População: %d\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos1);
        
        // Mostrando pro usuário os dados da segunda carta
        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nome2);
        printf("População: %d\n", populacao2);
        printf("Área: %f km²\n", area2);
        printf("PIB: %f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);
        
        return 0;
}