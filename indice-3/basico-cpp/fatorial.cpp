#include <iostream>
using namespace std;

int fatorial(int x){
    if(x < 2){
        return 1;
    }else{
        return x * fatorial(x-1);
    }
}

int main(){
    
    int n; //Numero do fatorial.
    cin >> n;
    
    cout << fatorial(n);
    
    return 0;
}