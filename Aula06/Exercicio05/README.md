# Aula 06 - Exercício 05

## Objetivo

Praticar o **laço `do...while`** com mais de uma condição e comparação de textos com `strcmp`.

## Descrição da solução

O programa simula um login: pede o número da conta e a senha, com no máximo 3 tentativas. Se a conta for 12345 e a senha for `123`, o acesso é autorizado; se as 3 tentativas forem usadas sem sucesso, o acesso é bloqueado. Ao final mostra quantas tentativas foram usadas.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- A conta e a senha estão fixas no código apenas para fins didáticos; em um sistema real nunca se guarda senha assim.
- A senha é lida com limite de 9 caracteres.
