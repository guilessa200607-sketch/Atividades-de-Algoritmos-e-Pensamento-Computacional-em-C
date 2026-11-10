/*
 * Aula 06 - Exercício 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char cpf[15];
    char entrada[20];
    float preco, total = 0;
    int i;

    printf("Digite o CPF do cliente: ");
    scanf("%14s", cpf);

    printf("Digite os precos dos produtos (0 para encerrar):\n");

    preco = 1;
    while(preco != 0){
        printf("Preco: ");
        scanf("%19s", entrada);

        for(i = 0; entrada[i] != '\0'; i++){
            if(entrada[i] == ','){
                entrada[i] = '.';
            }
        }

        preco = atof(entrada);

        if(preco != 0){
            total = total + preco;
        }
    }

    printf("\nCPF: %s", cpf);
    printf("\nTotal da compra: R$ %.2f", total);

    printf("\nAgora terminou!!! O total foi: %.2f ", total);

    return 0;
}
