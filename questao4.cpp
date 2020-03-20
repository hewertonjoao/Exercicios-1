#include <iostream>
using namespace std;

int buscaBinaria(int * v, int e, int d , int x){
    int meio;
    if (e <= d){
        meio = (e+d)/2;
        if (v[meio] == x){
            return meio;
        } else {
            if (v[meio] <x){
                return buscaBinaria(v, meio+1, d, x);
            } else {
                return buscaBinaria(v, e, meio-1, x);
            }
        }
    } else {
        return -1;
    }
}
int main(){
    int x, ini = 0, fim = 500, v[fim];
    for (int i=0;i<fim;i++){
        v[i] = i;
    }
    
    cout << " BUSCA BINARIA RECURSIVO " << endl;
    cout << " QUAL O VALOR QUE DESEJA ENCONTRAR? ";
    cin >> x;
    
    cout << buscaBinaria(v,ini,fim,x);
       
    
    
    
}