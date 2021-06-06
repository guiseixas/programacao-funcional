#include <iostream>
using namespace std;

int main(){
    
    int n;
    int total_True=0;
    cin >> n; //Tamanho do vetor. 
    
    bool vetor[n]; //Vetor de 0's e 1's.
    
    for(int i=0; i < n; i++){  //Digite no vetor valores 0's e 1s para representar false e true respectivamente.
        cin >> vetor[i]; 
    }
    
    for(int i=0; i < n; i++){
        if(vetor[i] == 1){
            total_True = total_True + 1;
        }
    }
  
    if(total_True % 2 != 0){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    
    return 0;
}