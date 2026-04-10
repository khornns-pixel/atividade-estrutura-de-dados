#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[30];
    char autor[15];
    int ano;
}

int main() {
    struct Livro livros[5];
    char busca[30];

    for(int i = 0; i < 5; i++) {
        printf("Cadastrando livro %d de 5\n", i + 1);
        printf("Digite o Titulo, o Autor e o Ano (separe por espaco): ");
        scanf(" %s %s %d", livros[i].titulo, livros[i].autor, &livros[i].ano);
    }

    printf("\n--- Cadrasto Concluido! ---\n");
    printf("Qual titulo voce quer buscar?");
    scanf(" %s", busca);
     printf("\n--- Resultado da busca ---\n");
    int encontrado = 0;

    for(int i = 0; i < 5; i++) {
        if(strcmp(livros[i].titulo, busca) == 0) 
        {
            printf(" %s %s %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
            encontrado = 1;
        }
    }

    if(!encontrado) printf("Nenhum livro encontrado com esse titulo.\n");
    
    return 0;
}
