Design algorism using pseudocode. 
Input: Fuel tank capacity in gallons and miles per gallon.
Process: Calculate total miles=capacity*miles per gallon 
Output: Total miles 

Step1: Start. 
Step2: Input the fuel tank capacity in gallons and the miles per gallon as capacity and miles_per_gallon respectively. 
Step3: Calculate the total miles = capacity*miles_per_gallon. 
Step4: Output the total miles. 
Step5: End.
```mermaid
flowchart TD
    Start([Start])
    Input1["Enter the fuel tank capacity in gallons"]
    Input2["Enter the miles per gallon"]
    Calc["Calculate total miles = capacity * miles_per_gallon"]
    Output["Print total miles"]
    End([End])

    Start --> Input1
    Input1 --> Input2
    Input2 --> Calc
    Calc --> Output
    Output --> End
