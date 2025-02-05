#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4
#define TOTAL_CARTAS (NUM_ESTADOS * NUM_CIDADES)

// Função para limpar o buffer de entrada
void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Vetores para armazenar os atributos de cada cidade
    char codigo[TOTAL_CARTAS][4];           // Código da cidade (ex: "A01")
    char nome[TOTAL_CARTAS][50];              // Nome da cidade
    int populacao[TOTAL_CARTAS];              // População da cidade
    float area[TOTAL_CARTAS];                 // Área da cidade
    float pib[TOTAL_CARTAS];                  // PIB da cidade
    int pontosTuristicos[TOTAL_CARTAS];       // Número de pontos turísticos

    int index = 0;
    char estado;
    int cidade;

    // Cadastro das Cartas:
    // Para cada estado (de A a H) e para cada cidade (1 a 4), os dados serão capturados via terminal.
    for (estado = 'A'; estado < 'A' + NUM_ESTADOS; estado++) {
        for (cidade = 1; cidade <= NUM_CIDADES; cidade++) {
            // Gera o código da cidade (exemplo: "A01")
            sprintf(codigo[index], "%c%02d", estado, cidade);
            
            printf("\n--- Cadastro da Cidade %s ---\n", codigo[index]);
            
            // Captura o nome da cidade
            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nome[index]); // aceita espaços
            clearBuffer();
            
            // Captura a população (somente números, sem formatação de texto)
            printf("Digite a populacao (somente numeros inteiros): ");
            scanf("%d", &populacao[index]);
            clearBuffer();
            
            // Captura a área
            printf("Digite a area (use . para separar decimais): ");
            scanf("%f", &area[index]);
            clearBuffer();
            
            // Captura o PIB
            printf("Digite o PIB (use . para separar decimais): ");
            scanf("%f", &pib[index]);
            clearBuffer();
            
            // Captura o número de pontos turísticos
            printf("Digite o numero de pontos turisticos (somente numeros inteiros): ");
            scanf("%d", &pontosTuristicos[index]);
            clearBuffer();
            
            index++;
        }
    }

    // Exibição dos Dados das Cartas:
    // Os dados cadastrados serão exibidos de forma organizada, um atributo por linha.
    printf("\n--- Cartas Cadastradas ---\n");
    for (index = 0; index < TOTAL_CARTAS; index++) {
        printf("\nCodigo: %s\n", codigo[index]);
        printf("Nome: %s\n", nome[index]);
        printf("Populacao: %d\n", populacao[index]);
        printf("Area: %.2f\n", area[index]);
        printf("PIB: %.2f\n", pib[index]);
        printf("Pontos Turisticos: %d\n", pontosTuristicos[index]);
        printf("-----------------------------\n");
    }
    
    // Teste larissa
    return 0;
}
