/*
Considere um conjunto com N elementos distintos. Seja a Combinação Simples destes elementos a quantidade de subconjuntos com P elementos distintos que podemos formar. Note que, em cada subconjunto formado, a ordem não importa. Podemos calcular essa combinação simples da seguinte forma:

Combinação simples = N!/(P!*(N-P)!)

Faça um programa que receba do dispositivo de entrada padrão os valores de N e P e retorne no dispositivo de saída padrão a quantidade de combinações simples possíveis com estes valores. Seu programa deverá fazer uso de uma função (subprograma) para calcular o número fatorial de um determinado número inteiro. Dica: utilize double para cálculo e armazenamento do fatorial, para evitar estouro de memória.

Entradas:

    Dois números inteiros, representando os valores de N e P. Os dois valores serão fornecidos em uma única linha e separados por espaço.

Saídas:

    Um número inteiro indicando a quantidade de combinações simples possíveis.

Exemplo de Entrada:

10 5

Exemplo de Saída:

252

Exemplo de Entrada:

7 2

Exemplo de Saída:

21

Exemplo de Entrada:

3 3

Exemplo de Saída:

1

*/