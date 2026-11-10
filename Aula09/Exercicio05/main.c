/*
 * Aula 09 - Exercício 05
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include<locale.h>

int main() {
    int codigo, qtd = 0;
    float valor, total = 0, maior = 0;

    FILE *arq = fopen("vendas.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fscanf(arq, "%d %f", &codigo, &valor) == 2) {
        qtd++;
        total += valor;

        if (qtd == 1 || valor > maior) {
            maior = valor;
        }
    }

    fclose(arq);

    printf("Quantidade de vendas: %d\n", qtd);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Maior venda: R$ %.2f\n", maior);

    return 0;
}
