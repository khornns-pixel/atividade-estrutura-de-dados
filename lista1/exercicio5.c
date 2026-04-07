#include <stdio.h>

int main() {
    int v[3], m[3][3];

    for(int i = 0; i < 3; i++) scanf("%d", &v[i]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    printf("Resultado:\n");

    for(int j = 0; j < 3; j++) {
        int soma = 0;
        for(int i = 0; i < 3; i++) {
            soma += v[i] * m[i][j];
        }
        printf("%d ", soma);
    }

    return 0;
}
