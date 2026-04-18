#include <stdio.h>

int main(){
    //CRIAR TABULEIRO
    int matriz[11][11] = {0};
    

//CRIAR NAVIOS - HORIZONTAL
matriz[3][1] = 3;
matriz[2][2]= 3;
matriz[1][3]= 3;

matriz[3][3]= 3;
matriz[3][4]= 3;
matriz[3][5]= 3;
//VERTICAL
matriz[5][6]= 3;
matriz[6][6]= 3;
matriz[7][6]= 3;

matriz[7][9] = 3;
matriz[8][8] = 3;
matriz[9][7] = 3;

//EXIBIR
printf("   ");
    for(int j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    

    for(int i = 1; i < 11; i++) {
        printf("%d  ", i); 
        for(int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
}
}