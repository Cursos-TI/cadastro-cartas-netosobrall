#include <stdio.h>
int main(){
    char EstadoA[3]= "A";
    char CodigoA[3] = "A01";
    char NomedaCidadeA[20] = "São Paulo";
    int PopulacaoA;
    float areaA;
    float pibA;
    int pontosA;
    float DensidadeA;
    float pibpercapitaA;

    PopulacaoA = 12325000;
    areaA = 1521.11;
    pibA = 699.28;
    pontosA = 50;
    DensidadeA = 8102.47;
    pibpercapitaA = 56724.32;
    
    char EstadoB[3] = "B";
    char CodigoB[3] = "B02";
    char NomedaCidadeB[20] = "Rio de Janeiro";
    int PopulacaoB;
    float areaB;
    float pibB;
    int pontosB;
    float DensidadeB;
    float pibpercapitaB;

    PopulacaoB = 6748000;
    areaB = 1200.25;
    pibB = 300.50;
    pontosB = 30;
    DensidadeB = 5622.24;
    pibpercapitaB = 44532.91;

    printf("***Carta 01***\n");

    printf("O Estado da Carta 01 é: %s \n", EstadoA);
    printf("O Codigo da Carta 01 é: A01 \n", CodigoA);
    printf("O Nome da Cidade da Carta 01 é: %s \n", NomedaCidadeA);
    printf("A População da Carta 01 é: %d\n", PopulacaoA);
    printf("A Área da Carta 01 é: %.2f\n", areaA);
    printf("O PIB da Carta 01 é: %.2f\n", pibA);
    printf("Pontos Turísticos da Carta 01: %d\n", pontosA);
    printf("A Densidade da Carta 01 é: %.2f\n", DensidadeA);
    printf("O PIB per Capita da Carta 01 é: %.2f\n", pibpercapitaA);

    printf("***Carta 02***\n");

    printf("O Estado da Carta 02 é: %s\n", EstadoB);
    printf("O Codigo da Carta 02 é: B02\n", CodigoB);
    printf("O Nome da Cidade da Carta 02 é: %s\n", NomedaCidadeB);
    printf("A População da Carta 02 é: %d\n", PopulacaoB);
    printf("A Área da Carta 02 é: %.2f\n", areaB);
    printf("O PIB da Carta 02 é: %.2f\n", pibB);
    printf("Pontos Turísticos da Carta 02: %d\n", pontosB);
    printf("A Densidade da Carta 02 é: %.2f\n", DensidadeB);
    printf("O PIB per Capita da Carta 02 é: %.2f\n", pibpercapitaB);

    if (PopulacaoA > PopulacaoB){
        printf("A Carta 01 Venceu no Quesito População!!\n");
    } else {
        printf("A Carta 02 Venceu no Quesito População!!\n");
    }
    if (DensidadeA < DensidadeB){
        printf("A Carta 01 Venceu no Quesito Densidade!!\n");
    } else {
        printf("A Carta 02 Venceu no Quesito Densidade!!\n");
    }


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
