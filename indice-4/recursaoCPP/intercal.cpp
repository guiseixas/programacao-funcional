#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){

    vector<int> x = { 2, 2, 3, 1};
    vector<int> y = { 4, 5, 7};
    vector<int> v;

    if(x.size() == y.size()){
        for(int i=0; i < x.size(); i++){
            v.push_back(x[i]); 
            v.push_back(y[i]);
        }
    }else if(x.size() < y.size()){
        for(int i=0; i < x.size(); i++){
            v.push_back(x[i]); 
            v.push_back(y[i]);
        }
        for(int i=x.size(); i < y.size(); i++){
            v.push_back(y[i]);
        }
    }else{ // x > y
        for(int i=0; i < y.size(); i++){
            v.push_back(x[i]); 
            v.push_back(y[i]);
        }
        for(int i=y.size(); i < x.size(); i++){
            v.push_back(x[i]);
        }
    }

    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
 
    return 0;
}

