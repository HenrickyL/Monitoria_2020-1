#include <iostream>
using namespace std;

struct Aluno{
        std::string nome;
        int idade;
        int matricula;
        float media;
};

void printaAluno(Aluno a){
        cout << "Aluno" << "\n";
        cout << "\tNome: " << a.nome << "\n";
        cout << "\tIdade: " << a.idade << "\n";
        cout << "\tMatricula: " << a.matricula << "\n";
        cout << "\tMedia: " << a.media << "\n";
}
Aluno* criaAluno(string nome, int idade, int matricula, float media = 0){
        Aluno* aluno = new Aluno;
                aluno->nome = nome;
                aluno->idade = idade;
                aluno->matricula = matricula;
                aluno->media = media;
        return aluno;
} 

void mudaNome(Aluno* a, string nome){
        a->nome = nome; //(*a).nome = nome;
        cout << "<Nome Alterado!>\n";
}


int main(){
      Aluno* a1 = criaAluno("Henrique", 23, 749740);
      printaAluno(*a1);
      mudaNome(a1, "Henricky");
      printaAluno(*a1);
      delete a1;


        return 0;
}


//   Aluno a1;
//                 a1.nome = "Henricky";
//                 a1.idade = 23;
//                 a1.matricula = 463828;
//                 a1.media = 7.0;
//         Aluno a2{"Dhemison",19,732964, 4.7};

//         printaAluno(a1);
//         printaAluno(a2);

//         mudaNome(&a2, "Dheymison");
//         printaAluno(a2);

