#include <stdio.h>

int Torre = 0, Rainha = 0, Bispo = 0, Cavalo = 1;

//TORRE
void MovimentoTorre1 (int Casas){
    if (Casas > 0){
        printf("Frente\n");
        MovimentoTorre1(Casas - 1);
    }
}
void MovimentoTorre2 (int Casas){
    if (Casas > 0){
        printf("Trás\n");
        MovimentoTorre2(Casas - 1);
    }
}
void MovimentoTorre3 (int Casas){
    if (Casas > 0){
        printf("Esquerda\n");
        MovimentoTorre2(Casas - 1);
    }
}
void MovimentoTorre4 (int Casas){
    if (Casas > 0){
        printf("Direita\n");
        MovimentoTorre2(Casas - 1);
    }
}

//RAINHA
void MovimentoRainha1 (int Casas){
    if (Casas > 0){
        printf("Frente\n");
        MovimentoRainha1(Casas - 1);
    }
}
void MovimentoRainha2 (int Casas){
    if (Casas > 0){
        printf("Trás\n");
        MovimentoRainha2(Casas - 1);
    }
}
void MovimentoRainha3 (int Casas){
    if (Casas > 0){
        printf("Esquerda\n");
        MovimentoRainha3(Casas - 1);
    }
}
void MovimentoRainha4 (int Casas){
    if (Casas > 0){
        printf("Direita\n");
        MovimentoRainha4(Casas - 1);
    }
}
void MovimentoRainha5 (int Casas){
    if (Casas > 0){
        printf("Esquerda\nFrente\n");
        MovimentoRainha5(Casas - 1);
    }
}
void MovimentoRainha6 (int Casas){
    if (Casas > 0){
        printf("Direita\nFrente\n");
        MovimentoRainha6(Casas - 1);
    }
} 
void MovimentoRainha7 (int Casas){
    if (Casas > 0){
        printf("Esquerda\nTrás\n");
        MovimentoRainha7(Casas - 1);
    }
} 
void MovimentoRainha8 (int Casas){
    if (Casas > 0){
        printf("Direita\nTrás\n");
        MovimentoRainha8(Casas - 1);
    }
} 
 
//BISPO
void MovimentoBispo1 (int Casas){
    if (Casas > 0){
        printf("Esquerda\nFrente\n");
        MovimentoBispo1(Casas - 1);
    }
}
void MovimentoBispo2 (int Casas){
    if (Casas > 0){
        printf("Direita\nFrente\n");
        MovimentoBispo2(Casas - 1);
    }
}
void MovimentoBispo3 (int Casas){
    if (Casas > 0){
        printf("Esquerda\nTrás\n");
        MovimentoBispo3(Casas - 1);
    }
}
void MovimentoBispo4 (int Casas){
    if (Casas > 0){
        printf("Direita\nTrás\n");
        MovimentoBispo4(Casas - 1);
    }
}

//CAVALO
void MovimentoCavalo1 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Trás\n");
        }
        printf("Direita\n");
       }
    }
}
void MovimentoCavalo2 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Trás\n");
        }
        printf("Esquerda\n");
       }
    }
}
void MovimentoCavalo3 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Frente\n");
        }
        printf("Direita\n");
       }
    }
}
void MovimentoCavalo4 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Frente\n");
        }
        printf("Esquerda\n");
       }
    }
}
void MovimentoCavalo5 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Direita\n");
        }
        printf("Frente\n");
       }
    }
}
void MovimentoCavalo6 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Direita\n");
        }
        printf("Trás\n");
       }
    }
}
void MovimentoCavalo7 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Esquerda\n");
        }
        printf("Frente\n");
       }
    }
}
void MovimentoCavalo8 (int Casas){
    if (Casas > 0){
    while (Cavalo--){
        for (int C = 0; C < 2; C++)
        {
            printf("Esquerda\n");
        }
        printf("trás\n");
       }
    }
}

