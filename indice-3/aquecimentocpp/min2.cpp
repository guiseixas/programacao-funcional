#include <iostream>
using namespace std;

int main(){
    
    int x,y;
    
    cin >> x >> y;
    
    if(x >= y)
    {
        cout << y << endl;     
    }else if(y >= x)
    {
        cout << x << endl;
    }else{
        cout << x << endl;
    }
    
    return 0;
}