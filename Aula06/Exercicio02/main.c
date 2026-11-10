/*
 * Aula 06 - Exercício 02
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
    float nota, soma = 0, maior = 0;
    int i, j;

    for(i = 1; i <= 5; i++){
        printf("Digite a nota do %dº estudante: ", i);
        scanf("%19s", entrada);

        for(j = 0; entrada[j] != '\0'; j++){
            if(entrada[j] == ','){
                entrada[j] = '.';
            }
        }

        nota = atof(entrada);

        soma = soma + nota;

        if(i == 1 || nota > maior){
            maior = nota;
        }
    }

    printf("\nMedia da turma: %.2f", soma / 5);
    printf("\nMaior nota: %.2f", maior);

    printf("\nAgora terminou!!! A media foi: %.2f ", soma / 5);

    return 0;
}
