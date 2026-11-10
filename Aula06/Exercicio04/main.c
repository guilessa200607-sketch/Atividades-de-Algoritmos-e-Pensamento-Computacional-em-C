/*
 * Aula 06 - Exercício 04
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char entrada[20];
    int qtd, i, j;
    float nota, soma = 0;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    for(i = 1; i <= qtd; i++){
        printf("\nNota %d: ", i);
        scanf("%19s", entrada);

        for(j = 0; entrada[j] != '\0'; j++){
            if(entrada[j] == ','){
                entrada[j] = '.';
            }
        }
        nota = atof(entrada);

        while(nota < 0 || nota > 10){
            printf("Nota invalida!\n");
            printf("Digite novamente: ");
            scanf("%19s", entrada);

            for(j = 0; entrada[j] != '\0'; j++){
                if(entrada[j] == ','){
                    entrada[j] = '.';
                }
            }
            nota = atof(entrada);
        }

        soma = soma + nota;
    }

    printf("\nMedia da turma: %.2f", soma / qtd);

    printf("\nAgora terminou!!! A media foi: %.2f ", soma / qtd);

    return 0;
}
