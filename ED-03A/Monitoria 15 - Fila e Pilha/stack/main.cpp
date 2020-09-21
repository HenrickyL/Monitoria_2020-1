#include<iostream>
#include "QX_Stack.h"


int strLen(char* s){
    int size=0;
    for(int i=0; s[i];i++){
        size++;
    }
    return size;
}
// x C y

bool formatABC(char* s ){
    int size = strLen(s);
    QX_Stack p(size);
    //percorro minha string e adicionar na minha pilha
    bool x=false,y=false;
    for(int i=0; s[i];i++){
        char c = s[i];
        p.push(c);
    }
    while(!p.isEmpty()){
        char c = p.pop();
        if(x == false && (c =='a'|| c=='b')){
            continue;
        }else if( x==false &&  c=='c' ){
            x = true;
            // p.push(c);
        }else if((c == 'a'||c=='b')){
            y=true;
            // p.push(c);
        }else{
            std::cout << "*\n";
            return false;
        }
            // std::cout << "["<<c<<"]"<<x<<y <<"\n";

   } 
    return x&&y;

    



}


int main(){
//recebo uma string s
    char* s = new char[40];
    std::cin >> s;

    for(int i=0; s[i];i++){
        std::cout<<s[i];
    }  std::cout << "\n";

    std::cout << "ta no formato: "<<formatABC(s)<<"\n";
    delete s;

}