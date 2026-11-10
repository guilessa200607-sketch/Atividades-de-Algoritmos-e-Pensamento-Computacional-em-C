/*
 * Aula 09 - Exercício 02
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include<locale.h>

int main() {
    int n, i;
    char dia[10];
    float consumo;

    FILE *arq = fopen("consumo.txt", "a"); // "a" = acrescenta sem apagar
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Quantidade de registros: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Dia: ");
        scanf("%9s", dia);
        printf("Consumo: ");
        scanf("%f", &consumo);

        fprintf(arq, "%s %.2f\n", dia, consumo);
    }

    fclose(arq);
    return 0;
}
