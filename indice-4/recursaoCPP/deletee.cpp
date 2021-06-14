#include <iostream>
#include <vector>
using namespace std;

int main(){

    int x;
    cin >> x;

    vector<int> v = {4, 3, 1, 3}; //Defina o vetor aqui.

    for(int i=0; i < v.size(); i++){
        if(v[i] == x){
            v.erase(v.begin() + i);
            break;
        }
    }

    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
   
    return 0;
}