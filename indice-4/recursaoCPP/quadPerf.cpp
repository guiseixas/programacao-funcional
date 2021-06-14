#include <iostream>
using namespace std;
 
bool quadradoperfeito(int n){
    for(int i = 1; i * i <= n; i++){
        if ((n / i == i) && (n % i == 0)){
            return true;
        }
    }
    return false;
}

int main()
{
    int n; //Lendo o valor.
    cin >> n;

    if(quadradoperfeito(n)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    return 0;
}