#include <iostream>

using namespace std;

int main(void){
    int base, exp, res = 1;
    
    cout << "Qual a base?";
    cin >> base;

    cout << "Qual o expoente?";
    cin >> exp;

    int i = 0;
    
    while(i < exp){
        res *= base;
        i++;
    }

    cout << "A resposta é " << res << "\n";
    return 0;
}