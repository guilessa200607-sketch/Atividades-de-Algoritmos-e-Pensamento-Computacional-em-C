# Aula 02 - Exercício 01

## Objetivo

Praticar **constantes**, tipos numéricos e fórmulas com números reais.

## Descrição da solução

O programa lê o raio de uma circunferência e calcula o perímetro pela fórmula `2 * PI * raio`, com `PI = 3.14159`, exibindo o resultado com duas casas decimais.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- No rascunho original `PI` estava declarado como `int`, o que truncava o valor para 3 e gerava resultados errados. Agora é `float`.
- O raio usa **ponto** como separador decimal na digitação.
