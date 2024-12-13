
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
    C --> D[1. Solid Right Triangle]
    C --> E[2. Right Triangle with Right-angled Stars]
    C --> F[3. Hollow Right Triangle]
    C --> G[4. Inverted Right Triangle]
    C --> H[5. Hollow Inverted Right Triangle]
    C --> I[6. Full Pyramid]
    C --> J[7. Inverted Hollow Triangle]
    C --> K[8. Inverted Half Pyramid]
    C --> L[9. Hollow Inverted Half Pyramid]
    C --> M[10. Full Pyramid]
    C --> N[11. Inverted Full Pyramid]
    C --> O[12. Hollow Full Pyramid]
    C --> P[Invalid Input]
    D --> Q[Print Solid Right Triangle]
    E --> R[Print Right Triangle with Right-angled Stars]
    F --> S[Print Hollow Right Triangle]
    G --> T[Print Inverted Right Triangle]
    H --> U[Print Hollow Inverted Right Triangle]
    I --> V[Print Full Pyramid]
    J --> W[Print Inverted Hollow Triangle]
    K --> X[Print Inverted Half Pyramid]
    L --> Y[Print Hollow Inverted Half Pyramid]
    M --> Z[Print Full Pyramid]
    N --> AA[Print Inverted Full Pyramid]
    O --> AB[Print Hollow Full Pyramid]
    P --> AC[Display Invalid Input]
    C --> AD[Repeat Menu? (y/n)]
    AD --> B[Display Pattern Menu]
    AD --> AE[Exit]

