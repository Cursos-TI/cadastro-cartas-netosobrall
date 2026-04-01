#include <stdio.h>
int main(){
    char EstadoA;
    char CodigoA[3];
    char NomedaCidadeA[20];
    int PopulacaoA;
    float areaA;
    float pibA;
    int pontosA;
    float DensidadeA;
    float pibpercapitaA;
    
    char EstadoB[3];
    char CodigoB[3];
    char NomedaCidadeB[20];
    int PopulacaoB;
    float areaB;
    float pibB;
    int pontosB;
    float DensidadeB;
    float pibpercapitaB;

    int ComparaçãoPopulacao;
    float ComparaçãoArea;
    float ComparaçãoPib;
    int ComparaçãoPontos;
    float ComparaçãoDensidade;
    float ComparaçãoPIBperCapita;
    int SuperPoder;

    ComparaçãoArea = areaA > areaB;
    ComparaçãoDensidade = DensidadeA > DensidadeB;
    ComparaçãoPib = pibA = pibB;
    ComparaçãoPIBperCapita = pibpercapitaA > pibpercapitaB;
    ComparaçãoPontos = pontosA > pontosB;
    ComparaçãoPopulacao = PopulacaoA > PopulacaoB;


    printf("***Carta 01***\n");

    printf("Estado: \n");
    scanf("%c", &EstadoA);
    printf("Código do Estado: \n");
    scanf("%s", &CodigoA);
    printf("Nome da Cidade: \n");
    scanf("%s", &NomedaCidadeA);
    printf("População: \n");
    scanf("%d", &PopulacaoA);
    printf("Área: \n");
    scanf("%f", &areaA);
    printf("PIB: \n");
    scanf("%f", &pibA);
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosA);

    DensidadeA = (float) PopulacaoA / areaA;
    pibpercapitaA = (float) pibA / PopulacaoA;

    printf("Densidade: %.2f\n", DensidadeA);
    printf("PIB per Capita: %f\n", pibpercapitaA);

    printf("***Carta 02***\n");

    printf("Estado: \n");
    scanf("%s", &EstadoB);
    printf("Código do Estado: \n");
    scanf("%s", &CodigoB);
    printf("Nome da Cidade: \n");
    scanf("%s", &NomedaCidadeB);
    printf("População: \n");
    scanf("%d", &PopulacaoB);
    printf("Área: \n");
    scanf("%f", &areaB);
    printf("PIB: \n");
    scanf("%f", &pibB);
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosB);

    DensidadeB = (float) PopulacaoB / areaB;
    pibpercapitaB = (float) pibB / PopulacaoB;

    printf("Densidade: %.2f\n", DensidadeB);
    printf("PIB per Capita: %f\n", pibpercapitaB);

    printf("***Exibição da Carta Ganhadora***\n");

    printf("População: Carta Ganhadora (%d)\n", ComparaçãoPopulacao);
    printf("Área: Carta Ganhadora (%.f)\n", ComparaçãoArea);
    printf("PIB: Carta Ganhadora (%.f)\n", ComparaçãoPib);
    printf("Pontos Turísticos: Carta Ganhadora (%d)\n", ComparaçãoPontos);
    printf("Densidade Populacional: Carta Ganhadora (%.f)\n", ComparaçãoDensidade);
    printf("PIB per Capita: Carta Ganhadora (%.f)\n", ComparaçãoPIBperCapita);
}
//Carta 1:
//Estado: A
//Código: A01
//Nome da Cidade: São Paulo
//População: 12325000
//Área: 1521.11 km²
//PIB: 699.28 bilhões de reais
//Número de Pontos Turísticos: 50
//Densidade Populacional: 8102.47 hab/km²
//PIB per Capita: 56724.32 reais

//Carta 2:
//Estado: B
//Código: B02
//Nome da Cidade: Rio de Janeiro
//População: 6748000
//Área: 1200.25 km²
//PIB: 300.50 bilhões de reais
//Número de Pontos Turísticos: 30
//Densidade Populacional: 5622.24 hab/km²
//PIB per Capita: 44532.91 reais