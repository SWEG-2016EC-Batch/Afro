#include <iostream>
using namespace std;

int main() {
    double capacity, miles_per_gallon, total_miles;
    cout<<"Enter the fuel tank capacity in gallons: ";
    cin>>capacity;
    cout<<"Enter the miles per gallon: ";
    cin>>miles_per_gallon;
    total_miles= capacity* miles_per_gallon;
    
    cout<<"The automobile can be driven "<<total_miles<<" miles without refueling."<<endl;
 
    return 0;
}
