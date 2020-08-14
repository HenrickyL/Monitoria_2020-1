#include <iostream>
using namespace std;

int strLen(char* s){
	int l =0;
	for(int i =0 ; s[i] ;i++)
		l++;

	return l;
}

void strcpy(char *destino, char *origem){
	for( int i=0;  i < strLen(origem); i++){
		//if(i < strLen(origem))
			destino[i] = origem[i];
		// else{
		// 	destino[i] = ' ';
		// }
	}
}



void strPrint(char* s){
	for(int i=0; s[i] !='\0' ; i++){ // enquanto a string não se encerrou
		cout << s[i];
	}cout << "\n";
}

int main(){
	char* s1 = new char[30];
	char* s2 = new char[30];
	cin >> s1;
	cin >> s2;
	
	//char s1[] = {"origem"};
	// char s2[] = {"destino"};
	// char* s = new char[30];
	// cin >> s;
	strPrint(s1);
	strPrint(s2);
	// strPrint(s);
	// cout << strLen(s) << "\n";
	cout << "------------------\n";
	strcpy(s2,s1);
	strPrint(s1);
	strPrint(s2);

	delete[] s1,s2; 
	return 0;
}


