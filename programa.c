#include <stdio.h>

int main()
{
    float matriz[3][2];
    int l, c;
    float f;

    for (l = 0; l < 3; l++){
    for (c = 0; c < 2; c++){
    printf("\n matriz[%d][%d] = ", l, c);
    scanf("%f", &matriz[l][c]);
    }
    }

    printf("\n");
    printf("MATRIZ:");
    for (l = 0; l < 3; l++){
        printf("\n");
    for (c = 0; c < 2; c++){
    printf("| %f |", matriz[l][c]);
    }
    }

    printf("\n");
    printf("MATRIZ TRANSPOSTA:");

    for (l = 0; l < 2; l++){
        printf("\n");
    for (c = 0; c < 3; c++){
    printf("| %f |", matriz[c][l]);
    }
    }


}
