/*
 * Aula 09 - Exercício 06
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include <stdio.h>
#include<locale.h>

void cadastrarConsumo() {
    int mes;
    float kwh;

    FILE *arq = fopen("energia.txt", "a"); // acrescenta sem apagar
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("Mês (1-12): ");
    scanf("%d", &mes);
    printf("Consumo (kWh): ");
    scanf("%f", &kwh);

    fprintf(arq, "%d %.2f\n", mes, kwh);
    fclose(arq);

    printf("Consumo cadastrado com sucesso!\n");
}

void exibirRelatorio() {
    int mes, qtd = 0;
    float kwh, total = 0;

    FILE *arq = fopen("energia.txt", "r");
    if (arq == NULL) {
        printf("Nenhum registro encontrado.\n");
        return;
    }

    printf("\n--- Relatório de Consumo ---\n");
    while (fscanf(arq, "%d %f", &mes, &kwh) == 2) {
        printf("Mês %d: %.2f kWh\n", mes, kwh);
        total += kwh;
        qtd++;
    }
    fclose(arq);

    if (qtd == 0) {
        printf("Nenhum registro encontrado.\n");
    } else {
        printf("Total: %.2f kWh\n", total);
        printf("Média mensal: %.2f kWh\n", total / qtd);
    }
}

int main() {
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1- Cadastrar consumo\n");
        printf("2- Exibir relatório\n");
        printf("3- Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarConsumo(); break;
            case 2: exibirRelatorio();  break;
            case 3: printf("Encerrando...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}
