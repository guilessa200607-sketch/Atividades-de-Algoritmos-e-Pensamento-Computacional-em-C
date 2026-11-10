/*
 * Aula 08 - Exercício 06
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include <locale.h>
#define TAM 7

int main()
{
    setlocale(LC_CTYPE, "");
    int i, acima = 0;
    float temp[TAM], soma = 0, media, maior, menor;

    for(i=0; i<TAM; i++){
        printf("Digite a temperatura do dia %d: ", (i+1));
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma/TAM;
    maior = temp[0];
    menor = temp[0];

    for(i=0; i<TAM; i++){
        if(temp[i] > maior)
            maior = temp[i];
        if(temp[i] < menor)
            menor = temp[i];
        if(temp[i] > media)
            acima++;
    }

    printf("Média: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", acima);
    return 0;
}
