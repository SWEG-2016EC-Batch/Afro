Algorithm
Initialize Variables:

Declare num, choice, temp, digit, rev, first, prod, count, newNum, last, strong, perfect.
Create an array frequency[10] initialized to zeros.
Set isPalindrome to true.
Input:

Prompt the user to enter a number and store it in num.
Store the value of num in temp.
Display Menu:

Present a menu of 10 options for different operations.
Input Choice:

Ask the user to enter their choice (1-10).
Switch Case:

Perform the following operations based on the user's choice:
Case 1: Reverse the Number
Reverse the digits of num and print the reversed number.
Case 2: Number of Digits
Count the number of digits in num and print the count.
Case 3: Product of Even Digits
Compute the product of all even digits in num and print the result.
Case 4: First and Last Digit
Extract the first and last digits of num and display them.
Case 5: Swap First and Last Digit
Swap the first and last digits of num and display the new number.
Case 6: Check if Palindrome
Check if num is a palindrome and print the result.
Case 7: Frequency of Digits
Calculate and display the frequency of each digit (0-9).
Case 8: Strong Number
Check if num is a strong number and print the result.
Case 9: Perfect Number
Check if num is a perfect number and print the result.
Case 10: Exit
Exit the program.
Pseudocode
sql
Copy code
START

DECLARE num, choice, temp, digit, rev, first, prod, count, newNum, last, strong, perfect AS INTEGER
DECLARE frequency[10] AS INTEGER ARRAY initialized to 0
DECLARE isPalindrome AS BOOLEAN initialized to true

PRINT "Enter a number:"
READ num

SET temp = num

PRINT Menu:
    "1. Reverse of the number"
    "2. Number of digits"
    "3. Product of even digits"
    "4. First and last digit"
    "5. Swap first and last digit"
    "6. Palindrome"
    "7. Frequency of the digits"
    "8. Strong number"
    "9. Perfect number"
    "10. Exit"

PRINT "Enter your choice:"
READ choice

SWITCH (choice)
    CASE 1:
        SET rev = 0
        WHILE temp > 0
            SET digit = temp % 10
            SET rev = rev * 10 + digit
            SET temp = temp / 10
        END WHILE
        PRINT "Reverse of the number:", rev

    CASE 2:
        SET count = 0
        WHILE temp > 0
            SET count = count + 1
            SET temp = temp / 10
        END WHILE
        PRINT "Number of digits:", count

    CASE 3:
        SET prod = 1
        WHILE temp > 0
            SET digit = temp % 10
            IF digit % 2 == 0 THEN
                SET prod = prod * digit
            END IF
            SET temp = temp / 10
        END WHILE
        PRINT "Product of even digits:", prod

    CASE 4:
        SET first = 0
        SET last = 0
        WHILE temp > 0
            SET digit = temp % 10
            IF first == 0 THEN
                SET first = digit
            END IF
            SET last = digit
            SET temp = temp / 10
        END WHILE
        PRINT "First and last digit:", first, "and", last

    CASE 5:
        SET newNum = 0
        WHILE temp > 0
            SET digit = temp % 10
            IF digit == first THEN
                SET digit = last
            ELSE IF digit == last THEN
                SET digit = first
            END IF
            SET newNum = newNum * 10 + digit
            SET temp = temp / 10
        END WHILE
        PRINT "Number after swapping:", newNum

    CASE 6:
        WHILE temp > 0
            IF temp % 10 != rev % 10 THEN
                SET isPalindrome = false
                BREAK
            END IF
            SET temp = temp / 10
            SET rev = rev / 10
        END WHILE
        IF isPalindrome THEN
            PRINT "Palindrome: Yes"
        ELSE
            PRINT "Palindrome: No"

    CASE 7:
        IF num < 0 THEN
            SET num = -num
        END IF
        WHILE num > 0
            SET digit = num % 10
            INCREMENT frequency[digit]
            SET num = num / 10
        END WHILE
        PRINT "Digit\tFrequency"
        FOR i FROM 0 TO 9
            PRINT i, "\t", frequency[i]
        END FOR

    CASE 8:
        SET strong = 0
        WHILE temp > 0
            SET digit = temp % 10
            SET fact = 1
            FOR i FROM 1 TO digit
                SET fact = fact * i
            END FOR
            SET strong = strong + fact
            SET temp = temp / 10
        END WHILE
        IF strong == num THEN
            PRINT "Strong number: Yes"
        ELSE
            PRINT "Strong number: No"

    CASE 9:
        SET perfect = 0
        FOR i FROM 1 TO num - 1
            IF num % i == 0 THEN
                SET perfect = perfect + i
            END IF
        END FOR
        IF perfect == num THEN
            PRINT "Perfect number: Yes"
        ELSE
            PRINT "Perfect number: No"

    CASE 10:
        PRINT "Exiting..."

END SWITCH

END
