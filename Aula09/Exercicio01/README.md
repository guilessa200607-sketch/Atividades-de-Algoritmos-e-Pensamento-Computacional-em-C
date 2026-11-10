# Aula 09 - Exercício 01

## Objetivo

Praticar a **escrita em arquivo de texto** em C, usando `fopen`, `fprintf` e `fclose`.

## Descrição da solução

O programa lê um número inteiro e grava no arquivo `tabuada.txt` a tabuada desse número, de 0 a 10, no formato `N * i = resultado`. O arquivo é aberto no modo `"a"` (acrescenta ao final, sem apagar o conteúdo anterior). Se o arquivo não puder ser criado, o programa exibe uma mensagem de erro e encerra.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- O arquivo `tabuada.txt` é criado na pasta em que o programa é executado.
- Como o modo é `"a"`, executar o programa mais de uma vez acumula várias tabuadas no mesmo arquivo.
- O `tabuada.txt` gerado aqui é o arquivo lido pelo [Exercício 03](../Exercicio03/).
