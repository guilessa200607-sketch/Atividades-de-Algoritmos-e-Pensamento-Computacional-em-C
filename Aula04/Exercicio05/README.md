# Aula 04 - Exercício 05

## Objetivo

Praticar a leitura de **caractere** e a escolha entre opções com `if` / `else if`.

## Descrição da solução

O programa mostra os tipos de quarto da Hospedagem Anália (simples, duplo e triplo), lê a opção (maiúscula ou minúscula) e a quantidade de diárias, e exibe o total a pagar: R$ 300, R$ 450 ou R$ 600 por diária, respectivamente.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- Se a opção digitada não for S, D ou T, o programa não exibe nenhum total.
- Correções feitas em relação ao rascunho original: `scanf` de inteiro com `%f` (agora `%d`), comparação `opcao == "D"` (agora `'D'`), formato `R$.2d` sem `%` e erros de digitação nas mensagens.
