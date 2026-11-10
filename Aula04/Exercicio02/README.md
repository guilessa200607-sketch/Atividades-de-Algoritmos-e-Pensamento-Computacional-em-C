# Aula 04 - Exercício 02

## Objetivo

Praticar a **estrutura condicional** `if` / `else if` com cálculo de média.

## Descrição da solução

O programa lê duas notas, calcula a média aritmética e informa o resultado: média maior ou igual a 6,0 é aprovação; média de 3,0 até menos de 6,0 exibe a mensagem de reprovação com a média.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- Atenção: para média **menor que 3,0** o programa não exibe nenhuma mensagem. Conferir com o enunciado se há uma terceira situação (por exemplo, recuperação) a tratar.
- Correções feitas em relação ao rascunho original: `scanf` sem `&`, média sem parênteses (`(nota1 + nota2) / 2`) e estrutura `if` / `else if` com chaves fora do lugar.
