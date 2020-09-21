#ifndef QX_TREE_H
#define QX_TREE_H


struct Node; // Cada no eh do tipo Node
// retorna nulo, indicando arvore vazia
Node* bt_emptyTree(); 

// cria no com chave 'key'
Node* bt_create(int key, Node* l, Node* r); 
// arvore enraizada em no esta vazia?
bool bt_empty(Node* node); 
// imprime as chaves da arvore
void bt_print(Node* node); 
// essa chave pertence?
bool bt_contains(Node* node, int key); 
// libera todos os nos alocados
Node* bt_destroy(Node* node); 

Node* bt_dellLeaf(Node* root);

// conta o número de folhas de uma árvore binária.
int bt_countLeaf(Node* node);

#endif