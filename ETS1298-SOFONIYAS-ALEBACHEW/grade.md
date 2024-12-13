
# Assesment 

Write a program that read the various assessments, compute the total mark and print the
corresponding letter-grade

##  Program Analysis 

Input: test,quiz,project,assignment and final result.

output: Total mark as mark (sum of all the inputs) and letter grade based on the mark

operation: 

* Variable Declaration:

* Print the input prompt message and read the corresponding input data.

* Calculate the total mark as the sum of all the individual scores.

* Print out prompt message and process the result .


## Flowchart


```mermaid
flowchart TD
    A[Start] --> B[Input marks for test, quiz, project, assignment, and final exam]
    B --> C[Calculate total mark = test + quiz + project + assignment + final]
    C --> D[Output total mark]
    D --> E{Is mark >= 90?}
    E -->|Yes| F[Grade: A+]
    E -->|No| G{Is mark >= 80?}
    G -->|Yes| H[Grade: A]
    G -->|No| I{Is mark >= 75?}
    I -->|Yes| J[Grade: B+]
    I -->|No| K{Is mark >= 60?}
    K -->|Yes| L[Grade: B]
    K -->|No| M{Is mark >= 55?}
    M -->|Yes| N[Grade: C+]
    M -->|No| O{Is mark >= 45?}
    O -->|Yes| P[Grade: C]
    O -->|No| Q{Is mark >= 30?}
    Q -->|Yes| R[Grade: D]
    Q -->|No| S[Grade: F]
    F --> T[Stop]
    H --> T
    J --> T
    L --> T
    N --> T
    P --> T
    R --> T
    S --> T
