#include <iostream>
using namespace std;
int main(){
    
    int n, soma=0;
    cin >> n;
    
    int vetor[n];
    
    for(int i=0; i < n; i++){
        vetor[i] = i;
    }
    
    for(int i=0; i < n; i++){
        if(vetor[i] % 3 == 0 || vetor[i] % 5 == 0){
            soma = soma + vetor[i];    
        }   
    }
    
    cout << soma << endl;
    
    return 0;
}