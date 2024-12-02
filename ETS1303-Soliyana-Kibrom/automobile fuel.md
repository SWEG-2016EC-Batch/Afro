
# Automobile fuel calculation

Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.


##  Program Analysis 

Input: The fuel tank's capacity in gallons  and the number of miles the car can travel per gallon of fuel .

output: The total number of miles the car can drive without needing to refuel.

operation: 

* Variable Declaration:

* Print the input prompt message and read the corresponding input data.

* Calculate the total miles as capacity*miles per gallon .

* Print out prompt message and process the result .


## Pseudocode 

step_1: start

step_2: Read the fuel tank capacity in gallons and the miles per gallon as "capacitY" and "miles_per_gallon" respectively. 

step_3: Calculate the total miles = capacity*miles_per_gallon

step_4: Output the total miles

step_5: End






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
