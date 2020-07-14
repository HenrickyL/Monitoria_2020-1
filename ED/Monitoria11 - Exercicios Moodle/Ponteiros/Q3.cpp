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


 int main(){
    aluno a;
    int i;
    for (i = 0; i < 3; i++)
       std::cin >> a.nota[i];
    
    // Chame a função 'calcula_media' passando o aluno 'a' por referência.
    calcula_media(&a);
    
    std::cout << std::fixed;
    std::cout << std::setprecision(1) << a.media;
    
    return 0;
 }