#include <iostream>
using namespace std;

int main() {
    int x, y, result;

    cout << "Please enter the base number as x: ";
    cin >> x;

    cout << "Please enter the exponent number as y: ";
    cin >> y;

    result = 1; 

    for (int i = 1; i <= y; i++) {
        result *= x;
    }

    cout << x << "^" << y << " = " << result << endl;

    return 0;
}
