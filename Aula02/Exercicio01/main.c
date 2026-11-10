/*
 * Aula 02 - Exercício 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float PI = 3.14159;
    float valor_raio, resultado;
    printf("Qual o valor do raio? ");
    scanf("%f", &valor_raio);
    resultado = 2 * PI * valor_raio;
    printf("O valor do perimetro seria: %.2f", resultado);
    return 0;
}
