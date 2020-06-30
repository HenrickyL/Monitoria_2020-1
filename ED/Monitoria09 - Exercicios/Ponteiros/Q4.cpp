#include <iostream>
using namespace std;

void MAX(int** M, int n, int* k,int* l, int* c){
	// definir o maior elemento  / parametros iniciais
	*k = M[0][0]; 
	*l = 0;
	*c = 0;
	///////////////////////
	for(int i=0; i< n; i++){
		for(int j = 0; j<n ; j++){
			if(*k < M[i][j] ){
				*k = M[i][j];
				*l = i;
				*c = j;
			}
		}
	}


}

void printM(int** M, int n){
	cout << "\n";
	for(int i = 0 ; i< n ; i++){
		//int * v = M[i];
		for(int j=0; j<n; j ++){
			cout << M[i][j] << " ";
		} cout << "\n";
	}
}
void deleteM(int** M, int n){
	for(int i = 0 ; i< n ; i++){
		delete[] M[i]; // deletando os vetores de inteiros
	}//deletei todos
	//agora deleto o vetor de ponteiros
	delete[] M;
	cout<< "Matriz deletada!\n";
}

int main(){
	cout<< "Entre com o tamanho da matriz nxn: ";
	int n;
	cin >> n;
	cout << "Digite os elementos da matriz:\n";
	//criando a matriz
	 
	int** M =  new int*[n];// ponteiro para um ponteiro de inteiros
		// ponteiros para vetores, ou vetor de ponteiros, vetor de vetor
	//receber os valores
	
	for(int i = 0 ; i< n ; i++){
		int * v = new int[n];
		for(int j=0; j<n; j ++){
			cin >> v[j];
		}M[i] = v; // guardando o ponteiro v em M (vetor de ponteiros)
	}

	printM(M,n);
	int k,l,c;

	MAX(M,n, &k,&l,&c);

	cout << "O maior elemento da matriz é " << k << " na posição \ni: "<< l << "\nj: " << c <<"\n";




	deleteM(M,n);
	return 0;
}
