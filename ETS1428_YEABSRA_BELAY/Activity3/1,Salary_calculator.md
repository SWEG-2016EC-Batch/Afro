# Algorism
input: basic salalry, worked hours, bouns rate, overtime, gross salary, pension, bouns, tax rate, tax, and net salary.
operation: 
gross_salary = basicSalary + bonus.
Calculate Tax Based on Gross Salary:

If gross_salary ≤ 200:
taxRate = 0 and tax = 0.
If 200 < gross_salary ≤ 600:
taxRate = 0.1 and tax = gross_salary * taxRate.
If 600 < gross_salary ≤ 1200:
taxRate = 0.15 and tax = gross_salary * taxRate.
If 1200 < gross_salary ≤ 2000:
taxRate = 0.2 and tax = gross_salary * taxRate.
If 2000 < gross_salary ≤ 3500:
taxRate = 0.25 and tax = gross_salary * taxRate.
If gross_salary > 3500:
taxRate = 0.3 and tax = gross_salary * taxRate.
Calculate Pension Deduction:

pension = basicSalary * 0.07.
Calculate Net Salary:

netSalary = gross_salary - pension - tax.
Output:print gross_salary, tax, bonus, pension, and netSalary.
