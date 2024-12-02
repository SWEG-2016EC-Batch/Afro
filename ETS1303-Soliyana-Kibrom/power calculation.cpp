/* Write a program that find the result of the expression x
* y where the value of X and Y are entered by the user.
*/


#include <iostream>
using namespace std;
int main() {
    int x, y;
    double result;
    result=1.0;
cout << "Enter the base as x: ";
    cin >> x;
    cout << "Enter the exponent as y : ";
    cin >> y;
  if (y == 0) {
        result = 1;
    } else if (y > 0) {
        for (int i = 1; i <= y; i++) {
            result *= x;
        }
    } else {
        for (int i = 1; i <= -y; i++) {
            result *= x;
        }   result = 1.0/ result; }
    cout << x << "^" << y << " = " << result << endl;
  return 0;
}


