#include <iostream>

using namespace std;
int suma (int x, int y) {
    return x + y;
}
int atimtis (int x, int y) {
    return x - y;
}
int daugyba (int x, int y) {
    return x * y;
}
double dalyba (int x, int y) {
    return (double)x / y;
}
int main() {
    int x, y;
    char op;
    cout << "Ivesk pirma skaiciu:";
    cin >> x;
    cout << "Ivesk operacija (+,-,*,/):";
    cin >> op;
    cout << "Ivesk antra skaiciu:";
    cin >> y;
    switch (op) {
        case '+':
            cout << suma(x, y);
            break;
        case '-':
            cout << atimtis(x, y);
            break;
        case '*':
            cout << daugyba(x, y);
            break;
        case '/':
            cout << dalyba(x, y);
            break;
    }
}