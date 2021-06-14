#include <iostream>
using namespace std;

int main(){

    int x;
    cin >> x;

    cout << "[ ";
    for(int i=1; i <= x; i++){
        cout << i << " " << -i << " ";
    }
    cout << "] ";

    return 0;
}
