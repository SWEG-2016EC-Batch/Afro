#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        int patternChoice;
        cout << "        ***Options***" << endl;
        cout << "Select 1 to print a 5x5 grid of numbers" << endl;
        cout << "Select 2 to print a 4x6 grid of letters from A to X" << endl;
        cout << "Select 3 for a left-aligned number pyramid" << endl;
        cout << "Select 4 for a right-aligned number pyramid" << endl;
        cout << "Select 5 for a half pyramid of capital letters" << endl;
        cout << "Select 6 for a 5x5 grid of lowercase letters a to e" << endl;
        cout << "Select 7 for a hollow rectangle pattern" << endl;
        cout << "Select 8 for an inverted half pyramid" << endl;
        cout << "Select 9 for a hollow inverted half pyramid" << endl;
        cout << "Select 10 for a full pyramid" << endl;
        cout << "Select 11 for an inverted full pyramid" << endl;
        cout << "Select 12 for a hollow full pyramid" << endl;
        cout << "Enter your choice: ";
        cin >> patternChoice;

        switch(patternChoice) {
            case 1: {
                cout << "5x5 grid of numbers" << endl;
                for (int i = 1; i <= 5; ++i) {
                    for (int j = 1; j <= 5; ++j) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 2: {
                cout << "4x6 grid of letters from A to X" << endl;
                char ch = 'A';
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 6; ++j) {
                        if (ch <= 'X') {
                            cout << ch << " ";
                            ++ch;
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 3: {
                cout << "Left-aligned number pyramid" << endl;
                for (int i = 1; i <= 5; ++i) {
                    for (int j = 1; j <= i; ++j) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 4: {
                cout << "Right-aligned number pyramid" << endl;
                for (int i = 1; i <= 5; ++i) {
                    for (int j = 5; j > i; --j) {
                        cout << "  ";
                    }
                    for (int j = 1; j <= i; ++j) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 5: {
                cout << "Half pyramid of capital letters" << endl;
                for (int i = 0; i < 5; ++i) {
                    for (char ch = 'A'; ch <= 'A' + i; ++ch) {
                        cout << ch << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 6: {
                cout << "5x5 grid of lowercase letters a to e" << endl;
                for (int i = 0; i < 5; ++i) {
                    for (char ch = 'a'; ch <= 'e'; ++ch) {
                        cout << ch << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 7: {
                cout << "Hollow rectangle pattern" << endl;
                for (int i = 0; i < 7; ++i) {
                    for (int j = 0; j < 8; ++j) {
                       if (i == 0  i == 6  j == 0  j == 7) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 8: {
                cout << "Inverted half pyramid" << endl;
                for (int i = 6; i >= 1; --i) {
                    for (int j = 1; j <= i; ++j) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 9: {
                cout << "Hollow inverted half pyramid" << endl;
                for (int i = 6; i >= 1; --i) {
                    for (int j = 1; j <= i; ++j) {
                        if (j == 1  j == i  i == 6) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 10: {
                cout << "Full pyramid" << endl;
                for (int i = 1; i <= 6; ++i) {
                    for (int j = 1; j <= 6 - i; ++j) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; ++k) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 11: {
                cout << "Inverted full pyramid" << endl;
                for (int i = 6; i >= 1; --i) {
                    for (int j = 0; j < 6 - i; ++j) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; ++k) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 12: {
                cout << "Hollow full pyramid" << endl;
                for (int i = 1; i <= 6; ++i) {
                    for (int j = 1; j <= 6 - i; ++j) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; ++k) {
                        if (k == 1  k == i  i == 6) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            default: 
                cout << "Invalid Input, please insert the correct choice ." << endl;
        }
        cout << "Would you like to explore more patterns? (y/n): ";
        cin >> choice;
    } while (choice == 'y'  choice == 'Y');
    
    cout << "Thank you. << endl;
    return 0;
}
