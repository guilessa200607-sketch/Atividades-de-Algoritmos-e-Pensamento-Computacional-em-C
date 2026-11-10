# Algoritmos e Pensamento Computacional

Repositório pessoal com as atividades práticas da disciplina **Algoritmos e Pensamento Computacional**, todas desenvolvidas em **linguagem C**.

## Identificação

| | |
|---|---|
| **Estudante** | Guilherme Machado Lessa Silva |
| **RGM** | 47726016 |
| **Curso** | Análise e Desenvolvimento de Sistemas (ADS) |
| **Disciplina** | Algoritmos e Pensamento Computacional |
| **Professor** | Marco Sanches |
| **Semestre** | 2º semestre de 2026 |

## Objetivo do repositório

Reunir, de forma organizada e documentada, os exercícios e projetos desenvolvidos ao longo do semestre, registrando a evolução do aprendizado em resolução de problemas, programação em C e boas práticas de versionamento com Git/GitHub.

## Sumário

- [Aula 02](./Aula02/)
  - [Exercício 01](./Aula02/Exercicio01/)
  - [Exercício 02](./Aula02/Exercicio02/)
  - [Exercício 03](./Aula02/Exercicio03/)
  - [Exercício 04](./Aula02/Exercicio04/)
  - [Exercício 05](./Aula02/Exercicio05/)
- [Aula 03](./Aula03/)
  - [Exercício 01](./Aula03/Exercicio01/)
  - [Exercício 02](./Aula03/Exercicio02/)
  - [Exercício 03](./Aula03/Exercicio03/)
  - [Exercício 04](./Aula03/Exercicio04/)
  - [Exercício 05](./Aula03/Exercicio05/)
  - [Exercício 06](./Aula03/Exercicio06/)
  - [Exercício 07](./Aula03/Exercicio07/)
  - [Exercício 08](./Aula03/Exercicio08/)
  - [Exercício 09](./Aula03/Exercicio09/)
  - [Exercício 10](./Aula03/Exercicio10/)
- [Aula 04](./Aula04/)
  - [Exercício 01](./Aula04/Exercicio01/)
  - [Exercício 02](./Aula04/Exercicio02/)
  - [Exercício 03](./Aula04/Exercicio03/)
  - [Exercício 04](./Aula04/Exercicio04/)
  - [Exercício 05](./Aula04/Exercicio05/)
- [Aula 06](./Aula06/)
  - [Exemplo 01](./Aula06/Exemplo01/)
  - [Exercício 01](./Aula06/Exercicio01/)
  - [Exercício 02](./Aula06/Exercicio02/)
  - [Exercício 03](./Aula06/Exercicio03/)
  - [Exercício 04](./Aula06/Exercicio04/)
  - [Exercício 05](./Aula06/Exercicio05/)
  - [Exercício 06](./Aula06/Exercicio06/)
- [Aula 08](./Aula08/)
  - [Exemplo 00](./Aula08/Exemplo00/)
  - [Exemplo 01](./Aula08/Exemplo01/)
  - [Exercício 02](./Aula08/Exercicio02/)
  - [Exercício 03](./Aula08/Exercicio03/)
  - [Exercício 04](./Aula08/Exercicio04/)
  - [Exercício 05](./Aula08/Exercicio05/)
  - [Exercício 06](./Aula08/Exercicio06/)
  - [Ponteiro 01](./Aula08/Ponteiro01/)
  - [Desafio 01](./Aula08/Desafio01/)
- [Aula 09](./Aula09/)
  - [Exercício 01](./Aula09/Exercicio01/)
  - [Exercício 02](./Aula09/Exercicio02/)
  - [Exercício 03](./Aula09/Exercicio03/)
  - [Exercício 04](./Aula09/Exercicio04/)
  - [Exercício 05](./Aula09/Exercicio05/)
  - [Exercício 06](./Aula09/Exercicio06/)

> Novas aulas, exercícios e projetos devem ser adicionados aqui conforme forem desenvolvidos.

## Organização das pastas

```
Algoritmos-e-PC/
├── README.md                  # Este arquivo
├── .gitignore                 # Ignora executáveis e arquivos temporários
├── Aula02/
│   ├── Exercicio01/ ... Exercicio05/
│   └── README.md
├── Aula03/
│   ├── Exercicio01/ ... Exercicio10/
│   └── README.md
├── Aula04/
│   ├── Exercicio01/ ... Exercicio05/
│   └── README.md
├── Aula06/
│   ├── Exemplo01/
│   ├── Exercicio01/ ... Exercicio06/
│   └── README.md
├── Aula08/
│   ├── Exemplo00/ e Exemplo01/
│   ├── Exercicio02/ ... Exercicio06/
│   ├── Ponteiro01/
│   ├── Desafio01/
│   └── README.md
└── Aula09/
    ├── Exercicio01/ ... Exercicio06/
    └── README.md
```

Dentro de cada pasta de atividade há um `README.md` (objetivo, descrição da solução e observações) e o código-fonte `main.c`.

**Padrão de nomenclatura**

- `AulaNN/` – uma pasta para cada aula (ex.: `Aula01`, `Aula02`).
- `ExercicioNN/` – cada exercício dentro da aula correspondente.
- `ProjetoNN/` – cada projeto dentro da aula em que foi proposto.
- Cada atividade contém um `README.md` e o(s) arquivo(s) `.c`; o arquivo principal se chama `main.c`.

## Como compilar e executar

É necessário ter o compilador **GCC** instalado (Windows: [MinGW-w64](https://www.mingw-w64.org/) ou WSL; Linux: `sudo apt install build-essential`; macOS: `xcode-select --install`).

Dentro da pasta da atividade desejada:

```bash
# Compilar
gcc main.c -o programa -Wall -Wextra

# Executar (Linux/macOS)
./programa

# Executar (Windows)
programa.exe
```

Caso a atividade tenha mais de um arquivo `.c`, compile todos juntos:

```bash
gcc *.c -o programa -Wall -Wextra
```

## Boas práticas adotadas

- Commits frequentes e com mensagens descritivas.
- Nomes significativos para arquivos, variáveis e funções.
- Código indentado e comentado quando necessário.
- Documentação de cada atividade em seu próprio `README.md`.
