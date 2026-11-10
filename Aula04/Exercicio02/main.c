/*
 * Aula 04 - Exercício 02
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6.0) {
        printf("Parabens! Voce foi aprovado: %.2f", media);
    } else if (media >= 3.0) {
        printf("Infelizmente voce foi reprovado com media %.2f", media);
    }

    return 0;
}
