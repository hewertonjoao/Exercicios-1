#include <iostream>
using namespace std;

bool buscaSequencial(int * v , int tam , int y){
    int i;   
    for ( i=0 ; i<tam ; i++ ){
        if (v[i] == y){
            return true;
        }
    }
    return false;
}

void buscaBinaria(int * v , int tam , int y){
    int ini = 0;
    int fim = tam - 1;
    cout << " DENTRO ";

    while (ini <= fim){

        int i = (ini + fim) / 2;
        cout << " Dentro ";

        if (v[i] == y){
            cout << " TEM ";
        }
        else {
            if (v[i] < y){
                ini = i + 1;
            }
            else {
                fim = i - 1;
            }
        }
    }     
    cout << " NAO TEM ";
    
    
}





int main(){
    int tam = 500, i , v[tam], x;
    char escolha = 'x';
    bool ver;
    int ver1;

    for (i=0;i<tam;i++){
        v[i] = i;
    }
    

    cout << " BUSCA SEQUENCIAL E BINARIA "  << endl <<  " INTERATIVA " << endl << endl;
    cout << " QUAL O VALOR QUE DESEJA ENCONTRAR? ";
    cin >> x;
    cout << endl << " EM QUAL BUSCA DESEJA PROCURAR? (0 BUSCA SEQUENCIAL / 1 BUSCA RECURSIVA)" << endl;
    cout << " QUAL OPCAO ";
    cin >> escolha;

    switch (escolha)
    {
    case '0':
        ver = buscaSequencial(v,tam,x);
        if (ver == 0){
            cout << " Nao tem esse valor " << endl;
        }
        else if (ver == 1){
            cout << " Tem esse valor " << endl;
        }  
        break;
    
    case '1':
        buscaBinaria(v,tam,x);
    
    default:
        cout << " NAO TEM ESSA OCPCAO";
        break;
    }
    
     
}

