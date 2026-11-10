/*
 * Aula 09 - Exercício 01
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autor: Guilherme Machado Lessa Silva
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");
    int i, num;

    arquivo = fopen("tabuada.txt", "a");

    if(arquivo ==NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(i=0; i<11; i++){
        fprintf(arquivo, "%d * %d = %d\n", num, i, (num*i));
    }
    printf("Arquivo criado com sucesso\n");
    fclose(arquivo);
    return 0;
}
