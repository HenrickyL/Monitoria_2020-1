#include <iostream>
using namespace std;
void converte_tempo(int segundos, int *hor, int *min, int *seg){
        *hor = segundos/(60*60); 
        //1.5h -> 90m - >  5400s
        // hor 1 -> 30m
        segundos = segundos%(60*60); //30m

        *min = segundos/60;
        segundos = segundos%60;

        *seg = segundos;
}


int main(){
        int seg;
        cin >>seg;
        int h,m,s;

        converte_tempo(seg,&h,&m,&s);
        cout << "h: "<<h << "\nm: "<<m <<"\ns: "<<s << "\n";
        return 0;
}