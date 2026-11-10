/*
 * Aula 06 - Exercício 03
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero, soma = 0;

    numero = 1;
    while(numero != 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero != 0 && numero % 2 != 0){
            soma = soma + numero;
        }
    }

    printf("\nSoma dos numeros impares: %d", soma);

    printf("\nAgora terminou!!! A soma foi: %d ", soma);

    return 0;
}
