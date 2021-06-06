#include <iostream>
using namespace std;

int main(){
    
    int n, indice;
    cin >> n; //Tamanho do vetor.
    
    int vetor[n];
    
    for(int i=0; i < n; i++){
        cin >> vetor[i];    
    }
    
    cin >> indice; //Lendo o indice;
    
    if(indice >= 0){
        cout << vetor[indice];
    }else{
        int aux = indice + n;
        cout << vetor[aux];
    }
   
    return 0;
}