# Aula 03 - Exercício 04

## Objetivo

Praticar **conversão de tipos** (`cast`) e fórmulas com números inteiros e reais.

## Descrição da solução

O programa lê a potência do aparelho (em watts) e as horas de uso por dia e calcula o consumo mensal em kWh, pela fórmula `potência * horas * 30 / 1000`. O `cast` para `float` evita que a divisão seja feita só com inteiros.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- O mês é considerado com 30 dias.
- A potência e as horas devem ser números inteiros.
