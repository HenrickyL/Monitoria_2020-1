#include <iostream>
using namespace std;

struct Aluno{
        string nome;
        int idade;
        float media;
        int matricula;
};


void swapName(Aluno* a1, Aluno* a2){
        string aux = a1->nome;
        a1->nome = a2->nome;
        a2->nome = aux;
}

Aluno* criaAluno(/*Aluno* a*/){
        Aluno* a = new Aluno;
        cout << "Nome: ";
        cin >> a->nome;
        cout << "Idade: ";
        cin >> a->idade;
        cout << "Media: ";
        cin >> a->media;
        cout << "Matricula: ";
        cin >> a->matricula;

        return a; 
}
void printaAluno(Aluno* a){
        cout << "Nome: " << a->nome << '\n';
        cout << "Idade: "<< a->idade << "\n";
        cout << "Media: "<< a->media << "\n";
        cout << "Matricula: "<< a->matricula << "\n";
        cout << "===================\n";
}

int main(){
        Aluno* a1 = criaAluno();
        Aluno* a2 = criaAluno();
        cout << "-------------------------\n";
        swapName(a1,a2);

        printaAluno(a1);
        printaAluno(a2);



        delete a1;
        delete a2;
        return 0;
}