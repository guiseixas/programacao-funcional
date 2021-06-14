#include <iostream>
#include <vector>
using namespace std;

int menorValor(vector<int> v){

	int menor = v[0]; 

    int var;
	for (int i = 1; i < v.size(); i++) 
		if (v[i] < menor){
            menor = v[i]; 
            var = i;
        }
    
	return var; 
}

int main(){

    int menor, min;
    cin >> menor;

    vector<int> v = {6, 2, 3, 4, 9}; //Defina o vetor aqui.

    if(menor == 0){
        cout << "[ ";
        v.clear();
        cout << "]";
    }else if(menor == 1){
        cout << "[ ";
        cout << menorValor(v);
        cout << " ]";
    }else{
        for(int j=0; j < menor; j++){
            cout << v[menorValor(v)] << " ";
            v.erase(v.begin() + menorValor(v));
        }
    } 

    return 0;
}