#include <iostream>
using namespace std;

void intersec(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]){
            i++;
        }else if (b[j] < a[i]){
            j++;
        }else
        {
            cout << b[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{   
    int n; 
    cin >> n; //Tamanho vetor1.
    
    int vetor[n];
    for(int i=0; i<n; i++){
        cin >> vetor[i];
    }
    
    int x;
    cin >> x; //Tamanho vetor2.
    
    int vet[x];
    for(int i=0; i < x; i++){
        cin >> vet[i];
    }
    
    intersec(vetor, vet, n, x);    
    
    return 0;
}