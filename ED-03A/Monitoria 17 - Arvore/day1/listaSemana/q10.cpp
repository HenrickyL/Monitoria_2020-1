#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int strLen(char* s){
    int size=0;
    for(int i=0; s[i] ;i++){
        size++;
    }
    return size;
}

char* invert(char* s){
    int size = strLen(s);
    char* novo = new char[size];
    s[size]=' ';
    int k=0;
    stack<char> Pc;
    
    //adiciono palavras
    for(int i=0; s[i]; i++){
        //verificar os espaços
        if(s[i]!=' '){
            Pc.push(s[i]);
            // cout<<s[i]<<",";
            
        }else{
            // cout<<"*\n";
            while(!Pc.empty()){
                novo[k] = Pc.top();
                Pc.pop();
                k++;
            }
            novo[k]=' ';
            k++;
        }
    }
    return novo;
    

}





int main(){
    char *s = new char[100];
    // cin.ignore();
    cin.getline(s,100);
    // cout<<">>"<<s<<"\n";
    cout << invert(s)<<"\n";



    delete s;

    return 0;
}