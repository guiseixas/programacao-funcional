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
    int n;
    cin >> n;
    
    cout << "[ ";
    for(int j=1; j <= n; j++){
        cout << "[ ";
        for(int i=1; i <= j; i++){
            cout << (somaVet(j-1) + i) << " ";
        }
        cout << "]";
    }
    cout << " ]";

    return 0;
}