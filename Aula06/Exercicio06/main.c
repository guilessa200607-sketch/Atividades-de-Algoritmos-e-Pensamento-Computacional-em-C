/*
 * Aula 06 - Exercício 06
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int opcao;
    float total = 0;

    do{
        printf("\nCafeteria Analia\n\n");
        printf("[1] X-Burger (R$ 18,90)\n");
        printf("[2] Batata frita (R$ 9,50)\n");
        printf("[3] Suco (R$ 10,00)\n");
        printf("[4] Pudim (R$ 12,00)\n");
        printf("[5] Sair\n\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            total = total + 18.90;
        } else if(opcao == 2){
            total = total + 9.50;
        } else if(opcao == 3){
            total = total + 10.00;
        } else if(opcao == 4){
            total = total + 12.00;
        }

        if(opcao >= 1 && opcao <= 4){
            printf("Subtotal: R$ %.2f\n", total);
        }

    } while(opcao != 0 && opcao != 5);

    printf("\nTotal do pedido: R$ %.2f", total);

    printf("\nAgora terminou!!! O total foi: %.2f ", total);

    return 0;
}
