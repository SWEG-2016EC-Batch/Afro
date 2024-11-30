#include<iostream>
using namespace std;
int main()
{
char employee_name [10];
float working_hour, bounes_rate,base_salary,gross_salary,net_salary,bounes_payment,pension,tax;
cout << "Hello welcome please enter your name " << endl;
cin>>employee_name;
cout << "Hello "<<employee_name <<" please enter your working hour"<<endl;
cin >> working_hour;
cout << "Hello "<<employee_name <<" please enter your bonus rate per hour "<<endl;
cin >> bounes_rate;
cout << "Hello "<<employee_name <<" please enter your Base salary "<<endl;
cin >> base_salary;
bounes_payment=base_salary*bounes_rate;
gross_salary=base_salary+bounes_payment;
pension=gross_salary*0.05;
tax=gross_salary*0.15;
net_salary=gross_salary-pension-tax;
cout << "dear " <<employee_name<<" your gross salary is "<<gross_salary<<endl;
cout << "your bounes payment is " <<bounes_payment<< endl;
cout << "your net salary is "<<net_salary<<endl;
    return 0;
}
