#include <iostream>
using namespace std;

int main(){
    
    int n, soma_Impares=0;
    cin >> n;
    
    int vet[n];
    for(int i=0; i < n; i++){
        cin >> vet[i];
    }
    
    for(int i=0; i < n; i++){
        if(vet[i] % 2 != 0){
            soma_Impares = soma_Impares + vet[i];
        }
    }
    
    cout << soma_Impares << endl;
    
    return 0;
}