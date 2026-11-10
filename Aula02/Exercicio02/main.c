/*
 * Aula 02 - Exercício 02
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float comprimento;
    float largura;
    float perimetro;
    float area;

    printf("Qual o comprimento do jardim (m)? \n");
    scanf("%f", &comprimento);

    printf("Qual a largura do jardim (m)? \n");
    scanf("%f", &largura);

    perimetro = 2 * (comprimento + largura);
    area = comprimento * largura;

    printf("O perímetro do jardim seria: %.2f\n", perimetro);
    printf("A área do jardim seria: %.2f\n", area);

    return 0;
}
