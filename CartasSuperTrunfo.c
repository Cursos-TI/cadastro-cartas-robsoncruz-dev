#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível: Aventureiro
// Objetivo: Calcular e exibir a Densidade Populacional e o PIB per Capita.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Variaveis do Nivel Novato
    int populacao_A, p_turistico_A, populacao_B, p_turistico_B;
    char estado_A[5], cidade_A[30], cod_carta_A[5], estado_B[5], cidade_B[30], cod_carta_B[5];
    float area_A, pib_A, area_B, pib_B;

    // NOVAS Variaveis (Nivel Aventureiro) para aramazenar o resultado dos cálculos
    float densidade_A, pib_per_capita_A;
    float densidade_B, pib_per_capita_B;


    // --- CARTA 1 ---
    // Área para entrada de dados (Carta 1)
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Insira a LETRA do Primeiro Estado: ");
    scanf(" %s", estado_A);

    printf("Insira o NUMERO do Estado:  ");
    scanf(" %s", cod_carta_A);

    printf("Insira o NOME da Cidade:  ");
    // tive de colocar "%[^\n]" para poder comportar nomes de cidade com espaço (tipo: New York)
    scanf(" %[^\n]", cidade_A);

    printf("Insira a POPULACAO da Cidade: ");
    scanf("%d", &populacao_A);

    printf("Qual a AREA em Km2: ");
    scanf("%f", &area_A);

    printf("Qual o PIB em MBRL (Milhoes de Reais): ");
    scanf(" %f", &pib_A);

    printf("Quantidade de PONTOS TURISTICOS: ");
    scanf("%d", &p_turistico_A);

    printf(" -------------------------------- \n");

    // --- CARTA 2 ---
    // Área para entrada de dados (Carta 2)
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Insira a LETRA do Segundo Estado: ");
    scanf(" %s", estado_B);

    printf("Insira o NUMERO do Estado:  ");
    scanf(" %s", cod_carta_B);

    printf("Insira o NOME da Cidade:  ");
    scanf(" %[^\n]", cidade_B);

    printf("Insira a POPULACAO da Cidade: ");
    scanf("%d", &populacao_B);

    printf("Qual a AREA em Km2: ");
    scanf("%f", &area_B);

    printf("Qual o PIB em MBRL (Milhoes de Reais): ");
    scanf(" %f", &pib_B);

    printf("Quantidade de PONTOS TURISTICOS: ");
    scanf("%d", &p_turistico_B);

    // --------------------------------
    // NOVA Area de Calculos (Nivel Aventureiro)
    // Calculos para Carta 1
    // Densidade = População / Area 
    densidade_A = (float)populacao_A / area_A;
    // PIB per Capita = PIB / População 
    // (precisei ajustar e multiplicar por 1.000.000 porque optei por inserir o PIB no cadastro em MBRL - Milhões de Reais)
    pib_per_capita_A = (pib_A * 1000000) / (float)populacao_A;


    // Calculos para Carta 2
    densidade_B = (float)populacao_B / area_B;
    pib_per_capita_B = (pib_B * 1000000) / (float)populacao_B;

    // --------------------------------

    // Área para exibição dos dados da cidade

    printf("\n\n ======= CARTA 1 ============ \n");
    printf("Estado: %s \n", estado_A);
    printf("Codigo: %s \n", cod_carta_A); // Mudei de 'Estado' para 'Codigo'
    printf("Nome da Cidade: %s\n", cidade_A);
    printf("Populacao: %d \n", populacao_A);
    // Inseri uma melhoria de formato para que os floats mostrem 2 casas decimais (%.2f) para Carta 1 e Carta 2
    printf("Area: %.2f km2 \n", area_A);
    printf("PIB: %.2f Milhoes de Reais \n", pib_A);
    printf("Pontos Turisticos: %d \n", p_turistico_A);
    // NOVOS DADOS (Nivel Aventureiro) 
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_A);
    printf("PIB per Capita: %.2f Reais \n", pib_per_capita_A);


    printf("======== CARTA 2 ============ \n");
    printf("Estado: %s \n", estado_B);
    printf("Codigo: %s \n", cod_carta_B);
    printf("Nome da Cidade: %s\n", cidade_B);
    printf("Populacao: %d \n", populacao_B);
    printf("Area: %.2f km2 \n", area_B);
    printf("PIB: %.2f Milhoes de Reais \n", pib_B);
    printf("Pontos Turisticos: %d \n", p_turistico_B);
    // NOVOS DADOS (Nivel Aventureiro) 
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_B);
    printf("PIB per Capita: %.2f Reais \n", pib_per_capita_B);

    return 0;
}