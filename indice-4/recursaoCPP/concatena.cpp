#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){

    vector<int> x = { 2, 2, 3 };
    vector<int> y = { 4, 5, 7 };
    vector<int> v(x);

    v.insert(v.end(), y.begin(), y.end());
    v.clear();
 
    v.insert(v.begin(), x.begin(), x.end());
    v.insert(v.end(), y.begin(), y.end());
    
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
 
    return 0;
}

