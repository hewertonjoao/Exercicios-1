#include <iostream>

using namespace std;
int TAM = 0;

int **AlocandoMatriz(int m, int n){
  int **v;  
  int   i;    
  v = (int **) calloc (m, sizeof(int *));	
  if (v == NULL) {
     printf ("** Erro: Memoria Insuficiente **");
     return (NULL);
     }
  
  for ( i = 0; i < m; i++ ) {
      v[i] = (int*) calloc (n, sizeof(int));	
      if (v[i] == NULL) {
         printf ("** Erro: Memoria Insuficiente **");
         return (NULL);
         }
      }

    for (int l=0; l<TAM; l++){
        for ( int c=0; c<TAM; c++){
            v[l][c] = rand() % 100;
        }
    }
  return (v); 
}

int main(){
    int **M;
    cout << "Qual o tamanho da matriz? ";
    cin >> TAM;

    M = AlocandoMatriz(TAM,TAM);

    cout << "A matriz criada é essa " << endl;

    for ( int i=0; i<TAM; i++){
        for ( int j=0; j<TAM; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    
    int MenorNumber = 100;
    int x = 0, y = 0;

     for(int i=0;i<TAM;i++){
        for (int j=0; j<TAM;j++){
            if (M[i][j] < MenorNumber){
                MenorNumber = M[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << "A Coordenada X é: " << x+1 << " e a Y é: " << y+1 << " e o menor numero é: " << MenorNumber << endl;

    








}