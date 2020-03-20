#include <iostream>
using namespace std;

struct aluno{
	int matricula;
	char nome[50];
	float media;
}

aluno* insere_aluno(aluno *v, int *n, aluno novo){
	aluno *aux = new aluno[*n+1];
	int i;
	for(i=0;i<*n;i++){ //copia o v para o aux
		aux[i]= v[i];
	}//percorre tudo
	aux[*n]=novo; //vai até n pq o "v" antigo ia até n-1
	*n=*n+1; //altero o tamanho do vetor
	delete[] v;
	return aux;
}
aluno* remove_aluno(aluno *v, int *n, int matricula){
	//percorrer
	for(int i = 0;i<*n;i++){
		if(v[i]->matricula  == matricula){ //quando remove
			v[i] = v[n*-1]; //troco pelo ultimo
			*n=*n-1;
			//realoca
			aluno* aux = new aluno[*n-1];
			for(int j=0;j<*n-1;j++){ //copio antigo para o novo
				aux[j] = v[j];
			}delete[] v;

			return aux;
		}
	}//se não achar a matricula
	return v;
}

int main(){




}