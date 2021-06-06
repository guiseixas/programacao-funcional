#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    
    int vetor[n];
    for(int i=0; i < n; i++){
        cin >> vetor[i];
    }
    
    int x, y, xN, yN;
    cin >> x >> y;
    
    if(x < 0){
        xN = x + n;
    }else{
        xN = x;
    }

    if(y < 0){
        yN = y + n;
    }else{
        yN = y;
    }
    
    cout << xN << endl;
    cout << yN << endl;
    
    for(int i=xN; i < yN; i++){
        cout << vetor[i] << " ";
    }
    return 0;
}