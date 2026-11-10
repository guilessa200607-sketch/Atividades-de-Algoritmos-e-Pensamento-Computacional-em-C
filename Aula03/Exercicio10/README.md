# Aula 03 - Exercício 10

## Objetivo

Praticar funções matemáticas (`pow`, `sin`) e conversão de graus para radianos.

## Descrição da solução

O programa lê a velocidade inicial (m/s) e o ângulo de lançamento (graus), converte o ângulo para radianos e calcula o alcance horizontal estimado de um lançamento oblíquo pela fórmula `v² * sen(2θ) / g`, com `g = 9,8 m/s²`.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra -lm
./programa
```

## Observações importantes

- Para compilar com `math.h` no GCC é preciso incluir `-lm` no comando.
- Desconsidera a resistência do ar.
