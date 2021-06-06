#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int vetor[n];
    for(int i=0; i < n; i++){
        cin >> vetor[i];
    }

    cout << "(" << "[";
    for(int i=0; i < n; i++){
        if(vetor[i] % 2 != 0){
            cout << vetor[i] << " ";
        }
    }
    cout << "]" << "," << " " << "[";
    for(int i=0; i < n; i++){
        if(vetor[i] % 2 == 0){
            cout << vetor[i] << " ";
        }
    }
    cout << "]" << ")";

    return 0;
}