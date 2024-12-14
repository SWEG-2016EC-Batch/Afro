#include <iostream>
using namespace std;

int main() {
    int patternchoice;
    int row;
    char Choice;
    cout << "       ---Pattern Options---" << endl;
    do {
        cout << "Choose a pattern by entering a number:" << endl;
        cout << "1 for Grid of numbers" << endl;
        cout << "2 for Grid of alphabets (A to X)" << endl;
        cout << "3 for Left half pyramid of numbers" << endl;
        cout << "4 for Right half pyramid of numbers" << endl;
        cout << "5 for Half pyramid of uppercase letters" << endl;
        cout << "6 for Grid of lowercase letters (a to e)" << endl;
        cout << "7 for Hollow rectangle" << endl;
        cout << "8 for Inverted half pyramid" << endl;
        cout << "9 for Hollow inverted half pyramid" << endl;
        cout << "10 for Full pyramid" << endl;
        cout << "11 for Inverted full pyramid" << endl;
        cout << "12 for Hollow full pyramid" << endl;
        cout << "Enter your choice: ";
        cin >> patternchoice;

        if (cin.fail() || patternchoice == 0 || patternchoice > 12) {
            cout << "Invalid Input, Please enter a valid choice from the menu" << endl;
        } else {
            cout << "Enter number of rows: ";
            cin >> row;
            switch (patternchoice) {
                case 1: {
                    cout << "Grid of numbers" << endl;
                    for (int i = 0; i < row; i++) {
                        for (int j = 1; j <= row; j++) {
                            cout << j << " ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 2: {
                    cout << "Grid of alphabets from A to X" << endl;
                    char alpha = 'A';
                    for (int i = 0; i < row; i++) {
                        for (int j = 0; j < row; j++) {
                            if (alpha <= 'X') {
                                cout << alpha << " ";
                                alpha++;
                            }
                        }
                        cout << endl;
                    }
                    break;
                }
                case 3: {
                    cout << "Left half pyramid of numbers" << endl;
                    for (int i = 1; i <= row; i++) {
                        for (int j = 1; j <= i; j++) {
                            cout << j << " ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 4: {
                    cout << "Right half pyramid of numbers" << endl;
                    for (int i = 1; i <= row; i++) {
                        for (int k = row - i; k > 0; k--) {
                            cout << "  ";
                        }
                        for (int j = 1; j <= i; j++) {
                            cout << j << " ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 5: {
                    cout << "Half pyramid of uppercase letters" << endl;
                    for (int i = 0; i < row; i++) {
                        for (char alpha = 'A'; alpha <= 'A' + i; alpha++) {
                            cout << alpha << " ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 6: {
                    cout << "Grid of lowercase letters a to e" << endl;
                    for (int i = 0; i < row; i++) {
                        for (char alpha = 'a'; alpha <= 'e'; alpha++) {
                            cout << alpha << " ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 7: {
                    cout << "Hollow rectangle" << endl;
                    for (int i = 0; i < row; i++) {
                        for (int j = 0; j < row; j++) {
                            if (i == 0 || i == row - 1 || j == 0 || j == row - 1) {
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
                    for (int i = row; i >= 1; i--) {
                        for (int j = 1; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 9: {
                    cout << "Hollow Inverted half pyramid" << endl;
                    for (int i = row; i >= 1; i--) {
                        for (int j = 1; j <= i; j++) {
                            if (j == 1 || j == i || i == row) {
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
                    for (int i = 1; i <= row; i++) {
                        for (int j = 1; j <= row - i; j++) {
                            cout << " ";
                        }
                        for (int k = 1; k <= i; k++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 11: {
                    cout << "Inverted full pyramid" << endl;
                    for (int i = row; i >= 1; i--) {
                        for (int j = 0; j < row - i; j++) {
                            cout << " ";
                        }
                        for (int k = 1; k <= i; k++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    break;
                }
                case 12: {
                    cout << "Hollow full pyramid" << endl;
                    for (int i = 1; i <= row; i++) {
                        for (int j = 1; j <= row - i; j++) {
                            cout << " ";
                        }
                        for (int k = 1; k <= i; k++) {
                            if (k == 1 || k == i || i == row) {
                                cout << "* ";
                            } else {
                                cout << "  ";
                            }
                        }
                        cout << endl;
                    }
                    break;
                }
            }
            cout << "Do you want to see other patterns?(y/n): ";
            cin >> Choice;
        }
    } while (Choice == 'y' || Choice == 'Y');
    cout << endl;
    cout << "Thank you!" << endl;
    return 0;
}
 
