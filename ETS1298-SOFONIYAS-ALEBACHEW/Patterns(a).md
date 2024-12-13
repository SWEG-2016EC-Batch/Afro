Algorithm
Initialize a loop for i from 1 to 5 (rows).
For each row, print a newline (endl).
Initialize an inner loop for j from 1 to 5 (columns).
Print the value of j in each iteration.
Repeat until all rows are printed.
Pseudocode
vbnet
Copy code
START
FOR i FROM 1 TO 5 DO
    PRINT newline
    FOR j FROM 1 TO 5 DO
        PRINT j
    END FOR
END FOR
STOP
#2
Algorithm
Initialize ch as 'A' (the starting character).
Set rows to 4 and cols to 6.
For each row from 0 to rows - 1:
For each column from 0 to cols - 1:
Print ch followed by a space.
Increment ch to the next character.
Print a newline after each row.
Repeat until all rows are printed.
Pseudocode
vbnet
Copy code
START
SET ch = 'A'
SET rows = 4
SET cols = 6

FOR i FROM 0 TO rows - 1 DO
    FOR j FROM 0 TO cols - 1 DO
        PRINT ch, " "
        INCREMENT ch
    END FOR
    PRINT newline
END FOR

STOP
#3
Algorithm
Set n to 5 (number of rows).
For each i from 1 to n (rows):
For each j from 1 to i (columns):
Print j followed by a space.
Print a newline after each row.
Repeat until all rows are printed.
Pseudocode
vbnet
Copy code
START
SET n = 5

FOR i FROM 1 TO n DO
    FOR j FROM 1 TO i DO
        PRINT j, " "
    END FOR
    PRINT newline
END FOR

STOP
