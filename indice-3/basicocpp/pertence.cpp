#include <iostream>
using namespace std;

bool pertence(int vet[], int v, int n){ //Vetor, valor que quer saber, tamanho do vetor
    for(int i=0; i < n; i++){
        if(vet[i] == v){
            return true;
        }
    }
    return false;
}

int main(){
    
    int n, valor;
    cin >> n; //Tamanho do vetor.
    
    int vetor[n];
    
    for(int i=0; i < n; i++){
        cin >> vetor[i];    
    }
    
    cin >> valor; //Lendo o valor para saber se pertence.
    
    if(pertence(vetor, valor, n)){
        cout << "True" << endl;    
    }else{
        cout << "False" << endl;
    }
   
    return 0;
}