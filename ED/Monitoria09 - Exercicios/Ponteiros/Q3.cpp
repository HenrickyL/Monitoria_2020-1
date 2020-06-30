#include <iostream>
using namespace std;

//min e max
void mm(int A[], int n, int *min, int *max){
	//pensar no valor inicial de min e max
	*min = A[0];
	*max = A[0];
	//percorrer o vetor
	for(int i =0; i< n; i++){
		//verificação
		if(A[i] < *min ){ // minimo
			*min = A[i]; // se for menor troca
		}else if( A[i] > *max){
			*max = A[i];
		}
	}	
}



int main(){
	int n;
	cout << "Digite o tamanho do vetor:";
	cin >> n ;
	int v[n];
	cout << "Digite os elementos:\n";
	for(int i = 0 ; i<n; i++){
		cin >> v[i];
	}
	int min, max;
	mm(v, n, &min, &max);

	cout << "\nMax: " << max << "\nMin: " << min << "\n";

	return 0;
}
