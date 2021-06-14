#include <iostream>
#include <vector>
using namespace std;

int main(){

    int frequencia, contador=0;
    cin >> frequencia;

    vector<int> v = {4, 5, 2, 1, 5, 5, 9}; //Defina o vetor aqui.

    for(int i=0; i < v.size(); i++){
        if(v[i] == frequencia){
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}