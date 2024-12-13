#include <iostream>
using namespace std;

int main() {
    float test,quiz,project,assignment,final;
cout<<"Enter your test result out of 15: ";
cin>>test;
cout<<"Enter your quiz result out of 5: ";
cin>>quiz;
cout<<"Enter your project result out of 20: ";
cin>>project;
cout<<"Enter your assignment result out of 10: ";
cin>>assignment;
cout<<"Enter your final exam result out of 50: ";
cin>>final;
    float mark= test+quiz+project+assignment+final;
    cout<<"mark= "<<mark<<endl;
    
   if(mark >=90){
       cout<<"your grade is A+";
   }else if(mark<90&& mark>=80){
       cout<<"your grade is A";
   }else if(mark<80&& mark>=75){
       cout<<"your grade is B+";
   } else if(mark<75&& mark>=60){
       cout<<"your grade is B";
   }else if(mark <60 && mark>=55){
       cout<<"your grade is C+";
   }else if(mark< 55 && mark>=45){
       cout<<"your grade is C";
   }else if(mark<45&& mark>=30){
       cout<<"your grade is D";
   }else if(mark<30){
       cout<<"your grade is F";
   }else{
       cout<<"enter a correct value";
   }
    return 0;
}
