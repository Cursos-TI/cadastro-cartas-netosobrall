#include <stdio.h>

int main() {
    int matriz[11][11] = {0};

    // exemplo: adicionando um navio
    //vertical
    matriz[2][1] = 3;
    matriz[2][2] = 3;
    matriz[2][3] = 3;
    //horizontal
    matriz[7][7] = 3;
    matriz[8][7] = 3;
    matriz[9][7] = 3;


    // imprimir letras no topo
    printf("   ");
    for(int j = 0; j < 11; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    

    for(int i = 1; i < 11; i++) {
        printf("%d  ", i); 

        for(int j = 0; j < 11; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