int main(){
    int Torre = 0, Rainha = 0, Bispo = 0, Cavalo = 1;
    char escolhaPeca;
    int escolhaMovimento = 1;

    printf("Bem Vindo ao Jogo de Xadrez!\n");
    printf("Para Começarmos, Selecione a Peça que deseja Mexer.\n");
    printf("T. Torre\n");
    printf("R. Rainha\n");
    printf("B. Bispo\n");
    printf("C. Cavalo\n");
    scanf("%c", &escolhaPeca);


switch (escolhaPeca){
case 'T':
case 't':
    printf("Ótimo, Você Selecionou a Torre, Então agora Selecione o Movimento!\n");
    printf("1. Frente\n");
    printf("2. Trás\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    scanf("%d", &escolhaMovimento);
    
    if (escolhaMovimento == 1)
    {
        MovimentoTorre1(5);
    } else if (escolhaMovimento == 2)
    {
        MovimentoTorre2(5);
    } else if (escolhaMovimento == 3)
    {
        MovimentoTorre3(5);
    } else if (escolhaMovimento == 1)
    {
        MovimentoTorre4(5);
    } else {
        printf("Opção Inválida\n");
    }
    break;


    case 'R':
case 'r':
    printf("Ótimo, Você Selecionou a Rainha, Então agora Selecione o Movimento\n");
    printf("1. Frente\n");
    printf("2. Trás\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    printf("5. Diagonal Esquerda Frente\n");
    printf("6. Diagonal Direita Frente\n");
    printf("7. Diagonal Esquerda Trás\n");
    printf("8. Diagonal Direita Trás\n");
    scanf("%d", &escolhaMovimento);
    
    if (escolhaMovimento == 1)
    {
        MovimentoRainha1(8);
    } else if (escolhaMovimento == 2)
    {
         MovimentoRainha2(8);
    } else if (escolhaMovimento == 3)
    {
         MovimentoRainha3(8);
    } else if (escolhaMovimento == 4)
    {
         MovimentoRainha4(8);
    } else if (escolhaMovimento == 5)
    {
         MovimentoRainha5(8);
    } else if (escolhaMovimento == 6)
    {
         MovimentoRainha6(8);
    } else if (escolhaMovimento == 7)
    {
         MovimentoRainha7(8);
    } else if (escolhaMovimento == 8)
    {
         MovimentoRainha8(8);
    } else {
        printf("Opção Inválida!\n");
    }
    
    break;

    case 'B':
case 'b':
    printf("Ótimo, Você Selecionou o Bispo, Então agora Selecione o Movimento!\n");
    printf("1. Diagonal Esquerda Frente\n");
    printf("2. Diagonal Direita Frente\n");
    printf("3. Diagonal Esquerda Trás\n");
    printf("4. Diagonal Direita Trás\n");
    scanf("%d", &escolhaMovimento);

   if (escolhaMovimento == 1)
    {
        MovimentoBispo1(5);
    } else if (escolhaMovimento == 2)
    {
        MovimentoBispo2(5);
    } else if (escolhaMovimento == 3)
    {
        MovimentoBispo3(5);
    } else if (escolhaMovimento == 4)
    {
        MovimentoBispo4(5);
    } else {
        printf("Opção Inválida\n");
    }
    break;
   


case 'C':
case 'c':
    printf("Ótimo, Você Selecionou o Cavalo, Então agora Selecione o Movimento\n");
    printf("1. Trás e Direita\n");
    printf("2. Trás e Esquerda\n");
    printf("3. Frente e Direita\n");
    printf("4. Frente e Esquerda\n");
    printf("5. Direita e Frente\n");
    printf("6. Direita e Trás\n");
    printf("7. Esquerda e Frente\n");
    printf("8. Esquerda e Trás\n");
scanf("%d", &escolhaMovimento);

if (escolhaMovimento == 1)
{
    MovimentoCavalo1(1);
} else if (escolhaMovimento == 2)
{
    MovimentoCavalo2(1);
} else if (escolhaMovimento == 3)
{
    MovimentoCavalo3(1);
} else if (escolhaMovimento == 4)
{
    MovimentoCavalo4(1);
} else if (escolhaMovimento == 5)
{
    MovimentoCavalo5(1);
} else if (escolhaMovimento == 6)
{
    MovimentoCavalo6(1);
} else if (escolhaMovimento == 7)
{
    MovimentoCavalo7(1);
} else if (escolhaMovimento == 8)
{
    MovimentoCavalo8(1);
} else {
    printf("Opção Inválida!\n");
}


}
printf("Obrigado por jogar!\n");
}   
