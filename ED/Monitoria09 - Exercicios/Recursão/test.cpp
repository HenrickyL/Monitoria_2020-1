#include <iostream>
using namespace std;

int strLen(char* s){
        int l = 0;
        for (int  i = 0; s[i]; i++)
                l++;
        return l;
}

int conta_char_rec(char s[], int n, char c){
        //caso base: - caso de parada
        if( n == 0 ){
                if(s[0] == c) return 1;
                else return 0;
        }else {
                if(s[n-1] == c ) return 1+ conta_char_rec(s,n-1,c);
                else return  0 + conta_char_rec(s,n-1,c);
        }
}

void strPrint(char* s){
        for(int i = 0; s[i]; i++)
                cout << s[i];
        cout << "\n";
}

int main(){
        char str[102], c;
        cin.get(str, 102);
        cin.ignore();
        cin >> c;
        
        strPrint(str);
        cout << "a string tem: " << conta_char_rec(str,strLen(str),c) 
                                << " " << c << "'s\n";



        return 0;
}