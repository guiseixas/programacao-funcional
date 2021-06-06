#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    
    int vetor[n];
    
    for(int i=0; i < n; i++){
        cin >> vetor[i];
    }
    
    int valor;
    cin >> valor;
    
    // OS NUMEROS NAO ESTAO SEPARADOS POR VIRGULA A FORMATACAO EM C++ E MUITO ESQUISITA KKKK.
    cout << "(" <<"[";
    for(int i=0; i <= valor; i++){
        cout << vetor[i] << " ";    
    }
    cout << "]"; 
    
    cout << "[";
    for(int i=n-valor-2; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << "]" << ")";
    
    return 0;
}