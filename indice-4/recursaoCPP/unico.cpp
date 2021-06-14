#include <iostream>
#include <vector>
using namespace std;

int main(){

    int u, contador=0;
    cin >> u;

    vector<int> v = {1, 2, 3, 2}; //Defina o vetor aqui.

    for(int i=0; i < v.size(); i++){
        if(v[i] == u){
            contador++;
        }
    }

    if(contador == 1){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    return 0;
}