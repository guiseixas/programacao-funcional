#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int vet[n];
    
    for(int i=0; i < n; i++){
        cin >> vet[i];
    }
    
    int final; //Lendo o numero para printar os elementos.
    cin >> final; 
   
    int aux;
    if(final == 1){
        cout << vet[n-1] << endl;
    }else{
        aux = n - final; 
        for(int i=aux; i < n; i++){
            cout << vet[i] << " ";
        }
    }

    return 0;
}