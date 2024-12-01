#include <stdio.h>

int main()
{
    float matriz[10][10];
    int l, c, auxl, auxc;
    float f;


    printf("Determine o a quantidade de linhas da matriz (maximo = 10): ");
    scanf("%d", &auxl);
    printf("\n");
    printf("Determine o a quantidade de colunas da matriz (maximo = 10): ");
    scanf("%d", &auxc);
    printf("\n");

    for(l = 0; l < auxl; l++){
        for(c = 0; c < auxc; c++){
            printf("\n matriz[%d][%d] = ", l, c);
            scanf("%f", &matriz[l][c]);
        }
    }

    printf("\n");
    printf("MATRIZ:");
    for (l = 0; l < auxl; l++){
        printf("\n");
    for (c = 0; c < auxc; c++){
    printf("| %f |", matriz[l][c]);
    }
    }

    printf("\n");
    printf("MATRIZ TRANSPOSTA:");

    for (l = 0; l < auxc; l++){
        printf("\n");
    for (c = 0; c < auxl; c++){
    printf("| %f |", matriz[c][l]);
    }
    }
}
