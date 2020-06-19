//arquivo de definição / cabeçalho

#ifndef QX_TREE_H
#define QX_TREE_H

struct Node;

//sem o uso de classe

//retorna o valor do nó
int tree_nodeValue(Node* no);
//retorna se a arvore está vazia                                                     
bool     tree_isEmpty(Node* root);
//retorna se é folha ou não
bool     tree_isLeaf(Node* root);
//Criar um ponteiro vazio 
Node*  tree_makeEmpty();
//Criar de um nó com base nos filhos(add)
Node*  tree_makeNode(int key, Node* left, Node* right);      
//imprime os nós da arvore                                             
void     tree_print(Node* root);         
//libera os nós da arvore                                              
Node*    tree_clear(Node* root);
// verificar se valor pertence a arvore                                                 
bool     tree_pertein( int key ,Node* root );
//retorna a quantidade de nós que a arvore tem                                
int       tree_qtdNode(Node* root);                      
// adicional ///////////////////////////////////////////////////////////////
//retorna a quantidade de folhas da arvore
int tree_qtdLeaf(Node* root);


#endif
