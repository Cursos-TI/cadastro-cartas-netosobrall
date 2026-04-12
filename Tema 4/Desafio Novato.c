#include <stdio.h>
int main(){
    int Torre = 0, Rainha = 0, Bispo = 0;
    char escolhaPeca;
    int escolhaMovimento;

    printf("Bem Vindo ao Jogo de Xadrez!\n");
    printf("Para Começarmos, Selecione a Peça que deseja Mexer.\n");
    printf("T. Torre\n");
    printf("R. Rainha\n");
    printf("B. Bispo\n");
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
        do
        {
            printf("Frente\n");
            Torre++;
        } while (Torre < 5);
        
    } else if (escolhaMovimento == 2)
    {
        do
        {
            printf("Trás\n");
            Torre++;
        } while (Torre < 5);
    } else if (escolhaMovimento == 3)
    {
        do
        {
            printf("Esquerda\n");
            Torre++;
        } while (Torre < 5);
    } else if (escolhaMovimento == 4)
    {
        do
        {
            printf("Direita\n");
            Torre++;
        } while (Torre < 5);
    } else {
        printf("Opção Inválida!\n");
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
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Frente\n");
        }
        
    } else if (escolhaMovimento == 2)
    {
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Trás\n");
        }
        
    } else if (escolhaMovimento == 3)
    {
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Esquerda\n");
        }
        
    } else if (escolhaMovimento == 4)
    {
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Direita\n");
        }
        
    } else if (escolhaMovimento == 5)
    {
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Esquerda, Frente\n");
        }
        
    } else if (escolhaMovimento == 6)
    {
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Direita, Frente\n");
        }
        
    } else if (escolhaMovimento == 7)
    {
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Esquerda, Trás\n");
        }
        
    } else if (escolhaMovimento == 8)
    {
        for (Rainha = 0; Rainha < 8; Rainha++)
        {
            printf("Esquerda, Trás\n");
        }
        
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
    while (Bispo < 5)
    {
        printf("Esquerda, Frente\n");
        Bispo++;
    }
    
} else if (escolhaMovimento == 2)
{
    while (Bispo < 5)
    {
        printf("Direita, Frente\n");
        Bispo++;
    }
    
} else if (escolhaMovimento == 3)
{
    while (Bispo < 5)
    {
        printf("Esquerda, Trás\n");
        Bispo++;
    }
    
}  else if (escolhaMovimento == 4)
{
    while (Bispo < 5)
    {
        printf("Direita, Trás\n");
        Bispo++;
    }
    
} else {
    printf("Opção Inválida!\n");
}
    break;

default:
printf("Opção Inválida\n");
    break;
}

    
}