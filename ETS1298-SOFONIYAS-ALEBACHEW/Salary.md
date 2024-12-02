
# Salary calculator

Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%).


## Program Analysis 

Input: 

* Employee name
* Working hours
* Bonus rate per hour
* Base salary

output: 

* Gross salary

* Net salary 

* Bonus payment

operation or Process: 

* Variable Declaration

* print the input prompt message and read the corresponding input data.

* calculate 

1.The bonus payment  as bounes_payment = base_salary * bounes_rate

2.The gross salary as gross_salary = base_salary + bounes_payment

3.The pension deduction as  pension = gross_salary * 0.05

4.The tax deduction as tax = gross_salary * 0.15

5.The net salary is as net_salary = gross_salary - pension - tax

* print out prompt messagea and process the result 



## Pseudocode 

Step 1: start

Step 2: Read the  Employee name,Working hours,bonus rate per hour and Base salary as employee_name,working_hour,bounes_rate, base_salary respectively.

Step 3:  calculate the bonus payment as bonus_payment by multiplying the bonus_rate per hour with working_hour and Base_salary

Step 4: calculate the gross salary as gross_salary by adding the bonus payment on base_salary 

Step 5: calculate the pention deduction by multiplying Gross salary with 5%

Step 6: calculate the tax by multiplying the gross salary with 15%

Step 7: calculate the base salary by subtracting the pension and tax from gross_salary 

Step 8: print the gross_salary, net_salary and bounes_payment 

Step 9: end




```mermaid
flowchart TD
    Start([Start])
    InputName["Enter employee name"]
    InputHours["Enter working hours"]
    InputBonusRate["Enter bonus rate per hour"]
    InputBaseSalary["Enter base salary"]
    CalculateBonus["Calculate bonus payment = base_salary * bonus_rate"]
    CalculateGrossSalary["Calculate gross salary = base_salary + bonus_payment"]
    CalculatePension["Calculate pension = gross_salary * 0.05"]
    CalculateTax["Calculate tax = gross_salary * 0.15"]
    CalculateNetSalary["Calculate net salary = gross_salary - pension - tax"]
    OutputGrossSalary["print gross salary"]
    OutputBonus["print bonus payment"]
    OutputNetSalary["print net salary"]
    End([End])

    Start --> InputName
    InputName --> InputHours
    InputHours --> InputBonusRate
    InputBonusRate --> InputBaseSalary
    InputBaseSalary --> CalculateBonus
    CalculateBonus --> CalculateGrossSalary
    CalculateGrossSalary --> CalculatePension
    CalculatePension --> CalculateTax
    CalculateTax --> CalculateNetSalary
    CalculateNetSalary --> OutputGrossSalary
    OutputGrossSalary --> OutputBonus
    OutputBonus --> OutputNetSalary
    OutputNetSalary --> End
