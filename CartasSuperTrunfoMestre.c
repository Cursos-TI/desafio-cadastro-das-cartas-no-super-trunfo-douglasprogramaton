#include <stdio.h>

int main(void) {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;
    
    // --- Cadastro da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o estado (ex: A): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    
    printf("Digite a populacao (unsigned long int): ");
    scanf("%lu", &populacao1);
    
    printf("Digite a area (use . para decimais): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (use . para decimais): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    
    if (area1 != 0.0f)
        densidade1 = (float)populacao1 / area1;
    else
        densidade1 = 0.0f;
    
    if (populacao1 != 0)
        pibPerCapita1 = pib1 / (float)populacao1;
    else
        pibPerCapita1 = 0.0f;
   
    float inversoDensidade1 = (densidade1 != 0.0f ? 1.0f / densidade1 : 0.0f);
    
    
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;
    

    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Digite o estado (ex: B): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("Digite a populacao (unsigned long int): ");
    scanf("%lu", &populacao2);
    
    printf("Digite a area (use . para decimais): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (use . para decimais): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculos para a Carta 2
    if (area2 != 0.0f)
        densidade2 = (float)populacao2 / area2;
    else
        densidade2 = 0.0f;
    
    if (populacao2 != 0)
        pibPerCapita2 = pib2 / (float)populacao2;
    else
        pibPerCapita2 = 0.0f;
    
    float inversoDensidade2 = (densidade2 != 0.0f ? 1.0f / densidade2 : 0.0f);
    
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;
    
    // --- Comparação dos Atributos ---
    printf("\n=== Comparacao de Cartas ===\n");
    
    // População: Carta com maior valor vence
    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu (1)\n");
    else
        printf("Populacao: Carta 2 venceu (0)\n");
    
    // Área: Carta com maior valor vence
    if (area1 > area2)
        printf("Area: Carta 1 venceu (1)\n");
    else
        printf("Area: Carta 2 venceu (0)\n");
    
    // PIB: Carta com maior valor vence
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");
    
    // Pontos Turisticos: Carta com maior valor vence
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    
    // Densidade Populacional: Carta com MENOR valor vence
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    
    // PIB per Capita: Carta com maior valor vence
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    
    // Super Poder: Carta com maior valor vence
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");
    
    return 0;
}
