#include <iostream>
#include <string.h>
using namespace std;
//receber um inteiro n
//receber n strings (tamanho L e a string Vi)
//Ordenar as strings

void imprime(char **S, int n){
	int i;
	for(i=0;i<n;i++){
		cout<<S[i]<<"\n";
	}
}
int lexico(char* A, char* B){ //retorna 1 0 -1
    //comparar lexicograficamenet, pararecido com numero: se 1<3 1-3=negativo 
    for(int i=0;A[i]|| B[i];i++){
    	if(A[i]>B[i]){ //comparar o tamanho de char's
    		return 1;
    	}else if(A[i]<B[i]){
    		return -1;
    	}
    }return 0;
}

// [1,2,3,4,5]


void ordena(char **S, int n){ //ordenar o vetor
	//usando o metodo de bolha para ordenar
	int i,j;
	for(i=0;i<n;i++){ // completar a ordenação
		for(j=0;j<n-1;j++){// olhar 2 a 2
			if(lexico(S[j],S[j+1]) == 1 ){
				swap(S[j],S[j+1]);//função troca
			}
		}
	}
}

int main(){
	int n,i;
	cin>>n;
	//usando ponteiro para ponteiro, por ser um vetor
		//de strings ou matriz de char
	char **V = new char*[n]; //vetor de strings
	//strings individuais
	int L,Lv[n];

	for( i=0 ; i<n ; i++ ){
		cin>>L; //recebe o tamanho da string
		V[i] = new char[L];
		cin>>V[i]; //não pega espaço
		//cin.getline(V[i],L+1);
	}
	ordena(V,n);
    imprime(V,n);


	//deletando
	for(i=0;i<n;i++)delete V[i];
	delete[] V;

}