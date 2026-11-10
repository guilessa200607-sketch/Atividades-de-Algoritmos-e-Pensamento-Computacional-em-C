/*
 * Aula 03 - Exercício 02
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int hora;
    int minutos;
    int totalMinutos;

    printf("Hora? \n");
    scanf("%d",  &hora);

    printf(" Minutos? \n");
    scanf("%d", &minutos);

    totalMinutos = hora * 60 + minutos;

    printf("Ja se passaram %d minutos desde o inicio do dia. \n", totalMinutos);

    return 0;
}
