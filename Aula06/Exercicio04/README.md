# Aula 06 - Exercício 04

## Objetivo

Praticar **laços aninhados** e **validação de entrada** com `while`.

## Descrição da solução

O programa pergunta a quantidade de alunos e lê a nota de cada um. Se a nota estiver fora do intervalo de 0 a 10, mostra `Nota invalida!` e pede para digitar novamente, repetindo até receber um valor válido. Ao final exibe a média da turma.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- Aceita nota com vírgula ou ponto.
- Se a quantidade de alunos for 0, a média não é calculada corretamente (divisão por zero).
