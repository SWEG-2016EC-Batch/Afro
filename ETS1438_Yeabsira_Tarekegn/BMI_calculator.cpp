#include <iostream>
using namespace std;
int main() {
  float height, weight, bmi,num;
  cout<<"PLEASE ENTER THE NUMBER OF PEOPLE YOU WOULD LIKE TO CALCULATE BMI: ";
  cin>>num;
  for(int i=1; i<=num; i++){
  cout<<"PLEASE ENTER WEIGHT " <<i<< " IN (KG): ";
  cin>>weight;
  cout<<"PLEASE ENTER HEIGHT " <<i<< " IN (M): ";
  cin>>height; 
  bmi = weight/(height*height);
  cout<<"YOUR BMI IS: "<<bmi<<endl;
  if(bmi<18.5){
    cout<<"You are under weight."<<endl;
  }
  else if(bmi>=18.5 && (bmi<=24.9)){
    cout<<"You are normal weight."<<endl;
    }
  else{
    cout<<"You are over weight."<<endl;
  }
  }
    
   return 0;
}
