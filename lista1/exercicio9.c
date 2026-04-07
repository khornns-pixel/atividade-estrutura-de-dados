#include <stdio.h>

int ordenar(int *a, int *b, int *c) {
    int temp;

    if(*a > *b) { temp = *a; *a = *b; *b = temp; }
    if(*a > *c) { temp = *a; *a = *c; *c = temp; }
    if(*b > *c) { temp = *b; *b = *c; *c = temp; }

    if(*a == *b && *b == *c)
        return 1;
    return 0;
}

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    int iguais = ordenar(&x, &y, &z);

    printf("%d %d %d\n", x, y, z);
    printf("Iguais? %d\n", iguais);

    return 0;
}
