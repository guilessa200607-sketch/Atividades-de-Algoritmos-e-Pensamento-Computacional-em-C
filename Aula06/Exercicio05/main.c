/*
 * Aula 06 - Exercício 05
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int conta, tentativas = 0, acesso = 0;
    char senha[10];

    do{
        printf("Conta: ");
        scanf("%d", &conta);
        printf("Senha: ");
        scanf("%9s", senha);

        tentativas++;

        if(conta == 12345 && strcmp(senha, "123") == 0){
            acesso = 1;
        }

    } while(!acesso && tentativas < 3);

    if(acesso){
        printf("\nAcesso autorizado.");
    } else {
        printf("\nAcesso bloqueado.");
    }

    printf("\nAgora terminou!!! Tentativas usadas: %d ", tentativas);

    return 0;
}
