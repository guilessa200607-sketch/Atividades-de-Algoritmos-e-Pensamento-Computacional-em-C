/*
 * Aula 08 - Exercício 02
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include <locale.h>
#define TAM 8

int main()
{
    setlocale(LC_CTYPE, "");
    int i, contador = 0;
    float valores[TAM], soma = 0, media;

    for(i=0; i<TAM; i++){
        printf("Digite o %dº valor: ", (i+1));
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma/TAM;

    for(i=0; i<TAM; i++){
        if(valores[i] > media)
            contador++;
    }

    printf("Média: %.2f\n", media);
    printf("Valores acima da média: %d\n", contador);
    return 0;
}
