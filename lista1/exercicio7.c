#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[30];
    char autor[15];
    int ano;
};

int main() {
    struct Livro livros[5];
    char busca[30];

    for(int i = 0; i < 5; i++) {
        scanf("%s %s %d", livros[i].titulo, livros[i].autor, &livros[i].ano);
    }

    printf("Digite o titulo: ");
    scanf("%s", busca);

    for(int i = 0; i < 5; i++) {
        if(strcmp(livros[i].titulo, busca) == 0) {
            printf("%s %s %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
        }
    }

    return 0;
}
