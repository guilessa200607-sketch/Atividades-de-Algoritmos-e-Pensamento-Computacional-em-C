/*
 * Aula 03 - Exercício 03
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int num1;
    int num2;
    int soma;
    int subtracao;
    int multiplicacao;

    printf(" Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf(" Digite o segundo numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);


    return 0;
}
