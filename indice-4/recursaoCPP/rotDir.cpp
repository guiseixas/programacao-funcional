#include <algorithm>
#include <iostream>
using namespace std;

void rodarEsquerda(string &s, int x){
    reverse(s.begin(), s.begin()+x);
    reverse(s.begin()+x, s.end());
    reverse(s.begin(), s.end());
}

void rodarDireita(string &s, int x){
    rodarEsquerda(s, s.length()-x);
}
 
int main()
{
    string s = "asdfg";
    int x; //Quantidade de vezes.
    cin >> x;
    rodarDireita(s, x);
    cout << s << endl;

    return 0;
}