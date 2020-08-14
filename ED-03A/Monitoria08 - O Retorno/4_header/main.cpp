#include <iostream> // importar
#include "aluno.h"
int main(){

       Aluno *a1 = criaAluno("Henricky", 23, 7.5);
       printaAluno(a1);

       delete a1;
        



        return 0;
}


//analogia
        // int x;  //(.h) header - declarar as nossas funções, variaveis, structs
        // x=10;   //(.cpp)  implementação - implementar as coisas que são "nomeadas" no arquivo header
