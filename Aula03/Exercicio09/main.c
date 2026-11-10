/*
 * Aula 03 - Exercício 09
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float x1, y1, x2, y2, distancia;

    printf("Digite a coordenada x do 1 ponto: \n");
    scanf("%f", &x1);
    printf("Digite a coordenada y do 1 ponto: \n");
    scanf("%f", &y1);
    printf("Digite a coordenada x do 2 ponto: \n");
    scanf("%f", &x2);
    printf("Digite a coordenada y do 2 ponto: \n");
    scanf("%f", &y2);

     distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos e %.2f\n", distancia);

    return 0;
}
