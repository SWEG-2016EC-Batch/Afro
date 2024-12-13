
# Playing with numbers

Write a program that accepts an integer from the user and perform the following. Once
you complete solving all the exercises compile it and prepare a menu.

a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).

b) Counts the number of digits in a given number (e.g. 23,498 has five digits)

c) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)

d) Prints the first and the last digit of the number and find their sum.

e) Swap the first and the last digit of the number.

g) Check whether a number is palindrome or not.

h) Find the frequency of each digit in a given integer and print in table format.

i) Check if a number is Strong or not.

[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal to the

number itself.

j) Check whether a number is Perfect number or not.

[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number itself

equals the number.

## Program Analysis 

Input= An integer num representing the number on which various operations will be performed.

Output= Results based on the user's choice from the menu operations.

Operation or process

*	Calculation: addition,multiplication,division and modulus.







## Flow Chart

```mermaid
flowchart TD
    A[Start] --> B[Input num]
    B --> C[Display Menu]
    C --> D[Read choice]
    D --> E{choice}
    E -->|1| F[Reverse Number]
    E -->|2| G[Count Digits]
    E -->|3| H[Product of Even Digits]
    E -->|4| I[First and Last Digit]
    E -->|5| J[Swap Digits]
    E -->|6| K[Check Palindrome]
    E -->|7| L[Digit Frequency]
    E -->|8| M[Check Strong Number]
    E -->|9| N[Check Perfect Number]
    E -->|10| O[Exit]
    
    F --> P[Output Reverse Number]
    G --> Q[Output Digit Count]
    H --> R[Output Product of Even Digits]
    I --> S[Output First and Last Digits]
    J --> T[Output Swapped Digits]
    K --> U[Output Palindrome Check]
    L --> V[Output Digit Frequency]
    M --> W[Output Strong Number Check]
    N --> X[Output Perfect Number Check]
    O --> Y[End]
    
    P --> Y
    Q --> Y
    R --> Y
    S --> Y
    T --> Y
    U --> Y
    V --> Y
    W --> Y
    X --> Y



   

