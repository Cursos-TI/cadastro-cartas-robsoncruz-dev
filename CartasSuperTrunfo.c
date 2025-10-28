#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao_A, p_turistico_A, populacao_B, p_turistico_B;
    char estado_A[5], cidade_A[30], cod_carta_A[5], estado_B[5], cidade_B[30], cod_carta_B[5];
    float area_A, pib_A, area_B, pib_B;

  // Área para entrada de dados

    printf("Insira a LETRA do Primeiro Estado: ");
    scanf( " %s", &estado_A);

    printf ("Insira o NÚMERO do Estado:  ");
    scanf (" %s", &cod_carta_A);

    printf("Insira o NOME da Cidade:  ");
    scanf(" %s", &cidade_A);

    printf("Insira a POPULAÇAO da Cidade: ");
    scanf("%d", &populacao_A);

    printf("Qual a ÁREA em Km2: ");
    scanf("%f", &area_A);

    printf("Qual o PIB em MBRL: ");
    scanf(" %f", &pib_A);

    printf("Quantidade de PONTOS TURÍSTICOS: ");
    scanf("%d", &p_turistico_A);

    printf(" -------------------------------- \n");

    printf("Insira a LETRA do Segundo Estado: ");
    scanf( " %s", &estado_B);

    printf ("Insira o NÚMERO do Estado:  ");
    scanf (" %s", &cod_carta_B);

    printf("Insira o NOME da Cidade:  ");
    scanf(" %s", &cidade_B);

    printf("Insira a POPULAÇAO da Cidade: ");
    scanf("%d", &populacao_B);

    printf("Qual a ÁREA em Km2: ");
    scanf("%f", &area_B);

    printf("Qual o PIB em MBRL: ");
    scanf("%f", &pib_B);

    printf("Quantidade de PONTOS TURÍSTICOS: ");
    scanf("%d", &p_turistico_B);

    // Área para exibição dos dados da cidade
  
    printf(" ======= CARTA 1 ============ \n");
    printf("Carta 1: %s \n", estado_A);
    printf("Estado: %s \n",cod_carta_A);
    printf("Nome da Cidade: %s\n", cidade_A);
    printf("População: %d \n", populacao_A);
    printf("Área: %f km2 \n", area_A);
    printf("PIB: %f Milhoes de Reais \n", pib_A);
    printf("Pontos Turísticos: %d \n", p_turistico_A);
    printf("======== CARTA 2 ============ \n");
    printf("Carta 1: %s \n", estado_B);
    printf("Estado: %s \n",cod_carta_B);
    printf("Nome da Cidade: %s\n", cidade_B);
    printf("População: %d \n", populacao_B);
    printf("Área: %f km2 \n", area_B);
    printf("PIB: %f Milhoes de Reais \n", pib_B);
    printf("Pontos Turísticos: %d \n", p_turistico_B);

return 0;
} 
