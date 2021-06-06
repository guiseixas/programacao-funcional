#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int vetor[n];
    for(int i=0; i < n; i++){
        cin >> vetor[i];
    }

    int pos_1, pos_2; //Troca a posição 1 pela 2.
    cin >> pos_1 >> pos_2;

    if(n == 1){
        cout << vetor[0] << endl;
    }

    if(pos_1 >= n && pos_2 >= n){
        cout << "Posicao invalida" << endl;
    }else{
        if(n != 1){
            //Troca.
            int auxiliar = vetor[pos_1];
            vetor[pos_1] = vetor[pos_2];
            vetor[pos_2] = auxiliar;

            for(int i=0; i < n; i++){
                cout << vetor[i] << " ";
            }
        }
    }

    return 0;
}