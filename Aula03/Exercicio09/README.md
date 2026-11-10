# Aula 03 - Exercício 09

## Objetivo

Praticar o uso de `sqrt` e `pow` da biblioteca `math.h` em uma fórmula geométrica.

## Descrição da solução

O programa lê as coordenadas (x, y) de dois pontos e calcula a distância entre eles pela fórmula `raiz((x2 - x1)² + (y2 - y1)²)`.

## Como compilar e executar

```bash
gcc main.c -o programa -Wall -Wextra -lm
./programa
```

## Observações importantes

- Para compilar com `math.h` no GCC é preciso incluir `-lm` no comando.
- Faltava `#include<math.h>` no rascunho original, que foi acrescentado.
