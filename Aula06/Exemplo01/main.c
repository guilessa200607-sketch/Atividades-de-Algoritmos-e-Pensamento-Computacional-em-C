/*
 * Aula 06 - Exemplo 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>

int main()
{
    int i, num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    printf("Tabuada do %d", num);

    for(i=0 ; i<=10; i++){
        printf("\n%d * %d = %d", num, i ,(num*i));

    }
    printf("\n Agora terminou!!! O i é igual a: %d ", i);

    return 0;
}
