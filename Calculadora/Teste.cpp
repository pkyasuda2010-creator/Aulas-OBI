#include <iostream>

using namespace std;

int main(void) {
    int G, P, res=1;
cout << "Qual o número de pizzas grandes?";
cin >> G;

cout << "Qual o número de pizzas pequenas?";
cin >> P;

res = P*4 + G*8 - 2;

cout << "A quantida máxima de amigos é " << res << "\n";
    return 0;
}