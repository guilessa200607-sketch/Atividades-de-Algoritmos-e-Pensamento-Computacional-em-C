/*
 * Aula 03 - Exercício 05
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso, altura, imc;

    printf("Qual é o peso da pessoa em kg? \n");
    scanf("%f", &peso);

    printf("Qual e a altura da pessoa em metros? \n");
    scanf("%f",&altura);

    imc = peso / (altura * altura);

    printf(" O Índice de Massa Corporal e %.2f /m2.\n", imc);

    return 0;
}
