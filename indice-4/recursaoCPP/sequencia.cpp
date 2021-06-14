#include <iostream>
#include <vector>
using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    cout << "[ ";
    for(int i=y; i < x+y; i++){
        cout << i << " ";
    }
    cout << "]";
 
    return 0;
}