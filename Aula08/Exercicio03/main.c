/*
 * Aula 08 - Exercício 03
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include <locale.h>
#define TAM 6

int main()
{
    setlocale(LC_CTYPE, "");
    int i, abaixo = 0;
    float salarios[TAM], soma = 0, media, maior;

    for(i=0; i<TAM; i++){
        printf("Digite o salário do %dº funcionário: ", (i+1));
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }

    media = soma/TAM;
    maior = salarios[0];

    for(i=0; i<TAM; i++){
        if(salarios[i] > maior)
            maior = salarios[i];
        if(salarios[i] < media)
            abaixo++;
    }

    printf("Média salarial: R$ %.2f\n", media);
    printf("Maior salário: R$ %.2f\n", maior);
    printf("Salários abaixo da média: %d\n", abaixo);
    return 0;
}
