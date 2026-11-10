# Aula 08 - Exemplo 01

## Objetivo

Praticar **vetores** e o cálculo de estatísticas simples (média, maior valor e contagem).

## Descrição da solução

O programa lê o salário de 10 funcionários em um vetor. Depois calcula a média salarial, o maior salário e a quantidade de salários acima da média, exibindo os três resultados.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- O maior salário começa com o valor da primeira posição do vetor, o que funciona mesmo se todos os salários forem baixos.
- Os salários usam **ponto** como separador decimal na digitação.
