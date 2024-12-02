# BMI calculator


Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated?

## Program Analysis 

Input: Number of people (num) for whom the BMI needs to be calculated,Weight in kg and Height in meter 

output: BMI calculation and BMI classification as normal weight,overweight and underweight.

operation or Process: 

* Variable Declaration

* print the input prompt message and read the corresponding input data.

* checking the BMI result

1.If the BMI is less than 18.5, classify the person as "underweight."

2.If the BMI is between 18.5 and 24.9 (inclusive), classify them as "normal weight."

3.If the BMI is 25 or higher, classify them as "overweight."

* print out prompt messagea and process the result as BMI= weight/(height*height)



## Pseudocode 

step_1: start

step_2: Read the number of people as "num" , weight in kg and height in Meter.

step_3: calculate body mass index(BMI) of the person as BMI=weight/height*height.

step_4: check the BMI classification.

  * If bmi <18.5 then the person is under weight.

  * If bmi is between 18.5 & 24.9 the person id normal weight.

  * If bmi is >25 a person is overweight.


step_5: Print BMI

step_6: End




```mermaid
flowchart TD
    Start([Start])
    Input1["Read the number of people (num)"]
    Input2["For each person, read weight and height"]
    Calc["Calculate BMI = weight / (height * height)"]
    Check1{"BMI < 18.5?"}
    Underweight["Print 'Underweight'"]
    Check2{"BMI ≤ 24.9?"}
    Normal["Print 'Normal weight'"]
    Overweight["Print 'Overweight'"]
    Continue["Continue to next person"]
    Decision{"More people to calculate? (num > 0)"}
    End([End])

    Start --> Input1
    Input1 --> Input2
    Input2 --> Calc
    Calc --> Check1
    Check1 -->|Yes| Underweight
    Check1 -->|No| Check2
    Underweight --> Continue
    Check2 -->|Yes| Normal
    Check2 -->|No| Overweight
    Normal --> Continue
    Overweight --> Continue
    Continue --> Decision
    Decision -->|Yes| Input2
    Decision -->|No| End
