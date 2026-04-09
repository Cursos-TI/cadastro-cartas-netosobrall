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

    printf("Escolha qual atributo deseja comparar: \n");
  printf("1. Nome da Cidade \n");
  printf("2. População \n");
  printf("3. Área \n");
  printf("4. PIB \n");
  printf("5. Pontos Turísticos \n");
  printf("6. Densidade Demográfica \n");
  printf("Selecione uma das Opções: \n");
  scanf("%d", &comparacao);

  switch (comparacao){
  case 1:
    printf("Opção Inválida!!, Apenas para Exibir Informações, Escolha outra.\n");
    break;
    
    case 2:
    printf("Cartas Selecionadas: %s e %s\n", NomedaCidadeA, NomedaCidadeB);
    printf("Atributo Selecionado: População.\n");
    printf("População da Carta 01: %d\n", PopulacaoA);
    printf("População da Carta 02: %d\n", PopulacaoB);
    
    if (PopulacaoA == PopulacaoB){
      printf("As Cartas Empataram no atributo População!\n");
    } else if (PopulacaoB > PopulacaoA){
      printf("A Carta 02 Venceu no Atributo População!\n");
    } else if (PopulacaoA > PopulacaoB){
      printf("A Carta 01 Ganhou no Atributo População!\n");
    }
    break;

    case 3:
    printf("Cartas Selecionadas: %s e %s\n", NomedaCidadeA, NomedaCidadeB);
    printf("Atributo Selecionado: Área.\n");
    printf("Área da Carta 01: %.2f\n", areaA);
    printf("Área da Carta 02: %.2f\n", areaB);
    
    if (areaA == areaB){
      printf("As Cartas Empataram no atributo Área!\n");
    } else if (areaA > areaB){
      printf("A Carta 01 Venceu no Atributo Área!\n");
    } else if (areaA < areaB){
      printf("A Carta 02 Ganhou no Atributo Área!\n");
    }
    break;
    
    case 4:
    printf("Cartas Selecionadas: %s e %s\n", NomedaCidadeA, NomedaCidadeB);
    printf("Atributo Selecionado: PIB.\n");
    printf("PIB da Carta 01: %.2f\n", pibA);
    printf("PIB da Carta 02: %.2f\n", pibB);
    
    if (pibA == pibB){
      printf("As Cartas Empataram no atributo PIB!\n");
    } else if (pibA > pibB){
      printf("A Carta 01 Venceu no Atributo PIB!\n");
    } else if (pibA < pibB){
      printf("A Carta 02 Ganhou no Atributo PIB!\n");
    }
    break;

    case 5:
    printf("Cartas Selecionadas: %s e %s\n", NomedaCidadeA, NomedaCidadeB);
    printf("Atributo Selecionado: Pontos Turísticos.\n");
    printf("Pontos da Carta 01: %d\n", pontosA);
    printf("Pontos da Carta 02: %d\n", pontosB);
    
    if (pontosA == pontosB){
      printf("As Cartas Empataram no atributo Pontos Turísticos!\n");
    } else if (pontosA > pontosB){
      printf("A Carta 01 Venceu no Atributo Pontos Turísticos!\n");
    } else if (pontosA < pontosB){
      printf("A Carta 02 Ganhou no Atributo Pontos Turísticos!\n");
    }
    break;

    case 6:
    printf("Cartas Selecionadas: %s e %s\n", NomedaCidadeA, NomedaCidadeB);
    printf("Atributo Selecionado: Densidade Demográfica.\n");
    printf("Pontos da Carta 01: %.2f\n", DensidadeA);
    printf("Pontos da Carta 02: %.2f\n", DensidadeB);
    
    if (DensidadeA == DensidadeB){
      printf("As Cartas Empataram no atributo Densidade Demográfica!\n");
    } else if (DensidadeA < DensidadeB){
      printf("A Carta 01 Venceu no Atributo Densidade Demográfica!\n");
    } else if (DensidadeA > DensidadeB){
      printf("A Carta 02 Ganhou no Atributo Densidade Demográfica!\n");
    }
    break;
  
  default:
    break;
  }

}