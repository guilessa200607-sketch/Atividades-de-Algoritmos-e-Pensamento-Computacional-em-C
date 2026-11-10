# Aula 09 - Exercício 06

## Objetivo

Praticar o uso de **funções** e **menu de opções**, combinando escrita e leitura de arquivo.

## Descrição da solução

O programa mostra um menu com três opções: (1) cadastrar o consumo de energia de um mês (mês e kWh), gravado em `energia.txt`; (2) exibir o relatório com todos os meses cadastrados, o total e a média mensal; (3) sair. O cadastro é feito pela função `cadastrarConsumo` e o relatório pela função `exibirRelatorio`, e o menu se repete até o usuário escolher sair.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- O arquivo `energia.txt` é criado na pasta de execução, com uma linha `mes kwh` por cadastro.
- Se ainda não houver registros, o relatório informa `Nenhum registro encontrado.`
- O programa não valida se o mês está entre 1 e 12.
