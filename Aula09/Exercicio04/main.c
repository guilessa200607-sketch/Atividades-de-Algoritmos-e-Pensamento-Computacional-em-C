/*
 * Aula 09 - Exercício 04
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include<locale.h>

int main() {
    char rgm[20];
    float nota, soma = 0, maior = 0;
    int qtd = 0, aprovados = 0;

    FILE *arq = fopen("notas.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fscanf(arq, "%19s %f", rgm, &nota) == 2) {
        qtd++;
        soma += nota;

        if (qtd == 1 || nota > maior) {
            maior = nota;
        }
        if (nota >= 6.0) {
            aprovados++;
        }
    }

    fclose(arq);

    if (qtd == 0) {
        printf("Arquivo vazio!\n");
        return 0;
    }

    printf("Estudantes: %d\n", qtd);
    printf("Média da turma: %.2f\n", soma / qtd);
    printf("Maior nota: %.2f\n", maior);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
