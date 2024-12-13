
# Pattern

Write a program that generate each of the pattern on the right side.


## Program Analysis 

Input:

* User inputs a number (1 to 12) to select a pattern..

* After displaying the pattern, the user decides whether to continue exploring more patterns (y or n).


output: 

* Patterns are displayed based on the user’s choice:


operation/process

1. Display Menu:

* Show pattern choices (1-12).

2. Pattern Selection:

* Get user input for the pattern choice.

3. Pattern Generation:

* Depending on the choice:

* Loop through rows and columns to create the desired pattern.

* For hollow patterns, check boundary conditions.


4. Repeat or Exit:

* After displaying the pattern, prompt the user to continue or exit.




## Flow chart

```mermaid
flowchart TD
    A[Start] --> B[Display Pattern Menu]
    B --> C{Choose Pattern?}
    C --> D1[1. Grid of numbers]
    C --> D2[2. Grid of alphabets A to X]
    C --> D3[3. Left half pyramid of numbers]
    C --> D4[4. Right half pyramid of numbers]
    C --> D5[5. Half pyramid of uppercase letters]
    C --> D6[6. Grid of lowercase letters a to e]
    C --> D7[7. Hollow rectangle]
    C --> D8[8. Inverted half pyramid]
    C --> D9[9. Hollow inverted half pyramid]
    C --> D10[10. Full pyramid]
    C --> D11[11. Inverted full pyramid]
    C --> D12[12. Hollow full pyramid]
    C --> D13[Invalid Input]
    D1 --> Q[Print Grid of numbers]
    D2 --> R[Print Grid of alphabets A to X]
    D3 --> S[Print Left half pyramid of numbers]
    D4 --> T[Print Right half pyramid of numbers]
    D5 --> U[Print Half pyramid of uppercase letters]
    D6 --> V[Print Grid of lowercase letters a to e]
    D7 --> W[Print Hollow rectangle]
    D8 --> X[Print Inverted half pyramid]
    D9 --> Y[Print Hollow inverted half pyramid]
    D10 --> Z[Print Full pyramid]
    D11 --> AA[Print Inverted full pyramid]
    D12 --> AB[Print Hollow full pyramid]
    D13 --> AC[Display Invalid Input]
    Q --> AD[Repeat Menu? y/n]
    R --> AD
    S --> AD
    T --> AD
    U --> AD
    V --> AD
    W --> AD
    X --> AD
    Y --> AD
    Z --> AD
    AA --> AD
    AB --> AD
    AC --> AD
    AD --> B[Display Pattern Menu]
    AD --> AE[Exit]


