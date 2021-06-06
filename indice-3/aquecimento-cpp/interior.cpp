#include <iostream>
using namespace std;

int main(){
    
    int n; 
    cin >> n;
    
    int vetor[n];
    for(int i=0; i < n; i++){
        cin >> vetor[i];    
    }
    
    for(int i=1; i < n-1; i++){ //Vetor com tamanho dois imprime espaço vazio.
        cout << vetor[i] << " ";
    }
    
    return 0;
}