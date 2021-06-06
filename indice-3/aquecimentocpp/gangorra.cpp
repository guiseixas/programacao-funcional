#include <iostream>
using namespace std;

int main(){
    
    int p_1, c_1, p_2, c_2;
    
    cin >> p_1 >> c_1 >> p_2 >> c_2;
    
    if(p_1 * c_1 == p_2 * c_2)
    {
        cout << 0 << endl;
    }else if(p_1 * c_1 > p_2 * c_2)
    {
        cout << -1 << endl;
    }else{
        cout << 1 << endl;
    }
    
    return 0;
}