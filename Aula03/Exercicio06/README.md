# Aula 03 - Exercício 06

## Objetivo

Praticar o uso da biblioteca `math.h` (`ceil`) e a conversão entre `float` e `int`.

## Descrição da solução

O programa lê a largura e o comprimento de uma área (em metros) e o valor de cada caixa de revestimento. Calcula a área total, a quantidade de caixas necessárias (cada caixa cobre 2,5 m², sempre arredondando para cima com `ceil`) e o custo total da compra.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra -lm
./programa
```

## Observações importantes

- Para compilar com `math.h` no GCC é preciso incluir `-lm` no comando.
- Cada caixa cobre 2,5 m², valor fixo no código.
