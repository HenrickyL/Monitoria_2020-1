# Monitoria 05 - Queue


## Estrutura de dados
São formas de Armazenar e Operar sobre dados, onde implementamos algum Tipo Abstrato de Dado(TAD).


**OBS:** Pensando na sua Eficiência e complexidade.

As principais Estruturas vistas na cadeira são:
* Lista Sequêncial
* Lista Encadeada
* **Fila**
* Pilha
* Arvore

## Fila (Queue)
Para implementar uma Fila precisamos fazer uma TAD, ou seja, um estrutura capaz de Armazenar e Operar sobre esses dados. Uma Fila é baseada no conceito da tão cotidiana fila, ou seja, uma sequencia de elementos onde a inserção é no final e a retirada é pela inicio.


### Precisamos:
1. Criar uma classe que armazene informações
    * **Variáveis:**
        * **last:** armazena ultimo elemento
        * **first:** Armazere o primeiro elemento
2. Pensar em qual tipo queremos implementar
    Trabalhando com vetor ou nós
3. Criar as operações 
    * **Operações:**
        * Enfileirar (enQueue)
        * Desenfileirar (deQueue)
        * Tamanho
        * Printar elementos
        * vazia?
        * ...