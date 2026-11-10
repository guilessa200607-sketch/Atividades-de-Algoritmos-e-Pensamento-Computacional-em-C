/*
 * Aula 08 - Exemplo 00
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include <locale.h>
#define TAM 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i;
    float salarios[TAM];

    for(i=0; i<TAM; i++){
        printf("Digite o salário do %dº funcionário: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    for(i=0; i<TAM; i++){
        printf("Funcionário %d: R$ %.2f\n", (i+1), salarios[i]);
    }
    return 0;
}
