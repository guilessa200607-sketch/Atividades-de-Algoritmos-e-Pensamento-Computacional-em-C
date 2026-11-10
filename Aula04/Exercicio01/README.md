# Aula 04 - Exercício 01

## Objetivo

Praticar **expressões matemáticas** e o uso da biblioteca `math.h` (`sqrt`).

## Descrição da solução

O programa lê os coeficientes `a`, `b` e `c` de uma equação do 2º grau, calcula o discriminante `delta = b² - 4ac` e as duas raízes pela fórmula de Bhaskara. Se `delta` for negativo, informa que a equação não possui raízes reais.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra -lm
./programa
```

## Observações importantes

- Para compilar com `math.h` no GCC é preciso incluir `-lm` no comando.
- O programa não trata o caso `a = 0` (que deixa de ser equação do 2º grau).
- Correções feitas em relação ao rascunho original: variável `xl` renomeada para `x1`, `prinf` corrigido para `printf` e acrescentado o tratamento de `delta` negativo.
