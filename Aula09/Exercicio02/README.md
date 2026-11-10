# Aula 09 - Exercício 02

## Objetivo

Praticar o **cadastro de registros em arquivo de texto**, repetindo a leitura e a gravação com um laço.

## Descrição da solução

O programa pergunta a quantidade de registros e, para cada um, lê o dia (texto de até 9 caracteres) e o consumo (número real). Cada registro é gravado em `consumo.txt` no formato `dia consumo`, com duas casas decimais. O arquivo é aberto no modo `"a"`, então novos registros são acrescentados sem apagar os anteriores.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- O dia deve ser digitado **sem espaços** (por exemplo, `seg`), pois a leitura usa `%9s`.
- A leitura limitada a 9 caracteres evita estouro do vetor `dia`.
