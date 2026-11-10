/*
 * Aula 04 - Exercício 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
        return 0;
    }

    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("As raizes da equação são: \n");
    printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);

    return 0;
}
