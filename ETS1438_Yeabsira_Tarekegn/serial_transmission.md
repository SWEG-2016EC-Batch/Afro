The pseudocode of the problem:
 
Input : employee name, weekly working hours, bonus rate per hour and
base salary.
Operation :calculate the bonus payment as weekly working hours * bonus rate per hour
calculate gross salary as base salary + bonus payment
Compute pension deduction  as 5% of gross salary and tax deduction as 15% of gross salary
Calculate the net salary as (gross salary - pension deduction - tax deduction
Output : gross salary, net salary and bonus payment.
 
The algorithm of the problem:
 
Step 1:start
Step 2: Read the employee's name, weekly working hours, bonus rate per hour, and base salary.
Step 3:Calculate the bonus payment as (weekly working hours * bonus rate per hour).
Step 4:Calculate the gross salary as (base salary + bonus payment).
Step 5:Compute deductions:
● Pension deduction = 5% of gross salary.
● Tax deduction = 15% of gross salary.
Step 6: Calculate the net salary as (gross salary - pension deduction - tax deduction).
Step 7:Print the gross salary, net salary and bonus payment.
Step 8:End.

flowchart
```mermaid
flowchart TD
    Start([Start])
    Input1["Read the file size in MB (fileSizeMB)"]
    ConvertToBytes["Convert fileSizeMB to bytes: fileSizeBytes = fileSizeMB * 1024 * 1024"]
    CalculateTime["Calculate time in seconds: timeinseconds = fileSizeBytes / 960"]
    CalculateDays["Calculate time in days: timeindays = timeinseconds / 86400"]
    CalculateHours["Calculate time in hours: timeinhours = (timeinseconds % 86400) / 3600"]
    CalculateMinutes["Calculate time in minutes: timeinminutes = (timeinseconds % 3600) / 60"]
    CalculateSeconds["Calculate remaining seconds: timeinseconds = timeinseconds % 60"]
    OutputTime["Output the result as: timeindays days, timeinhours hours, timeinminutes minutes, timeinseconds seconds"]
    End([End])

    Start --> Input1
    Input1 --> ConvertToBytes
    ConvertToBytes --> CalculateTime
    CalculateTime --> CalculateDays
    CalculateDays --> CalculateHours
    CalculateHours --> CalculateMinutes
    CalculateMinutes --> CalculateSeconds
    CalculateSeconds --> OutputTime
    OutputTime --> End
