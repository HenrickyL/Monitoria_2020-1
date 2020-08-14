// implementação

#include "aluno.h"

struct Aluno{
        std::string nome;
        int idade;
        float media;
};

void printaAluno(Aluno* a){
        std::cout << "Nome: " << a->nome << "\n";
        std::cout << "Idade: " << a->idade << "\n"; 
        std::cout << "Media: " << a->media << "\n\n";
        
}


Aluno* criaAluno(std::string nome, int idade, float nota){
        Aluno* a = new Aluno;
        a->nome = nome;
        a->idade = idade;
        a->media = nota;
        return a;
}