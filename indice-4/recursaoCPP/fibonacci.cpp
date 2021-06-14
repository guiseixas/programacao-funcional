#include <iostream>
using namespace std;

int fibonacci(int value){
    if(value == 0){
        return 0;
    }else if(value < 3){
        return 1;
    }else{
        return fibonacci(value-1) + fibonacci(value-2);
    }
}

int main(){

    int x;
    cin >> x;
    cout << fibonacci(x) << endl;

    return 0;
}