Algorism using pseudocode
Input: height in bmi meter and weight in kilograms.
Process: calculate bmi=weight/height*height.
Output: bmi

Step1: start
Step2 : Input height in meter and weight in kilogram.
Step3:  Calculate bmi of the person.
Step4: If bmi <18.5 then the person is under weight.
Step5: If bmi is between 18.5 & 24.9 the person id normal weight.
Step6: If bmi is >25 a person is overweight.
Step7: Print bmi.
Step8: End.
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
