/*
 * Aula 02 - Exercício 04
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float massa;
    float aguaMl;
    float aguaLitros;

    printf("Digite a massa corporal (em kg): \n");
    scanf("%f", &massa);

    aguaMl = massa * 35;
    aguaLitros = aguaMl / 1000;

    printf("Quantidade aproximada de agua recomendada por dia: %.2f litros\n", aguaLitros);

    return 0;
}
