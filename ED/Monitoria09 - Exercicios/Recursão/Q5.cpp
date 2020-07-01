#include <iostream>
using namespace std;
// Invert string
int strLen(char* s){
        int l =0;
        for(int  i=0; s[i] ; i++)
                l++;
        return l;
}

void inverte(char* s , int n, int i = 0){
        //caso base:
        if(i >= n){

        } 
        //chamada da recursão
        else{
                char aux = s[i];
                s[i] = s[n-1];
                s[n-1] = aux;
                inverte(s,n-1,i+1);
        }
}

void strPrint(char* s){
        for(int  i=0; s[i] ; i++)
                cout << s[i];
        cout<<'\n';
}

int main(){
        char* s = new char[30];
        cin >> s;
        cout << "==================\n";
        strPrint(s);
        cout << "----------\n";
        inverte(s,strLen(s));
        strPrint(s);

        delete s;
}