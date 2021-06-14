#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int somaVet(int x){
    int soma = 0;
    for(int i = 1; i <= x; i++){
        soma = soma + i;
    }
    return soma;
}
 
int main()
{
    int linha;
    cin >> linha;
    
    cout << "[ ";
    for(int i=1; i <= linha; i++){
        cout << (somaVet(linha-1) + i) << " ";
    }
    cout << "]";

    return 0;
}