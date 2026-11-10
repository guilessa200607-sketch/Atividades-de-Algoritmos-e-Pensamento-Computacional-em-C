/*
 * Aula 08 - Exemplo 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>
#define TAM 10

int main()
{
    setlocale(LC_CTYPE, "");
    int i;
    float salarios[TAM];
    float soma = 0, media, maior_salario;
    int contador = 0;

    for(i=0; i<TAM; i++){
        printf("Digite o salario do funcionário %d: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    for(i=0; i<TAM; i++){
        soma += salarios[i];
    }

    media = soma/TAM;
    maior_salario = salarios[0];
    for(i=0; i<TAM; i++){
        if(salarios[i] > media)
            contador++;
        if(salarios[i]>maior_salario)
            maior_salario=salarios[i];
    }

    printf("Média dos salário: R$ %.2f\n", media);
    printf("Quantidade de salários acima da média: %d\n", contador);
    printf("Maior salário: R$ %.2f\n", maior_salario);
    return 0;
}
