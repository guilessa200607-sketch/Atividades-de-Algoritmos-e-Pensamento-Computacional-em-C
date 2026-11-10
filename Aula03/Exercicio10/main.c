/*
 * Aula 03 - Exercício 10
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float velocidade, angulo_graus, angulo_rad, gravidade, alcance;

    gravidade = 9.8;

    printf("Qual a velocidade inicial (m/s): \n");
    scanf("%f", &velocidade);

    printf("Qual o angulo de lancamento em graus: \n");
    scanf("%f", &angulo_graus);

    angulo_rad = angulo_graus * (3.14159 / 180);

    alcance = (pow(velocidade, 2) * sin(2 * angulo_rad)) / gravidade;

    printf("O alcance horizontal estimado e %.2f metros.\n", alcance);

    return 0;
}
