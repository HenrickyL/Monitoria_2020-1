# Monitoria 05 - Queue


## Estrutura de dados
São formas de Armazenar e Operar sobre dados, onde implementamos algum Tipo Abstrato de Dado(TAD).


**OBS:** Pensando na sua Eficiência e complexidade.

As principais Estruturas vistas na cadeira são:
* Lista Sequêncial
* Lista Encadeada
* Fila
* **Pilha**
* Arvore

## Pilha (stack)
Para implementar uma Pilha precisamos fazer uma TAD, ou seja, um estrutura capaz de Armazenar e Operar sobre esses dados. Uma Pilha é baseada no conceito da, tão cotidiana, Pilha(de pratos, por exemplo), ou seja, uma sequencia de elementos empilhados, onde o primeiro elemento a entrar é o último a sair(FILO).


### Precisamos:
1. Criar uma classe que armazene informações
    * **Variáveis:**
        * **capacity:** Armazena 
        * **topo:** Armazere elemento do topo
        * **vetor:** Vetor para armazenar
2. Pensar em qual tipo queremos implementar
    - Trabalhando com vetor ou nós

3. Criar as operações 
    * **Operações:**
        * adicionar (push)
        * remover (pop)
        * Tamanho
        * Printar elementos
        * Estaá cheia?
        * vazia?
        * Qual o top?
        * ...