# Aula 04 - Exercício 03

## Objetivo

Praticar **condições encadeadas** (`if` / `else if` / `else`) com mais de um critério.

## Descrição da solução

O programa lê a média e a frequência do aluno. Se a frequência for menor que 75%, o aluno é reprovado por falta; caso contrário, se a média for menor que 6, é reprovado por nota; senão, é aprovado.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- A frequência é verificada primeiro: quem tem pouca frequência é reprovado por falta mesmo com média alta.
- A mensagem `Reprovado por noite!` do rascunho foi corrigida para `Reprovado por nota!`.
