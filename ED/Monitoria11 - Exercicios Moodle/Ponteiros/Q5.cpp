#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
struct aluno {    
        int matricula;
        char nome[50];
        float media;
 };
 
 aluno le_aluno()
 {
     aluno a;
     cin >> a.matricula;
     cin.ignore(); // lê e descarta o caractere '\n' do buffer 
     cin.get(a.nome, 50);
     cin >> a.media;
     return a;
 }

aluno* insere_aluno(aluno *v, int *n, aluno novo){
        *n += 1;
        if(v == nullptr){
                v = new aluno[*n];
                cout << "criou alocou o vetor com tamanho: "<< *n <<"\n"; 
        }else{
                //realocar
                aluno* aux = new aluno[*n];
                //salva os elementos de v em aux
                for(int i =0; i< *n-1; i++){
                        aux[i] = v[i];
                }delete v;
                cout << "Realocou V[" << *n-1 << "] -> v["
                        <<*n<<"]\n";
                v = aux;
        }
        //salvar no ultimo
        v[*n-1] = novo;
        return v;
}

aluno* remove_aluno(aluno *v, int *n, int matricula){
    for(int i = 0; i < *n; i++){
            //busca pela matricula
        if(v[i].matricula == matricula){
                //troco o ultimo com a posição que encontrei
                cout << "remoção do(a) Aluno(a): "<<v[i].nome <<"\n";
                v[i] = v[*n-1];
                *n = *n - 1; //diminuo o tamanho
                //realoco
                aluno* aux; //crio o vetor que vai ser retornado
                aux = new aluno[*n]; 
                for (int j = 0; j < *n; j++){
                        aux[j] = v[j];
                }delete[] v;
                return aux;
        }
    }return v;
    
}

int main()
 {
    int num_oper = 0, i, n = 0;
    cin >> num_oper;
    aluno *v = 0;
 
    for (i = 0; i < num_oper; i++) {
       cin.ignore(); // lê e descarta o caractere '\n' do buffer 
       char oper;
       cin >> oper;
       if (oper == 'i') {
          aluno a = le_aluno();
          v = insere_aluno(v, &n, a);
       } else {
          int mat;
          cin >> mat;
          v = remove_aluno(v, &n, mat);
       }
    }
        cout << "---------------------------\n";
    for (i = 0; i < n; i++) {
       cout << v[i].matricula << "\n" << v[i].nome << "\n" << std::fixed << setprecision(1) << v[i].media << "\n";
    }
    
    delete[] v;
    
    return 0;
 }