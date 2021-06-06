#include <iostream>
using namespace std;
int main(){
    
    int n, contador=0;
    cin >> n; //Tamanho do vetor.

    int vetor[n];

    for(int i=0; i < n; i++){ //Leia em uma unica linha.
        cin >> vetor[i];
    }

    for(int i=0; i < n; i++)
    {
        if(vetor[i] < 0)
        {
            contador++;    
        }
    }
    
    cout << contador << endl;
    
    return 0;
}