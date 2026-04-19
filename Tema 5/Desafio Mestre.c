#include <stdio.h>

#define N 10

int main() {
    int cone[N][N] = {0};
    int cruz[N][N] = {0};
    int losango[N][N] = {0};

    int i, j;

    // CONE
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (j >= (N/2 - i) && j <= (N/2 + i)) {
                cone[i][j] = 3;
            }
        }
    }

    // CRUZ
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == N/2 || j == N/2) {
                cruz[i][j] = 3;
            }
        }
    }

    // LOSANGO
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if ((i + j >= N/2) &&
                (i + j <= (3*N)/2) &&
                (j - i <= N/2) &&
                (i - j <= N/2)) {
                losango[i][j] = 3;
            }
        }
    }

    //EXIBIR

    printf("CONE:\n");
    printf("   ");
    for(int j = 0; j < N; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    

    for(int i = 1; i < N; i++) {
        printf("%d  ", i); 
        for(int j = 0; j < N; j++) {
            printf("%d ", cone[i][j]);
        }

        printf("\n");
}

    
printf("CRUZ:\n");
printf("   ");
    for(int j = 0; j < N; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");
    for(int i = 1; i < N; i++) {
        printf("%d  ", i); 
        for(int j = 0; j < N; j++) {
            printf("%d ", cruz[i][j]);
        }

        printf("\n");
}

    printf("LOSANGO:\n");
    printf("   ");
    for(int j = 0; j < N; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");
    for( i = 1; i < N; i++) {
        printf("%d  ", i); 
        for( j = 0; j < N; j++) {
            printf("%d ", losango[i][j]);
        }

        printf("\n");
}

    return 0;
}
