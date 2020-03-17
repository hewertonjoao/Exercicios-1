#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "QUAL O TAMANHO DA PIRAMIDE ( SOMENTE NUMEROS IMPAR ) ";
    cin >> n;
    cout << endl;
    cout << "ESSA SERA A PIRAMIDE " << "\n" << endl;

    

    if(n % 2 == 0){

        cout << "O NUMERO É PAR" << endl;

        return 0;

    }

    int cont = n;

    int vetor[n];

    for(int i = 0; i < n; i++){

        vetor[i] = (i + 1);

    }

    for(int j = 0; j < (n/2 + 1); j++){

        for(int m = j; m < cont; m++){

            cout << vetor[m];

        }
        cout << endl;

        for(int a = -1; a < j; a++){

            cout << " ";

        }

        cont--;

    }

    cout << endl;

    return 0;
}


