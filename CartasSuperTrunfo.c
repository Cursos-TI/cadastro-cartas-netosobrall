#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado;
    char* CodCarta[3];
    char* Nome[15];
    int populacao;
    float area; 
    float pib;
    int pontos;

  // Área para entrada de dados
  printf("Digite o Estado da Carta 01: \n");
    scanf("%c", &Estado);
    printf("Digite o Codigo da Carta 01: \n");
    scanf("%s", &CodCarta);
    printf("Digite o Nome da Cidade da Carta 01: \n");
    scanf("%s", &Nome);
    printf("Digite a População da Carta 01: \n");
    scanf("%d", &populacao);
    printf("Digite a Area da Carta 01: \n");
    scanf("%f", &area);
    printf("Digite o PIB da Carta 01: \n");
    scanf("%f", &pib);
    printf("Digite os Pontos da Carta 01: \n");
    scanf("%d", &pontos);

  // Área para exibição dos dados da cidade

return 0;
} 
