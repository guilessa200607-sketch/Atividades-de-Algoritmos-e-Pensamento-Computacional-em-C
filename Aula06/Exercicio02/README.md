# Aula 06 - Exercício 02

## Objetivo

Praticar o **laço `for`** com acumulador e busca do maior valor.

## Descrição da solução

O programa lê a nota de 5 estudantes, aceitando vírgula ou ponto como separador decimal. Calcula a média da turma e a maior nota e exibe os dois resultados.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- A maior nota é inicializada com a primeira nota lida (`i == 1`).
- Como as notas são convertidas com `atof`, texto que não seja número é lido como 0.
