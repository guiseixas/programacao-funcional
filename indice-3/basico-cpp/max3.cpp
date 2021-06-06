#include <iostream>
using namespace std;

int main(){
    
    int a,b,c;
    
    cin >> a >> b >> c;
 
    if((a >= b) && (b >= c)){
        cout << a << endl; 
    }else if((a >= c) && (c >= b)){
        cout << a << endl; 
    }else if((b >= a) && (a >= c)){
        cout << b << endl;     
    }else if((b >= c) && (c >= a)){
        cout << b << endl;     
    }else if((c >= b) && (b >= a)){
        cout << c << endl;     
    }else if((c >= a) && (a >= b)){
        cout << c << endl;     
    }
    
    return 0;
}