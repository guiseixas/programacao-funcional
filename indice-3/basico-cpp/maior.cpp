#include <iostream>
using namespace std;

int main(){
    
    int n, maior=0;
    cin >> n; //Tamanho do vetor.
    
    int vetor[n];
    
    for(int i=0; i < n; i++){
        cin >> vetor[i];    
    }
    
    maior = vetor[0];
    
    for(int i=0; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }   
    }
    
    cout << maior << endl;
   
    return 0;
}