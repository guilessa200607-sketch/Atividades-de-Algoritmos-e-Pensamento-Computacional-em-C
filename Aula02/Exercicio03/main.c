/*
 * Aula 02 - Exercício 03
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float semanas;
    float dias;
    float meses;

    printf("Qual a quantidade de semanas de gestacao? \n");
    scanf("%f", &semanas);

    dias = semanas * 7;
    meses = dias / 30;

    printf("Tempo de gestacao aproximado: %.2f meses\n", meses);

    return 0;
}
