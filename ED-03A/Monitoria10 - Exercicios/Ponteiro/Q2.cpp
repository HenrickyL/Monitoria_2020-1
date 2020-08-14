#include <iostream>
using namespace std;
int* copy(int* v, int n){
        int* A = new int[n];
        for(int i = 0; i < n; i++){
                A[i] = v[i];
        }
        return A;
}

void printVetor(int* v, int n){
        for(int i=0;i<n;i++){
                cout<<v[i] << " ";
        }cout << "\n";
}


int main(){
        int n;
        cout << "N: "; 
        cin >> n;
        cout << "Elementos:\n";
        int* v = new int[n];
        for(int i=0;i<n;i++){
                cin>>v[i];
        }

        cout << "--------------------------\n";
        printVetor(v,n);
        int *w = copy(v,n);
        v[0] = -999;
        printVetor(v,n);
        printVetor(w,n);


        delete v;
        delete w;
        return 0;
}