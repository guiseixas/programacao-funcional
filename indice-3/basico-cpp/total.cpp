#include <iostream>
using namespace std;

int main(){
    
    int n, tamanho_vetor=0;
    cin >> n; //Tamanho do vetor.
    
    int vetor[n];
    
    for(int i=0; i < n; i++){
        cin >> vetor[i];    
    }
    
    //Tamanho do vetor como requisitado.
    for(int i=0; i < n; i++){
        vetor[i] = 1;    
    }
    
    //Tamanho do vetor como requisitado.
    for(int i=0; i < n; i++){
        if(vetor[i] == 1){
            tamanho_vetor = tamanho_vetor + vetor[i];
        }
    }
    
    cout << tamanho_vetor << endl;
   
    return 0;
}