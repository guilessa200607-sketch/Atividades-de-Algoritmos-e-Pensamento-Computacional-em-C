/*
 * Aula 08 - Desafio 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include <locale.h>
#define PROD 3
#define DIAS 3

int main()
{
    setlocale(LC_CTYPE, "");
    const char *produtos[] = {"café", "coxinha", "bolo"};
    const char *dias_semana[] = {"seg", "ter", "qua"};
    int i, j, total_produto, total_geral = 0;
    int vendas[PROD][DIAS];

    for(i=0; i<PROD; i++){
        for(j=0; j<DIAS; j++){
            printf("Digite a qte de %s vendidos na %s: ", produtos[i], dias_semana[j]);
            scanf("%d", &vendas[i][j]);
        }
    }

    for(i=0; i<PROD; i++){
        total_produto = 0;
        for(j=0; j<DIAS; j++){
            total_produto += vendas[i][j];
        }
        printf("%s: %d unidades\n", produtos[i], total_produto);
        total_geral += total_produto;
    }

    printf("Total geral: %d unidades\n", total_geral);
    return 0;
}
