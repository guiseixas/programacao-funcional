#include <algorithm>
#include <iostream>
using namespace std;
 
void rodarEsquerda(string &s, int x){
    reverse(s.begin(), s.begin()+x);
    reverse(s.begin()+x, s.end());
    reverse(s.begin(), s.end());
}
 
int main()
{
    string s = "asdfg";
    int x; //Quantidade de vezes.
    cin >> x;
    rodarEsquerda(s, x);
    cout << s << endl;

    return 0;
}