/* Write a program that read the various assessments, compute the total mark and print the
* corresponding letter-grade
*/


#include <iostream>
using namespace std;

int main() {
    float test,quiz,project,assignment,final;
    cout<<"please enter the mark you get on test,quiz,project,assignmentamd final out of 15,5,20,10 and 50 respectively: \n";
    cin>>test;
    cin>>quiz;
    cin>>project;
    cin>>assignment;
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
