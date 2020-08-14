 #include <iostream>
 #include <cstdlib>
 #include <cstring>
 using namespace std;
 //[5 4 3 2 1 6]

void print_string(char* s){
        for(int i=0; s[i] ;i++)
                cout << s[i];
        cout<<"\n";
}

 int main(){
        int n,i ,tam;
        cin >> n;
        char* v[n]; // vetor de ponteiros de char
        for(i=0; i< n ; i++){
                cin >> tam; //recebe o tamanho
                v[i] = new(std::nothrow) char[tam+2];
                if (v[i] == nullptr) return 1;
                //este codigo permite receber strings com espaço
                cin.ignore(); // lê e descarta o caractere ' '
                cin.get(v[i], tam+2);
        }
        // 1 Str1 > Str2; -1 str1 < str2; 0 str1 = str2
        //ordenar
        for(i =0;i<n; i++){
                for(int j =0; j<n-1;j++){
                        if(strcmp(v[j],v[j+1]) > 0){
                                char* aux = v[j];
                                v[j] = v[j+1];
                                v[j+1] = aux;
                        }
                }
        }
        //printar
        cout << "-------------------\n";
        for(i =0;i<n; i++){
                print_string(v[i]);
        }

        for(int i = 0; i < n ; i++) delete[] v[i];
        delete[] v;
}