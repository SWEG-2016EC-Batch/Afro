Algorithm
Initialize the following variables:

test, quiz, project, assignment, final.
Prompt the user to input marks for:

test (out of 15)
quiz (out of 5)
project (out of 20)
assignment (out of 10)
final (out of 50)
Calculate the total mark:

mark = test + quiz + project + assignment + final.
Determine the grade based on the mark:

If mark >= 90: Grade is A+.
If 80 <= mark < 90: Grade is A.
If 75 <= mark < 80: Grade is B+.
If 60 <= mark < 75: Grade is B.
If 55 <= mark < 60: Grade is C+.
If 45 <= mark < 55: Grade is C.
If 30 <= mark < 45: Grade is D.
If mark < 30: Grade is F.
Output the total mark and the corresponding grade.

Pseudocodee
START

DECLARE test, quiz, project, assignment, final AS FLOAT
DECLARE mark AS FLOAT

PRINT "Please enter the mark you get on test, quiz, project, assignment, and final out of 15, 5, 20, 10, and 50 respectively:"

READ test
READ quiz
READ project
READ assignment
READ final

SET mark = test + quiz + project + assignment + final

PRINT "mark = ", mark

IF mark >= 90 THEN
    PRINT "Your grade is A+"
ELSE IF mark >= 80 AND mark < 90 THEN
    PRINT "Your grade is A"
ELSE IF mark >= 75 AND mark < 80 THEN
    PRINT "Your grade is B+"
ELSE IF mark >= 60 AND mark < 75 THEN
    PRINT "Your grade is B"
ELSE IF mark >= 55 AND mark < 60 THEN
    PRINT "Your grade is C+"
ELSE IF mark >= 45 AND mark < 55 THEN
    PRINT "Your grade is C"
ELSE IF mark >= 30 AND mark < 45 THEN
    PRINT "Your grade is D"
ELSE IF mark < 30 THEN
    PRINT "Your grade is F"
ELSE
    PRINT "Enter a correct value"
END IF

END
