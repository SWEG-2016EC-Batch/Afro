
# exponent calculator

Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.


## Program Analysis 

Input= base number as “x”, Exponent number as “Y”.

Output= Result as x^y

Operation or process

*	Variable declaration

*	Initializing the result to 1.

*	Print the input prompt message and read the corresponding input data

*	Checking the exponent y 

1.	y=0 – set the result to 1

2.	y>0 – use loop to multiply by itself

3.	y<0- change –y to y and calculate the result as 1/X^y

*	Print out prompt message and process the result as x^y





## Pseudocode 

step_1:  Start

step_2: Read the base as “X” and the exponent as “Y”.

step_3:  Initialize result to 1..

step_4: Check the y value

* If y=0, set result to 1 and go to step 6

* If y>0,. multiply “x” by itself “y”times.

* If y < 0, Set z=-y ,initialixe result to 1 and multiply “x” by itself “z” times then calculate the reciprocal as 1/x^z.

step_5: Print the result as  x^y  

step_6: End




```mermaid
flowchart TD
    Start([Start])
    Input1["Enter the base (x)"]
    Input2["Enter the exponent (y)"]
    Check1{"y == 0?"}
    SetResult1["Set result = 1"]
    Check2{"y > 0?"}
    LoopPositive["Multiply result by x, y times"]
    Check3{"y < 0?"}
    LoopNegative["Multiply result by x, -y times"]
    InverseResult["Set result = 1 / result"]
    Output["print x^y = result"]
    End([End])

    Start --> Input1
    Input1 --> Input2
    Input2 --> Check1
    Check1 --> SetResult1
    Check1 --> Check2
    SetResult1 --> Output
    Check2 --> LoopPositive
    Check2 --> Check3
    LoopPositive --> Output
    Check3 --> LoopNegative
    LoopNegative --> InverseResult
    InverseResult --> Output
    Output --> End
