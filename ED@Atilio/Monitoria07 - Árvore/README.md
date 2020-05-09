# Monitoria 07 - Binary Tree


## Estrutura de dados
São formas de Armazenar e Operar sobre dados, onde implementamos algum Tipo Abstrato de Dado(TAD).


**OBS:** Pensando na sua Eficiência e complexidade.

As principais Estruturas vistas na cadeira são:
* Lista Sequêncial
* Lista Encadeada
* Fila
* Pilha
* **Árvore Binária**

## Pilha (stack)
Para implementar uma Árvore Binária precisamos fazer uma TAD, ou seja, um estrutura capaz de Armazenar e Operar sobre esses dados. Uma Arvore Binária é baseada no conceito de uma arvore que nos conhecemos, onde apartir de um nó ele se ramifica em dois e esses dois ramificam em mais dois e assim por diante até chegar nas folhas.

* Definição: (recursiva) Um arvore **T** é construida:
    * de uma estrutura vazia
    * ou um elemento (nó) do tipo **T** chamado raiz com um número finito de arvores do tipo **T** associadas.

### Precisamos:
1. Separar as variáveis e pensar em uma forma de implementar
    * **Variáveis:**
        * **root:** a raiz da arvore(ou o nó de uma sub arvore)
        * **left:** Ponteiro para o nó da Esquerda
        * **right:** Ponteiro para o nó da Direita

2. Criar as operações 
    * **Operações:**
        * adicionar
        * remover
        * Tamanho
        * Printar elementos
        * Um valor pertence a arvore
        * vazia?
        * ...