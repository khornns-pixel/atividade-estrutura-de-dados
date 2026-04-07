#include <stdio.h>

struct Aluno {
    char nome[30];
    int matricula;
    float media;
};

int main() {
    struct Aluno alunos[10], aprovados[10], reprovados[10];
    int a = 0, r = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%s %d %f", alunos[i].nome, &alunos[i].matricula, &alunos[i].media);

        if(alunos[i].media >= 5)
            aprovados[a++] = alunos[i];
        else
            reprovados[r++] = alunos[i];
    }

    printf("Aprovados:\n");
    for(int i = 0; i < a; i++)
        printf("%s %.2f\n", aprovados[i].nome, aprovados[i].media);

    printf("Reprovados:\n");
    for(int i = 0; i < r; i++)
        printf("%s %.2f\n", reprovados[i].nome, reprovados[i].media);

    return 0;
}
