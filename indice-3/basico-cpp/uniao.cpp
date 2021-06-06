#include <iostream>
using namespace std;
 
void unirVetores(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (a[i] < b[j])
            cout << a[i++] << " ";
 
        else if (b[j] < a[i])
            cout << b[j++] << " ";
 
        else {
            cout << b[j++] << " ";
            i++;
        }
    }
 
    while (i < m)
        cout << a[i++] << " ";
 
    while (j < n)
        cout << b[j++] << " ";
}

int main()
{   
    int n, x;
    cin >> n;//Tamanho vetor1
    int vetor[n];
    
    for(int i=0; i < n; i++){
        cin >> vetor[i];    
    }
    
    cin >> x;//Tamanho vetor2
    int vetorDois[x];
    for(int i=0; i < x; i++){
        cin >> vetorDois[i];
    }
    
    cout << "uniao:" << endl;
    unirVetores(vetor, vetorDois, n, x);
 
    return 0;
}