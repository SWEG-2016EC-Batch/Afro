# Net pay

Develop a program that find the Net-Pay of an employee after
deduction of pension (7%) and tax based on tax rate provided. The
program should read the basic salary, worked hours, and bonus
rate. If the employee worked hours exceed 40 hrs., the program
prompts the user to enter an over-time bonus rate/hour.



## Program Analysis 

Input:

* basicSalary: Basic salary of the employee.

* workedHour: Total hours worked by the employee.

* bonusRate: Bonus rate per hour for overtime (only if worked hours exceed 40).

output: 

* gross_salary: The sum of basic salary and any overtime bonus.

* tax: Amount of tax deducted based on tax rate slabs.

* pension: Amount of pension deducted (7% of basic salary).

* netSalary: Final salary after tax and pension deductions.

operation/process

* Variable Declaration

* print the input prompt message and read the corresponding input data.

* calculate :

1. overtime bonus

2. gross_salary as basicSalary + bonus

3. Determine taxRate and compute tax

4. pension as basicSalary * 0.07.

5. netSalary as gross_salary - pension - tax.

* print out prompt messagea and process the result .




## Flow chart


```mermaid
flowchart TD
    A[Start] --> B[Input basicSalary]
    B --> C[Input workedHour]
    C --> D{workedHour > 40?}
    D -->|Yes| E[Compute Overtime = workedHour - 40]
    E --> F[Input bonusRate]
    F --> G[Calculate bonus = Overtime * bonusRate]
    D -->|No| H[Set bonus = 0]
    G --> I[Calculate gross_salary = basicSalary + bonus]
    H --> I
    I --> J{gross_salary <= 200?}
    J -->|Yes| K[Set taxRate = 0, tax = 0]
    J -->|No| L{gross_salary <= 600?}
    L -->|Yes| M[Set taxRate = 0.1, tax = gross_salary * taxRate]
    L -->|No| N{gross_salary <= 1200?}
    N -->|Yes| O[Set taxRate = 0.15, tax = gross_salary * taxRate]
    N -->|No| P{gross_salary <= 2000?}
    P -->|Yes| Q[Set taxRate = 0.2, tax = gross_salary * taxRate]
    P -->|No| R{gross_salary <= 3500?}
    R -->|Yes| S[Set taxRate = 0.25, tax = gross_salary * taxRate]
    R -->|No| T[Set taxRate = 0.3, tax = gross_salary * taxRate]
    K --> U[Calculate pension = basicSalary * 0.07]
    M --> U
    O --> U
    Q --> U
    S --> U
    T --> U
    U --> V[Calculate netSalary = gross_salary - pension - tax]
    V --> W[Output gross_salary, tax, bonus, pension, netSalary]
    W --> X[Stop]
