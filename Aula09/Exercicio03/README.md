# Aula 09 - Exercício 03

## Objetivo

Praticar a **leitura de arquivo de texto linha a linha** com `fgets`.

## Descrição da solução

O programa abre o arquivo `tabuada.txt` em modo leitura e exibe seu conteúdo na tela, uma linha por vez, até o fim do arquivo. Se o arquivo não existir, mostra uma mensagem de erro e encerra.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra
./programa
```

## Observações importantes

- O arquivo `tabuada.txt` precisa estar na pasta em que o programa é executado. Ele é gerado pelo [Exercício 01](../Exercicio01/); um exemplo (tabuada do 7) já está incluído nesta pasta para facilitar o teste.
- O programa lê linhas de até 99 caracteres.
