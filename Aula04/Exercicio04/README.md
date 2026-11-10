# Aula 04 - Exercício 04

## Objetivo

Praticar **faixas de valores** com `if` / `else if` / `else`.

## Descrição da solução

O programa lê o peso (kg) e a altura (m), calcula o IMC (`peso / altura²`) e informa a categoria: abaixo do peso (menor que 20), peso normal (até 25), sobrepeso (até 30), obeso (até 40) e obeso mórbido (40 ou mais).

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- A altura deve ser digitada em metros, com ponto decimal (por exemplo, `1.75`).
- O programa não trata altura igual a 0.
