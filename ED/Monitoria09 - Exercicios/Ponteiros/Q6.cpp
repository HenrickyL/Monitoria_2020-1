#include <iostream>
using namespace std;

int strcmp(char *str1, char *str2){
	for(int i = 0; str1[i] || str2[i]  ; i++){
		if(str1[i] < str2[i]){
			return -1;
		}else if(str1[i] > str2[i]){
			return 1;
		}
	} return 0;
}


int main(){
	char* str1 = new char[20];
	char* str2 = new char[20];

	cout << "String 1:";
	cin >> str1;
	cout << "String 2:";
	cin >> str2;
	cout << "----------------------------\n";
	cout << ":: "<<strcmp(str1, str2) << "\n";
	
	delete[] str1, str2;
	return 0;
}

