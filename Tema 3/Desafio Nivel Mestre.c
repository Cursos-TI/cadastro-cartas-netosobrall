#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char EstadoA[3] = "A";
    char CodigoA[3] = "A01";
    char NomedaCidadeA[20] = "São Paulo";
    int PopulacaoA;
    float areaA;
    float pibA;
    int pontosA;
    float DensidadeA;
    float pibpercapitaA;
    
    char EstadoB[3] = "B";
    char CodigoB[3] = "B02";
    char NomedaCidadeB[20] = "Rio de Janeiro";
    int PopulacaoB;
    float areaB;
    float pibB;
    int pontosB;
    float DensidadeB;
    float pibpercapitaB;

    int comparacao;

    int EscolhaCarta1;
    int EscolhaCarta01;
    int EscolhaCarta2;
    int EscolhaCarta02;

    int resultado01;
    int resultado02;
    int resultadoPIB0A;
    int resultadoPIB0B;


    PopulacaoA = 12325000;
    areaA = 1521.11;
    pibA = 699.28;
    pontosA = 50;
    DensidadeA = 8102.47;
    pibpercapitaA = 56724.32;

    PopulacaoB = 6748000;
    areaB = 1200.25;
    pibB = 300.50;
    pontosB = 30;
    DensidadeB = 5622.24;
    pibpercapitaB = 44532.91;

    printf("Bem Vindo Novamente, agora vamos selecionar 2 atributos de cada carta para compararmos com a outra.\n");
    printf("Selecione o 1° Atributo da 1° Carta: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos \n");
    printf("5. Densidade \n");
    printf("6. PIBperCapita \n");
    printf("Faça sua Escolha: \n");
    scanf("%d", &EscolhaCarta1);

    switch (EscolhaCarta1){
    case 1:
        printf("Escolha o outro Atributo: \n");
        printf("1. Área \n");
        printf("2. PIB \n");
        printf("3. Pontos \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta01);

        if (EscolhaCarta01 == 1){ resultado01 = (PopulacaoA + areaA);
            printf("Os Atributos escolhidos foram, População com %d e Área com %.2f = %d\n", PopulacaoA, areaA, resultado01);
        } else if (EscolhaCarta01 == 2){ resultado01 = (PopulacaoA + pibA);
            printf("Os Atributos escolhidos foram, População com %d e PIB com %.2f = %d\n", PopulacaoA, pibA, resultado01);
        } else if (EscolhaCarta01 == 3){ resultado01 = (PopulacaoA + pontosA);
            printf("Os Atributos escolhidos foram, População com %d e Pontos com %d = %d\n", PopulacaoA, pontosA, resultado01);
        } else if (EscolhaCarta01 == 4){ resultado01 = (PopulacaoA + DensidadeA);
            printf("Os Atributos escolhidos foram, População com %d e Densidade com %.2f = %.d\n", PopulacaoA, DensidadeA, resultado01);
        } else if (EscolhaCarta01 == 5){ resultado01 = (PopulacaoA + pibpercapitaA);
            printf("Os Atributos escolhidos foram, População com %d e PIB per Capita com %.2f = %d\n", PopulacaoA, pibpercapitaA, resultado01);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 2:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. PIB \n");
        printf("3. Pontos \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta01);

    if (EscolhaCarta01 == 1){ resultado01 = (areaA + PopulacaoA);
            printf("Os Atributos escolhidos foram, Área com %.2f e População com %d = %d\n", areaA, PopulacaoA, resultado01);
        } else if (EscolhaCarta01 == 2){ resultado01 = (areaA + pibA);
            printf("Os Atributos escolhidos foram, Área com %.2f e PIB com %.2f = %d\n", areaA, pibA, resultado01);
        } else if (EscolhaCarta01 == 3){ resultado01 = (areaA + pontosA);
            printf("Os Atributos escolhidos foram, Área com %.2f e Pontos com %d = %d\n", areaA, pontosA, resultado01);
        } else if (EscolhaCarta01 == 4){ resultado01 = (areaA + DensidadeA);
            printf("Os Atributos escolhidos foram, Área com %.2f e Densidade com %.2f = %.d\n", areaA, DensidadeA, resultado01);
        } else if (EscolhaCarta01 == 5){ resultado01 = (areaA + pibpercapitaA);
            printf("Os Atributos escolhidos foram, Área com %.2f e PIB per Capita com %.2f = %d\n", areaA, pibpercapitaA, resultado01);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 3:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. Pontos \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta01);
        
        if (EscolhaCarta01 == 1){ resultado01 = (pibA + PopulacaoA);
            printf("Os Atributos escolhidos foram, PIB com %.2f e População com %d = %d\n", pibA, PopulacaoA, resultado01);
        } else if (EscolhaCarta01 == 2){ resultado01 = (pibA + areaA);
            printf("Os Atributos escolhidos foram, PIB com %.2f e Área com %.2f = %d\n", pibA, areaA, resultado01);
        } else if (EscolhaCarta01 == 3){ resultado01 = (pibA + pontosA);
            printf("Os Atributos escolhidos foram, PIB com %.2f e Pontos com %d = %d\n", pibA, pontosA, resultado01);
        } else if (EscolhaCarta01 == 4){ resultado01 = (pibA + DensidadeA);
            printf("Os Atributos escolhidos foram, PIB com %.2f e Densidade com %.2f = %.d\n", pibA, DensidadeA, resultado01);
        } else if (EscolhaCarta01 == 5){ resultado01 = (pibA + pibpercapitaA);
            printf("Os Atributos escolhidos foram, PIB com %.2f e PIB per Capita com %.2f = %d\n", pibA, pibpercapitaA, resultado01);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 4:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta01);
        
        if (EscolhaCarta01 == 1){ resultado01 = (pontosA + PopulacaoA);
            printf("Os Atributos escolhidos foram, Pontos com %d e População com %d = %d\n", pontosA, PopulacaoA, resultado01);
        } else if (EscolhaCarta01 == 2){ resultado01 = (pontosA + areaA);
            printf("Os Atributos escolhidos foram, Pontos com %d e Área com %.2f = %d\n", pontosA, areaA, resultado01);
        } else if (EscolhaCarta01 == 3){ resultado01 = (pontosA + pibA);
            printf("Os Atributos escolhidos foram, Pontos com %d e PIB com %.2f = %d\n", pontosA, pibA, resultado01);
        } else if (EscolhaCarta01 == 4){ resultado01 = (pontosA + DensidadeA);
            printf("Os Atributos escolhidos foram, Pontos com %d e Densidade com %.2f = %.d\n", pontosA, DensidadeA, resultado01);
        } else if (EscolhaCarta01 == 5){ resultado01 = (pontosA + pibpercapitaA);
            printf("Os Atributos escolhidos foram, Pontos com %d e PIB per Capita %.2f = %d\n", pontosA, pibpercapitaA, resultado01);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 5:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta01);
        
        if (EscolhaCarta01 == 1){ resultado01 = (DensidadeA + PopulacaoA);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e População com %d = %d\n", DensidadeA, PopulacaoA, resultado01);
        } else if (EscolhaCarta01 == 2){ resultado01 = (DensidadeA + areaA);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e Área com %.2f = %d\n", DensidadeA, areaA, resultado01);
        } else if (EscolhaCarta01 == 3){ resultado01 = (DensidadeA + pibA);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e PIB com %.2f = %d\n", DensidadeA, pibA, resultado01);
        } else if (EscolhaCarta01 == 4){ resultado01 = (DensidadeA + pontosA);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e Pontos com %d = %.d\n", DensidadeA, pontosA, resultado01);
        } else if (EscolhaCarta01 == 5){ resultado01 = (DensidadeA + pibpercapitaA);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e PIB per Capita %.2f = %d\n", DensidadeA, pibpercapitaA, resultado01);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 6:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos \n");
        printf("5. Densidade \n");
        scanf("%d", &EscolhaCarta01);
    
         if (EscolhaCarta01 == 1){ resultado01 = (pibpercapitaA + PopulacaoA);
            printf("Os Atributos escolhidos foram, PIBperCapita com %.2f e População com %d = %d\n", pibpercapitaA, PopulacaoA, resultado01);
        } else if (EscolhaCarta01 == 2){ resultado01 = (pibpercapitaA + areaA);
            printf("Os Atributos escolhidos foram, PIBperCapita com %.2f e Área %.2f = %d\n", pibpercapitaA, areaA, resultado01);
        } else if (EscolhaCarta01 == 3){ resultado01 = (pibpercapitaA + pibA);
            printf("Os Atributos escolhidos foram, PIBperCapita com %.2f e PIB com %.2f = %d\n", pibpercapitaA, pibA, resultado01);
        } else if (EscolhaCarta01 == 4){ resultado01 = (pibpercapitaA + pontosA);
            printf("Os Atributos escolhidos foram, PIBperCapita com %.2f e Pontos com %d = %.d\n", pibpercapitaA, pontosA, resultado01);
        } else if (EscolhaCarta01 == 5){ resultado01 = (pibpercapitaA + DensidadeA);
            printf("Os Atributos escolhidos foram, PIBperCapita com %.2f e Densidade com %.2f = %d\n", pibpercapitaA, DensidadeA, resultado01);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;

        default:
        printf("Opção Inválida!!\n");
        break;
    }
    
    printf("Agora Escolha o 1° Atributo da 2° Carta. \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos \n");
    printf("5. Densidade \n");
    printf("6. PIBperCapita \n");
    printf("Faça sua Escolha: \n");
    scanf("%d", &EscolhaCarta2);

    switch (EscolhaCarta2){
    case 1:
        printf("Escolha o outro Atributo: \n");
        printf("1. Área \n");
        printf("2. PIB \n");
        printf("3. Pontos \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta02);

        if (EscolhaCarta02 == 1){ resultado02 = (PopulacaoB + areaB);
            printf("Os Atributos escolhidos foram, População com %d e Área com %.2f = %d\n", PopulacaoB, areaB, resultado02);
        } else if (EscolhaCarta02 == 2){ resultado02 = (PopulacaoB + pibB);
            printf("Os Atributos escolhidos foram, População com %d e PIB com %.2f = %d\n", PopulacaoB, pibB, resultado02);
        } else if (EscolhaCarta02 == 3){ resultado02 = (PopulacaoB + pontosB);
            printf("Os Atributos escolhidos foram, População com %d e Pontos com %d = %d\n", PopulacaoA, pontosB, resultado02);
        } else if (EscolhaCarta02 == 4){ resultado02 = (PopulacaoB + DensidadeB);
            printf("Os Atributos escolhidos foram, População com %d e Densidade %.2f = %.d\n", PopulacaoB, DensidadeB, resultado02);
        } else if (EscolhaCarta02 == 5){ resultado02 = (PopulacaoB + pibpercapitaB);
            printf("Os Atributos escolhidos foram, População com %d PIB per Capita %.2f = %d\n", PopulacaoB, pibpercapitaB, resultado02);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 2:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. PIB \n");
        printf("3. Pontos \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta01);

    if (EscolhaCarta02 == 1){ resultado02 = (areaB + PopulacaoB);
            printf("Os Atributos escolhidos foram, Área com %.2f e População com %d = %d\n", areaB, PopulacaoB, resultado02);
        } else if (EscolhaCarta02 == 2){ resultado02 = (areaB + pibB);
            printf("Os Atributos escolhidos foram, Área com %.2f e PIB com %.2f = %d\n", areaB, pibB, resultado02);
        } else if (EscolhaCarta02 == 3){ resultado02 = (areaB + pontosB);
            printf("Os Atributos escolhidos foram, Área com %.2f e Pontos com %d = %d\n", areaB, pontosB, resultado02);
        } else if (EscolhaCarta02 == 4){ resultado02 = (areaB + DensidadeB);
            printf("Os Atributos escolhidos foram, Área com %.2f e Densidade com %.2f = %.d\n", areaB, DensidadeB, resultado02);
        } else if (EscolhaCarta02 == 5){ resultado02 = (areaB + pibpercapitaB);
            printf("Os Atributos escolhidos foram, Área com %.2f e PIB per Capita %.2f = %d\n", areaB, pibpercapitaB, resultado02);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 3:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. Pontos \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta02);
        
        if (EscolhaCarta01 == 1){ resultado02 = (pibB + PopulacaoB);
            printf("Os Atributos escolhidos foram, PIB com %.2f e População com %d = %d\n", pibB, PopulacaoB, resultado02);
        } else if (EscolhaCarta02 == 2){ resultado02 = (pibB + areaB);
            printf("Os Atributos escolhidos foram, PIB com %.2f e Área com %.2f = %d\n", pibB, areaB, resultado02);
        } else if (EscolhaCarta02 == 3){ resultado02 = (pibB + pontosB);
            printf("Os Atributos escolhidos foram, PIB com %.2f e Pontos com %d = %d\n", pibB, pontosB, resultado02);
        } else if (EscolhaCarta02 == 4){ resultado02 = (pibB + DensidadeB);
            printf("Os Atributos escolhidos foram, PIB com %.2f e Densidade com %.2f = %.d\n", pibB, DensidadeB, resultado02);
        } else if (EscolhaCarta02 == 5){ resultado02 = (pibB + pibpercapitaB);
            printf("Os Atributos escolhidos foram, PIB com %.2f Pib per Capita com %.2f = %d\n", pibB, pibpercapitaB, resultado02);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 4:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Densidade \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta02);
        
        if (EscolhaCarta02 == 1){ resultado02 = (pontosB + PopulacaoB);
            printf("Os Atributos escolhidos foram, Pontos com %d e População com %d = %d\n", pontosB, PopulacaoB, resultado02);
        } else if (EscolhaCarta02 == 2){ resultado02 = (pontosB + areaB);
            printf("Os Atributos escolhidos foram, Pontos com %d e Área %.2f = %d\n", pontosB, areaB, resultado02);
        } else if (EscolhaCarta02 == 3){ resultado02 = (pontosB + pibB);
            printf("Os Atributos escolhidos foram, Pontos com %d e PIB %.2f = %d\n", pontosB, pibB, resultado02);
        } else if (EscolhaCarta02 == 4){ resultado02 = (pontosB + DensidadeB);
            printf("Os Atributos escolhidos foram, Pontos com %d e Densidade com %.2f = %.d\n", pontosB, DensidadeB, resultado02);
        } else if (EscolhaCarta02 == 5){ resultado02 = (pontosB + pibpercapitaB);
            printf("Os Atributos escolhidos foram, Pontos com %d e PIB per Capita com %.2f = %d\n", pontosB, pibpercapitaB, resultado02);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 5:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos \n");
        printf("5. PIBperCapita \n");
        scanf("%d", &EscolhaCarta02);
        
        if (EscolhaCarta01 == 1){ resultado02 = (DensidadeB + PopulacaoB);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e População com %d = %d\n", DensidadeB, PopulacaoB, resultado02);
        } else if (EscolhaCarta02 == 2){ resultado02 = (DensidadeB + areaB);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e Área com %.2f = %d\n", DensidadeB, areaB, resultado02);
        } else if (EscolhaCarta02 == 3){ resultado02 = (DensidadeB + pibB);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e PIB com %.2f = %d\n", DensidadeB, pibB, resultado02);
        } else if (EscolhaCarta02 == 4){ resultado02 = (DensidadeB + pontosB);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e Pontos com %d = %.d\n", DensidadeB, pontosB, resultado02);
        } else if (EscolhaCarta02 == 5){ resultado02 = (DensidadeB + pibpercapitaB);
            printf("Os Atributos escolhidos foram, Densidade com %.2f e PIB per Capita com %.2f = %d\n", DensidadeB, pibpercapitaB, resultado02);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
    case 6:
        printf("Escolha o outro Atributo: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos \n");
        printf("5. Densidade \n");
        scanf("%d", &EscolhaCarta02);
    
         if (EscolhaCarta02 == 1){ resultado02 = (pibpercapitaB + PopulacaoB);
            printf("Os Atributos escolhidos foram, PIB per Capita com %.2f e População com %d = %d\n", pibpercapitaB, PopulacaoB, resultado02);
        } else if (EscolhaCarta02 == 2){ resultado02 = (pibpercapitaB + areaB);
            printf("Os Atributos escolhidos foram, PIB per Capita com %.2f e Área com %.2f = %d\n", pibpercapitaB, areaB, resultado02);
        } else if (EscolhaCarta02 == 3){ resultado02 = (pibpercapitaB + pibB);
            printf("Os Atributos escolhidos foram, PIB per Capita com %.2f e PIB com %.2f = %d\n", pibpercapitaB, pibB, resultado02);
        } else if (EscolhaCarta02 == 4){ resultado02 = (pibpercapitaB + pontosB);
            printf("Os Atributos escolhidos foram, PIB per Capita com %.2f e Pontos com %d = %.d\n", pibpercapitaB, pontosB, resultado02);
        } else if (EscolhaCarta02 == 5){ resultado02 = (pibpercapitaB + DensidadeB);
            printf("Os Atributos escolhidos foram, PIB per Capita com %.2f e Densidade com %.2f = %d\n", pibpercapitaB, DensidadeB, resultado02);
        } else {
            printf("Opção Inválida! Tente Novamente.\n");
        }
        break;
        default:
        printf("Opção Inválida!!\n");
        break;
    }
    if (resultado01 == resultado02){
        printf("As Cartas Empataram!!\n");
    } else if (resultado01 > resultado02) {
        printf("A Carta 01 Venceu!!\n");
    } else {
        printf("A Carta 02 Venceu!!\n");
    }
            printf("Os Resultados Foram %d Pontos para a Carta 01, e %d Pontos para a Carta 02\n", resultado01, resultado02);
            printf("Obrigado por Jogar!\n");

    
        
    
    

}