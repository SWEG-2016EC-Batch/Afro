#4.a(1)
#include <iostream>
using namespace std;
int main() {
 for(int i=1;i<=5;i++){
  cout<<endl;
  for(int j=1;j<=5;j++)
  cout<<j;
 }
 return 0;
}

#4.a(2)   
#include <iostream>
using namespace std;

int main() {
    char ch = 'A';  
    int rows = 4; 
    int cols = 6;   

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << ch<<" ";
            ch++;  
        }
        cout << endl;  
    }

    return 0;
}

#4.a(3)
#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows to print

    // Loop to generate the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j<<" ";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}


