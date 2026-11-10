/*
 * Aula 03 - Exercício 08
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 * 1 + nota2 * 2 + nota3 * 4) / (1 + 2 +4);

    printf("A media ponderada e %.2f\n", media);

    return 0;
}
