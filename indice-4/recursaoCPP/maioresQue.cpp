#include <iostream>
#include <vector>
using namespace std;

int main(){

    int maior;
    cin >> maior;

    vector<int> v = {4,6,30,3,15,3,10,7}; //Defina o vetor aqui.

    cout << "[ ";
    for(int i=0; i < v.size(); i++){
        if(maior < v[i]){
            cout << v[i] << " ";
        }
    }
    cout << "]";

    return 0;
}