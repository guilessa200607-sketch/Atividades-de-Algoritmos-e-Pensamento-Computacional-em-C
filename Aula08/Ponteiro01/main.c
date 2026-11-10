/*
 * Aula 08 - Ponteiro 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>
#define LIN 3
#define COL 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i, j;
    int produtos[LIN][COL];

    for(i=0; i<LIN; i++){
        for(j=0; j<COL; j++){
            printf("Digite a qte do produto %d no dia %d: ", (i+1), (j+1));
            scanf("%d", &produtos[i][j]);
        }
    }


    for(i=0; i<LIN; i++){
        int total = 0;
        for(j=0; j<COL; j++){
            total += produtos[i][j];
        }
        printf("Total do produto %d: %d\n", (i+1), total);
    }

    return 0;
}
