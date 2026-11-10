/*
 * Aula 04 - Exercício 04
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso, altura, imc;

    printf("Qual é o peso da pessoa em kg\n");
    scanf("%f", &peso);
    printf("Qual é a altura da pessoa em metros\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc  < 20.0)
    {
        printf("Voce esta na categoria abaixo do peso, conforme a tabela \n");
    } else if (imc < 25.0)
    {
        printf("Voce esta na categoria peso normal, conforme a tabela \n");
    } else if( imc < 30)
    {
        printf("Voce esta na categoria sobrepeso, conforme a tabela \n");
    } else if (imc <40)
    {
        printf("Voce esta na categoria obeso, conforme a tabela \n");
    }
    else
    {
        printf("Voce esta na categoria obeso morbido, conforme a tabela \n");
    }

    return 0;
}
