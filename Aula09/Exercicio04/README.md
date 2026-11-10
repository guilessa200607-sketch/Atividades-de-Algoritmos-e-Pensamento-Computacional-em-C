# Aula 09 - Exercício 04

## Objetivo

Praticar a **leitura de dados formatados** com `fscanf` e o cálculo de estatísticas a partir de um arquivo.

## Descrição da solução

O programa lê o arquivo `notas.txt`, em que cada linha contém o RGM e a nota de um estudante. Ao final, exibe: quantidade de estudantes, média da turma, maior nota e quantidade de aprovados (nota maior ou igual a 6,0). Se o arquivo estiver vazio, informa `Arquivo vazio!`.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- Formato de cada linha de `notas.txt`: `RGM nota` (exemplo: `47726001 7.5`). Um arquivo de exemplo está incluído nesta pasta.
- A nota usa **ponto** como separador decimal.
- A maior nota é inicializada com a primeira nota lida, o que funciona mesmo se todas as notas forem baixas.
