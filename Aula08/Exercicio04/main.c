/*
 * Aula 08 - Exercício 04
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i, j, total_produto, total_geral = 0;
    int vendas[LIN][COL];

    for(i=0; i<LIN; i++){
        for(j=0; j<COL; j++){
            printf("Digite a qte do %dº produto no %dº dia: ", (i+1), (j+1));
            scanf("%d", &vendas[i][j]);
        }
    }

    for(i=0; i<LIN; i++){
        total_produto = 0;
        for(j=0; j<COL; j++){
            total_produto += vendas[i][j];
        }
        printf("Produto %d: %d unidades\n", (i+1), total_produto);
        total_geral += total_produto;
    }

    printf("Total geral: %d unidades\n", total_geral);
    return 0;
}
