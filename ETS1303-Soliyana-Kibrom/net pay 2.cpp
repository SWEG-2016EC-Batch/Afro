/*Develop a program that find the Net-Pay of an employee after
*deduction of pension (7%) and tax based on tax rate provided. The
*program should read the basic salary, worked hours, and bonus
*rate. If the employee worked hours exceed 40 hrs., the program
*prompts the user to enter an over-time bonus rate/hour.*/

#include <iostream>
using namespace std;
int main (){
double basicSalary,workedHour, bonusRate, Overtime, gross_salary, pension, bonus, taxRate, tax, netSalary;
cout<<"Enter the salary (br): ";
cin>>basicSalary;
cout<<"Enter worked hour (hr): ";
cin>>workedHour;
if (workedHour > 40){
Overtime = workedHour - 40;
cout<<"Enter overtime bonus rate/hour: ";
cin>>bonusRate;
bonus = Overtime*bonusRate;
}
else {
    bonus = 0;
}
gross_salary = basicSalary + bonus;
if (gross_salary <= 200){
    taxRate = 0;
    tax = 0;
}
else if (gross_salary > 200 && gross_salary <= 600){
    taxRate = 0.1;
    tax = gross_salary*taxRate;
}
else if (gross_salary > 600 && gross_salary <= 1200){
    taxRate = 0.15;
    tax = gross_salary*taxRate;
}
else if (gross_salary > 1200 && gross_salary <= 2000){
    taxRate = 0.2;
    tax = gross_salary*taxRate;
}
else if (gross_salary > 2000 && gross_salary <= 3500){
    taxRate = 0.25;
    tax = gross_salary*taxRate;
}
else {
    taxRate = 0.3;
    tax = gross_salary*taxRate;
}
pension = basicSalary*0.07;
netSalary = gross_salary-pension-tax;
cout<<"Your gross salary is: "<<gross_salary<<" br\n";
cout<<"Your tax deduction is: "<<tax<<" br\n";
cout<<"Your bonus payment is: "<<bonus<<" br\n";
cout<<"Your pension deduction is: "<<pension<<" br\n";
cout<<"Your net salary is: "<<netSalary<<" br\n";

return 0;
}
