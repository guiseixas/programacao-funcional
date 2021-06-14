#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5 };
 
    reverse(v.begin(), v.end());
    
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
 
    return 0;
}