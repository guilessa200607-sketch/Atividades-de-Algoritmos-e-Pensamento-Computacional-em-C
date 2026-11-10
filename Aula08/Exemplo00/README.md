# Aula 08 - Exemplo 00

## Objetivo

Praticar o uso de **vetores** (arrays) em C: armazenar e exibir valores lidos do teclado.

## Descrição da solução

O programa lê o salário de 4 funcionários, guarda os valores em um vetor `float salarios[TAM]` (com `TAM` definido por `#define`) e, em seguida, exibe o salário de cada funcionário.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- O tamanho do vetor é controlado pela constante `TAM`; para trabalhar com mais funcionários, basta alterar esse valor.
