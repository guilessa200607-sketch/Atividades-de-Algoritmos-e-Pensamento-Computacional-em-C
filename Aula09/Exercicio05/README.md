# Aula 09 - Exercício 05

## Objetivo

Praticar a **leitura de arquivo com `fscanf`** e o cálculo de totais.

## Descrição da solução

O programa lê o arquivo `vendas.txt`, em que cada linha contém o código e o valor de uma venda. Ao final, exibe a quantidade de vendas, o total vendido e a maior venda.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- Formato de cada linha de `vendas.txt`: `codigo valor` (exemplo: `101 150.50`). Um arquivo de exemplo está incluído nesta pasta.
- O valor usa **ponto** como separador decimal.
- Se o arquivo estiver vazio, o programa exibe quantidade 0 e valores zerados.
