Psedo code
Input
Employee name
Working hours
Bonus rate per hour
Base salary 
Output
Gross salary
Net salary 
Bonus payment
Operation
Subtraction, multiplication, addition 
Algorithm 
Step 1- start
Step 2- input Employee    name,Working hours,bonus rate per hour and Base salary
Step 3 - calculate the bonus payment by multiplying the bonus rate per hour with working hour and Base salary
Step 4 - calculate the gross salary by adding the bonus payment on base salary 
Step 5 - calculate the pention diduction by multiplying Gross salary with 5% 
Step 7- calculate the tax by multiplying the gross salary with 15%
Step 8 - calculate the base salary by subtracting the pension and tax from gross salary 
Step 9 - print the gross salary net salary and bounes payment 
Step 10 - end
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

