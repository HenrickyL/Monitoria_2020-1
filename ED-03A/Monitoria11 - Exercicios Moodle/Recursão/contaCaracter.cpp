#include <iostream>
using namespace std;

int countCaracter(char* s, char c, int k=0){
    // vou usar uma variavel de valor padrão para incrementa-la
    // até encontrar o \0

    //caso base:
    if(s[k]=='\0'){
        return 0;
    }
    //chamada da recursão:
    else{
        // verifico se o caracter k da string é o qe estou contando
        if(s[k]==c) return 1 + countCaracter(s,c,k+1);
        else return 0 + countCaracter(s,c,k+1);
    }
}  

int main(){
    char s[102], c;
    //permite receber strings com espaço
    cout << "digite uma string: ";
    cin.get(s, 102);
    cin.ignore();
    cout << "digite um caracter: ";
    cin >> c;

    int qtd = countCaracter(s,c);
    cout << "A string passada tem " << qtd 
            << " caracateres '" << c << "'\n"; 


    return 0;
}