/*
 * Aula 02 - Exercício 05
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota1;
    float nota2;
    float media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
