#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível: Mestre
// Objetivo: Calcular Super Poder e comparar as duas cartas.

int main() {
    // === Bloco de Variaveis ===
    // --- Variaveis Nivel Novato ---
    // Alteração de formato da populacao agora é 'unsigned long int' 
    unsigned long int populacao_A, populacao_B; 
    int p_turistico_A, p_turistico_B;
    char estado_A[5], cidade_A[30], cod_carta_A[5], estado_B[5], cidade_B[30], cod_carta_B[5];
    float area_A, pib_A, area_B, pib_B;

    // --- Variaveis Nivel Aventureiro ---
    float densidade_A, pib_per_capita_A;
    float densidade_B, pib_per_capita_B;

    // --- Variaveis (Nivel Mestre) ---
    float super_poder_A, super_poder_B;

    // === Bloco de Entrada de Dados ===
    // --- CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Insira a LETRA do Primeiro Estado: ");
    scanf(" %s", estado_A);

    printf("Insira o NUMERO do Estado:  ");
    scanf(" %s", cod_carta_A);

    printf("Insira o NOME da Cidade:  ");
    scanf(" %[^\n]", cidade_A);

    printf("Insira a POPULACAO da Cidade: ");
    // uso de "%lu" pois a populacao agora é unsigned long int
    scanf("%lu", &populacao_A);

    printf("Qual a AREA em Km2: ");
    scanf("%f", &area_A);

    printf("Qual o PIB em MBRL (Milhoes de Reais): ");
    scanf(" %f", &pib_A);

    printf("Quantidade de PONTOS TURISTICOS: ");
    scanf("%d", &p_turistico_A);

    printf(" -------------------------------- \n");

    // --- CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Insira a LETRA do Segundo Estado: ");
    scanf(" %s", estado_B);

    printf("Insira o NUMERO do Estado:  ");
    scanf(" %s", cod_carta_B);

    printf("Insira o NOME da Cidade:  ");
    scanf(" %[^\n]", cidade_B);

    printf("Insira a POPULACAO da Cidade: ");
    // uso de "%lu" pois a populacao agora é unsigned long int
    scanf("%lu", &populacao_B);

    printf("Qual a AREA em Km2: ");
    scanf("%f", &area_B);

    printf("Qual o PIB em MBRL (Milhoes de Reais): ");
    scanf(" %f", &pib_B);

    printf("Quantidade de PONTOS TURISTICOS: ");
    scanf("%d", &p_turistico_B);

    // === Bloco de Calculos ===
    // --- Calculos Nivel Aventureiro ---
    densidade_A = (float)populacao_A / area_A;
    pib_per_capita_A = (pib_A * 1000000) / (float)populacao_A;

    densidade_B = (float)populacao_B / area_B;
    pib_per_capita_B = (pib_B * 1000000) / (float)populacao_B;

    // --- Calculos (Nivel Mestre) ---
    // Super Poder = Soma de todos os atributos 
    
    // Converti os 'int' para 'float' para a soma ter a mesma base
    super_poder_A = (float)populacao_A + area_A + pib_A + (float)p_turistico_A + pib_per_capita_A + (1 / densidade_A);
    super_poder_B = (float)populacao_B + area_B + pib_B + (float)p_turistico_B + pib_per_capita_B + (1 / densidade_B);


    // === Bloco de Exibicao dos Dados ===
    
    printf("\n\n ======= CARTA 1 ============ \n");
    printf("Estado: %s \n", estado_A);
    printf("Codigo: %s \n", cod_carta_A); 
    printf("Nome da Cidade: %s\n", cidade_A);
    // uso de "%lu" pois a populacao agora é unsigned long int
    printf("Populacao: %lu \n", populacao_A); 
    printf("Area: %.2f km2 \n", area_A);
    printf("PIB: %.2f Milhoes de Reais \n", pib_A);
    printf("Pontos Turisticos: %d \n", p_turistico_A);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_A);
    printf("PIB per Capita: %.2f Reais \n", pib_per_capita_A);
    // Exibindo o Super Poder calculado
    printf("Super Poder: %.2f \n", super_poder_A);


    printf("======== CARTA 2 ============ \n");
    printf("Estado: %s \n", estado_B);
    printf("Codigo: %s \n", cod_carta_B);
    printf("Nome da Cidade: %s\n", cidade_B);
    // uso de "%lu" pois a populacao agora é unsigned long int
    printf("Populacao: %lu \n", populacao_B);
    printf("Area: %.2f km2 \n", area_B);
    printf("PIB: %.2f Milhoes de Reais \n", pib_B);
    printf("Pontos Turisticos: %d \n", p_turistico_B);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_B);
    printf("PIB per Capita: %.2f Reais \n", pib_per_capita_B);
    // Exibindo o Super Poder calculado
    printf("Super Poder: %.2f \n", super_poder_B);

    // === Bloco de Comparacao (Nivel Mestre) ===
    printf("\n\n--- BATALHA DE CARTAS (Resultado) ---\n");
    // Regra: Maior vence 
    if (populacao_A > populacao_B) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    // Regra: Maior vence 
    if (area_A > area_B) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }

    // Regra: Maior vence 
    if (pib_A > pib_B) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // Regra: Maior vence 
    if (p_turistico_A > p_turistico_B) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    // Regra Especial: Menor vence 
    if (densidade_A < densidade_B) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // Regra: Maior vence 
    if (pib_per_capita_A > pib_per_capita_B) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Regra: Maior vence 
    if (super_poder_A > super_poder_B) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}