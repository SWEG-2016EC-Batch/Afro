/* Write a program that accepts an integer from the user and perform the following. Once
*you complete solving all the exercises compile it and prepare a menu.
*a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).
*b) Counts the number of digits in a given number (e.g. 23,498 has five digits)
*c) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)
*d) Prints the first and the last digit of the number and find their sum.
*e) Swap the first and the last digit of the number.
*g) Check whether a number is palindrome or not.
*h) The frequency of each digit in a given integer and print in table format.
*i)Check if a number is Strong or not.
[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal
to the number itself.
*j) Check whether a number is Perfect number or not.
[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number
itself equals the number.*/


 #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, choice, temp, digit = 0, rev = 0,first,prod,count,newNum,last,frequency[10]={0},strong,perfect;
    bool isPalindrome = true;

    // read the number
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    // display the menu
    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Product of even digits" << endl;
    cout << "4. First and last digit" << endl;
    cout << "5. Swap first and last digit" << endl;
    cout << "6. Palindrome" << endl;
    cout << "7. Frequency of the digits" << endl;
    cout << "8. Strong number" << endl;
    cout << "9. Perfect number" << endl;
    cout << "10. Exit" << endl;

    // read the choice
    cout << "Enter your choice: ";
    cin >> choice;

    // find the solution based on the choice
    switch(choice) {
        case 1:
            while (temp > 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            cout << "Reverse of the number: " << rev << endl;
            break;
        case 2:
             count = 0;
            while (temp > 0) {
                count++;
                temp /= 10;
            }
            cout << "Number of digits: " << count << endl;
            // cout << "Number of digits: " << floor(log10(num) + 1) << endl;
            break;
       
        case 3:
             prod = 1;
            while (temp > 0) {
                digit = temp % 10;
                if (digit % 2 == 0) {
                    prod *= digit;
                }
                temp /= 10;
            }
            cout << "Product of even digits: " << prod << endl;
            break;
        case 4:
            first = 0;
            last = 0;
            while (temp > 0) {
                digit = temp % 10;
                if (first == 0) {
                    first = digit;
                }
                last = digit;
                temp /= 10;
            }
            cout << "First and last digit: " << first << " and " << last << endl;
            break;
        case 5:
             newNum = 0;
            while (temp > 0) {
                digit = temp % 10;
                if (digit == first) {
                    digit = last;
                } else if (digit == last) {
                    digit = first;
                }
                newNum = newNum * 10 + digit;
                temp /= 10;
            }
            cout << "Number after swapping: " << newNum << endl;
            break;
        case 6:
            while (temp > 0) {
                if (temp % 10 != rev % 10) {
                    isPalindrome = false;
                    break;
                }
                temp /= 10;
                rev /= 10;
            }
            if (isPalindrome) {
                cout << "Palindrome: Yes" << endl;
            } else {
                cout << "Palindrome: No" << endl;
            }
            break;
        case 7:
      if (num < 0) {
        num= -num;
      }
      while (num > 0) {
        digit = num% 10;
        switch (digit) {
            case 0: frequency[0]++; break;
            case 1: frequency[1]++; break;
            case 2: frequency[2]++; break;
            case 3: frequency[3]++; break;
            case 4: frequency[4]++; break;
            case 5: frequency[5]++; break;
            case 6: frequency[6]++; break;
            case 7: frequency[7]++; break;
            case 8: frequency[8]++; break;
            case 9: frequency[9]++; break;
        }
        num /= 10;
    }
    cout << "\nDigit\tFrequency" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << "\t" << frequency[i] << endl;
    }
    break;
        case 8:
            strong = 0;
            while (temp > 0) {
                digit = temp % 10;
int fact = 1;
for (int i = 1; i <= digit; i++) {
                    fact *= i;
                }
                strong += fact;
                temp /= 10;
            }
            if (strong == num) {
                cout << "Strong number: Yes" << endl;
            } else {
                cout << "Strong number: No" << endl;
            }
            break;
        case 9:
            perfect = 0;
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    perfect += i;
                }
            }
            if (perfect == num) {
                cout << "Perfect number: Yes" << endl;
            } else {
                cout << "Perfect number: No" << endl;
            }
            break;
        case 10:
            cout << "Exiting..." << endl;
            break;
    }

    return 0;
}
