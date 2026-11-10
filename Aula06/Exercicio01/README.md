# Aula 06 - Exercício 01

## Objetivo

Praticar o **laço `while`** com condição de parada (sentinela) e conversão de texto em número.

## Descrição da solução

O programa lê o CPF do cliente e, em seguida, vários preços de produtos, até o usuário digitar 0. Cada preço é lido como texto, a vírgula é trocada por ponto e o valor é convertido com `atof`, somando ao total da compra. Ao final exibe o CPF e o total da compra.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- Aceita preços com **vírgula ou ponto** (por exemplo, `12,50` ou `12.50`).
- O valor 0 encerra a leitura e não entra na soma.
- O CPF é lido como texto, sem validação do formato.
