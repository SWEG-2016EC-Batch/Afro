
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
    D --> E{mark >= 90?}
    E -->|Yes| F[Output "Your grade is A+"]
    E -->|No| G{mark >= 80?}
    G -->|Yes| H[Output "Your grade is A"]
    G -->|No| I{mark >= 75?}
    I -->|Yes| J[Output "Your grade is B+"]
    I -->|No| K{mark >= 60?}
    K -->|Yes| L[Output "Your grade is B"]
    K -->|No| M{mark >= 55?}
    M -->|Yes| N[Output "Your grade is C+"]
    M -->|No| O{mark >= 45?}
    O -->|Yes| P[Output "Your grade is C"]
    O -->|No| Q{mark >= 30?}
    Q -->|Yes| R[Output "Your grade is D"]
    Q -->|No| S[Output "Your grade is F"]
    R --> T[Stop]
    S --> T
    P --> T
    N --> T
    L --> T
    J --> T
    H --> T
    F --> T
