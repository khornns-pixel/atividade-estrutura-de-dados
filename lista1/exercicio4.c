#include <stdio.h>

int main() {
    int m[3][3], identidade[3][3];

    printf("Digite a matriz 3x3:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // identidade
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j)
                identidade[i][j] = 1;
            else
                identidade[i][j] = 0;
        }
    }

    printf("Resultado da multiplicacao:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int soma = 0;
            for(int k = 0; k < 3; k++) {
                soma += m[i][k] * identidade[k][j];
            }
            printf("%d\t", soma);
        }
        printf("\n");
    }

    return 0;
}
