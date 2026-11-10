/*
 * Aula 03 - Exercício 06
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, valor_caixa, area_total, custo_total;
    int qtd_caixas;

    printf("Qual é a largura da area (em metros)? \n");
    scanf("%f", &largura);

    printf("Qual e o comprimento da area em metros? \n");
    scanf("%f", &comprimento);

    printf("Qual e o valor de cada caixa? \n");
    scanf("%f", &valor_caixa);

    area_total = largura * comprimento;
    qtd_caixas = ceil(area_total / 2.5);
    custo_total = qtd_caixas * valor_caixa;

    printf("Area total a ser revisada: %.2f m2\n", area_total);
    printf("Quantidade de caixas necessarias: %d\n", qtd_caixas);
    printf("Custo total de compra: R$ %.2f\n", custo_total);
    return 0;

}
