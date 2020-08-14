#include <iostream>
#include <iomanip> // std::setprecision

struct aluno {
    float nota[3];
    float media;
 };
void calcula_media(aluno *a){
        float aux_media=0;
        for(int i = 0; i < 3; i++){
           aux_media += a->nota[i];
        }a->media = aux_media / 3;
}

void calcula_media_turma(aluno turma[], int n){
        for(int i = 0; i < n; i++){
            calcula_media(&turma[i]);
        }
}


 int main(){
    int n, i, j;
    
    std::cin >> n;
    aluno turma[n];
    
    for (j = 0; j < n; j++)
       for (i = 0; i < 3; i++)
          std::cin >> turma[j].nota[i];
    
    // Chame a função 'calcula_media_turma' passando o vetor de alunos 'turma'.
    calcula_media_turma(turma, n);
    
    for (j = 0; j < n; j++) {
        std::cout << std::fixed;
       std::cout << std::setprecision(1) << turma[j].media << " ";
    }std::cout << "\n"; 
 }