#include <stdio.h>

int main(void) {
    // ----- Cadastro da Carta 1 -----
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    
    // Entrada dos dados para a Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado da Carta 1 (ex: A): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da Carta 1 (ex: A01):\n");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade (Carta 1): ");
    scanf(" %n", nome1);
    
    printf("Digite a populacao (numeros inteiros) da Carta 1: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area (use . para decimais) da Carta 1: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (use . para decimais) da Carta 1: ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos (numeros inteiros) da Carta 1: ");
    scanf("%d", &pontosTuristicos1);
    
    // Cálculo das propriedades para a Carta 1
    densidade1 = populacao1 / area1;      // habitantes por km²
    pibPerCapita1 = pib1 / populacao1;      // PIB por habitante

    // ----- Cadastro da Carta 2 -----
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    
    // Entrada dos dados para a Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado da Carta 2 (ex: São paulo, Bahia etc...): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da Carta 2 (ex: B02):\n ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade (Carta 2): ");
    scanf("%n", nome2);
    
    printf("Digite a populacao (numeros inteiros) da Carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area (use . para decimais) da Carta 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (use . para decimais) da Carta 2: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos (numeros inteiros) da Carta 2: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculo das propriedades para a Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    
    // ----- Exibição dos Resultados -----
    // Exibindo os dados da Carta 1 com os cálculos realizados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // Exibindo os dados da Carta 2 com os cálculos realizados
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    return 0;
}
