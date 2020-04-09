#include <iostream>

// fibb(n) = fibb(n-1)+fibb(n-2)


int fibb(int n){
	//caso base
	if(n==0) return 0;
	else if(n==1) return 1;
	//recursão
	else return fibb(n-1)+fibb(n-2);	
}


// fat(n) = n*fat(n-1)
// n! = n*(n-1)*(n-2)...1

int fat(int n){
	//caso base
	if(n==0) return 1;
	else if(n==1) return 1;
	else return n*fat(n-1);
}
/*
	"aba" 3 a -> 2
	->  ""  1+0+1++0+1+0


*/



int conta_char_rec(char s[], int n, char c){
	//caso base
		//olhando o primeiro
	if(n==1){
		if( c == s[0]) return 1;
		else return 0;
	}else{ //olhando o ultimo
		//soma nesse return
		if(s[n-1]==c){ // a ultima ser a string que eu quero
			return 1+conta_char_rec(s,n-1,c); 
		}else{ //não ser
			return 0+conta_char_rec(s,n-1,c);
		}
	}
}
// [1,2,3,4,5] 5
// [ , ,,9] 4

//adicionar depois, é so uma ideia
int* aux_triangulo(int V[], int n, int *aux=NULL){ //retorne um vetor n-1 soma dos elemento 2 a 2
	//caso base
	
	if(n==2) return aux;
	else if(aux==NULL){
		int aux[n-1];
	
		else{
			aux[n-2] = v[n-1]+v[n-2];
			return aux_triangulo(V,n-1,aux);
		} 
	}else{
		aux[n-2] = v[n-1]+v[n-2];
		return aux_triangulo(V,n-1,aux);
	}
}
void imprime(int V[], int n){
	cout<<"[";
	for(int i=0;i<n;i++){
		cout<<v[i]<<",";
	}cout<<"]\n";
}



//[1,2,3,4,5] -> [3,5,7,9]
void triangulo(int V[],int n){
	//caso base
	if(n==1) imprime(V,n);
	else{
		int aux[n-1];
		for(int i=0; i<n-1;i++){ //usar o aux_triangulo para deixar 100% recursivo
 			aux[i] = v[i]+v[i+1];
		}
		triangulo(aux,n-1);
		imprime(V,n);
	}

}




int main(){


	return 0;
}