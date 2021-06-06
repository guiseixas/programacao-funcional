#include <iostream>
using namespace std;

bool vetIguais(int a[], int b[], int x){
    for(int i=0; i< x; i++){
        if(a[i] != b[i]){
            return false;    
        }
    }    
    return true;
}

int main(){
    
    int n, contador=0;
    cin >> n; // O indice dos dois vetores.

    int vetor[n];
    int vet[n];
    
    for(int i=0; i < n; i++){
        cin >> vetor[i];
    }
    
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    
    if(vetIguais(vetor, vet, n)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    
    return 0;
}