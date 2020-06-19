// c++
#include <iostream> // std 
using namespace std;
        // compilar
// g++ main.cpp -o exe 

struct Aluno{
        string nome = "---";
        int idade = 0;
        float media = 0;
        int matricula = 0;
};
Aluno criaAluno( string nome, int idade, float media, int matricula){
        Aluno a ; 

        a.nome = nome;
        a.idade = idade;
        a.media = media;
        a.matricula = matricula;

        return a;
}

void printaAluno(Aluno aluno){
        cout << "\n--------------------------------\n";

        cout << "nome:" << aluno.nome << "\n";
        cout << "idade:" << aluno.idade << "\n";
        cout << "media:" << aluno.media << "\n";
        cout << "matricula:" << aluno.matricula << "\n";

        cout << "--------------------------------\n";
}

void mudaNome( Aluno* a, string novoNome){
        a->nome = novoNome;
        cout << "<Mudou nome>";
}



int main(){
        //struct
        Aluno a1 = criaAluno("Henricky", 23,7,73536);
        printaAluno(a1);
        Aluno * aux = &a1;
        mudaNome(aux,"Carlos");
        printaAluno(a1);




}




// int x = 5;
        // cout << "x = " << x <<"\n" ;
        // cout << "Endereço:" << &x << "\n";
        // int* y =  &x; // aponta para x
        // cout << "y : " << y <<"\n";
        // cout << "valor de y:" << *y << "\n";
        // *y  = 7;// pegando o valor no endereço

        // cout << "x : " << x <<"\ny : " << *y <<"\n";