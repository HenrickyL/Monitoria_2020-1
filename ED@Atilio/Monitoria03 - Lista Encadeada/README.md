# Monitoria 03 - Lista Encadeada


## Estrutura de dados
São formas de Armazenar e Operar sobre dados, onde implementamos algum Tipo Abstrato de Dado(TAD).


**OBS:** Pensando na sua Eficiência e complexidade.

As principais Estruturas vistas na cadeira são:
* Lista Sequêncial
* **Lista Encadeada** 
* Fila
* Pilha
* Arvore

## Lista Encadeada
Para implementar uma Lista Encadeada precisamos fazer uma TAD, ou seja, um estrutura capaz de Armazenar e Operar sobre esses dados. Uma lista Encadeada é baseadas em conectar posições unitárias de memória para armazenar nossos dados.

<br>

Existem 4 tipos de Listas Encadeadas:
* Lista Simplesmente Encadeada
* Lista Duplamente Encadeada
* Lista Simplesmente Encadeada Circular
* Lista Duplamente Encadeada Curcular


### Precisamos:
1. Criar uma estrutura nó que armazene informações
    * **Variáveis:**
        * **value:** armazena o valor
        * **next:** Ponteiro para o próximo nó
2. Pensar em qual tipo queremos implementar
3. Criar as operações 
* **Operações:**
    * Adicionar
    * Remover
    * Verificar quantos foram adicionados
    * ...