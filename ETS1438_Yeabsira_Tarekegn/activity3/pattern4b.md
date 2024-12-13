# problem analysis
+ **Input** - the number of the dimension
+ **Output** - all kinds of shapes
first and last swapped, palindrome or not, frequency of digits, perfect or not, strong or not
+ **Operation** -
  - read input
  - make appropriate calculations to get desired shapes and patterns
  - print patterns

# Algorithm design
## Pseudo code
+ step 1: start
+ step 2: read num
+ step 3: check the validity of input and check if num is greater than 2
+ step 4: if validity fails, ask user to go again and go to step 2
+ step 5: ask user to choose a digit according to the shape or patters he/she wants to see
+ step 6: check the validity of the user input
+ step 7: if validity fails, ask user to go again and go to step 5
+ step 8: if user input is 1
    - step 8.1: make temp = num-1
    - step 8.2: make i = 0
       - step 8.2.1: make count = 1, add i to count and make istrue = true
       - step 8.2.2: make j = 0
          - step 8.2.2.1: if istrue is true
             - step 8.2.2.1.1: print  blank until k goes from 0 to temp and make istrue = false
          - step 8.2.2.2: print count and decrease 1 from it
          - step 8.2.2.3: if count is less than 1, go to 8.2.3
          - step 8.2.2.4: add 1 to j, if j is less than num then go to step 8.2.2.1 else go to
      - step 8.2.3: print new line and decrease 1 from temp
      - step 8.2.4: add 1 to i and if i < num then go to step 8.2.1 else go to step 9
+ step 9: if user input is 2
   - step 9.1: make count = 1 and make i = 0
   - step 9.2: make letter = 'A'
   - step 9.3: make j = 0
      - step 9.3.1: print the letter and add 1 to the letter
      - step 9.3.2: add 1 to j and if j < count then go to step 9.3.1 else 9.4
   - step 9.4: add 1 to count and make new line
   - step 9.5: add 1 to i and if i < num go to 9.2 else go to step 1o
+ step 10: if user input is 3
   - step 10.1: make i = 0
      - step 10.1.1: letter = 'a' and make j = 0
        - step 10.1.1.1: print letter and add 1 to it
        - step 10.1.1.2: add 1 to j and if j < num go to step 10.1.1.1, if not go to step 10.1.2
      - step 10.1.2: make new line
      - step 10.1.3: add 1 to i and if i < num go to step 10.1.1, if not go to step 11
+ step 11: if user input is 4
    - step 11.1: make i = 0
      - step 11.1.1: make j = 0
        - step 11.1.1.1: if i is 0 or num-1 then print *
        - step 11.1.1.2: else if j is 0 or j is num -1 print * else print blank
        - step 11.1.1.3: add 1 to j and if j < num go to step 11.1.1.1, if not go to step 11.1.2
      - step 11.1.2: make new line
      - step 11.1.3: add 1 to i and if i < num go to step 11.1.1, if not go to step 12
+ step 12: if user input is 5,  make count = num
   - step 12.1: make i = 0
      - step 12.1.1: make j = 0
        - step 12.1.1.1: print *
        - step 12.1.1.2: add 1 to j and if j < count go to step 12.1.1.1, if not go to step 12.1.2
      - step 12.1.2: make new line and decrease 1 form count 
      - step 12.1.3: add 1 to i and if i < num go to step 12.1.1, if not go to step 13
+ step 13: if user input 6, make temp = num
   - step 13.1: make i = 0
      - step 13.1.1: make j = 0
        - step 13.1.1.1: if i is 0 or num-1 then print *
        - step 13.1.1.2: else if j is 0 or j is num -1 print * else print blank
        - step 13.1.1.3: add 1 to j and if j < temp go to step 13.1.1.1, if not go to step 13.1.2
      - step 13.1.2: make new line, decrease 1 from temp
      - step 13.1.3: add 1 to i and if i < num go to step 13.1.1, if not go to step 14
+ step 14: if user input 7, make count equal to num
    - step 14.1: make i = 0
    - step 14.2: make count = num and decrease i from it
      - step 14.2.1: make j = 1
        - step 14.2.1.1: if j equals count then print *
            - step 14.2.1.1.1: if count < num + 1 then add 2 to count
        - step 14.2.1.2: else make a blank space
        - step 14.2.1.3: add 1 to j and if j <= twice of num - 1 then go to step 14.2.1.1 else go to 14.2.2
      - step 14.2.2: add a new line
      - step 14.2.3: add 1 to i and if i < num then go to step  14.2 else go ot step 15
+ step 15: if user input is 8
    - step 15.1: make i = 0
    - step 15.2: make count = 1 and add i to it
      - step 15.2.1: make j = 1
        - step 15.2.1.1: if j equals count then print *
            - step 15.2.1.1.1: if count < twice num - i - 1 then add 2 to count
        - step 15.2.1.2: else make a blank space
        - step 15.2.1.3: add 1 to j and if j <= twice of num - 1 then go to step 15.2.1.1 else go to 14.2.2
      - step 15.2.2: add a new line
      - step 15.2.3: add 1 to i and if i < num then go to step  15.2 else go ot step 16
+ step 16: if user input is 9
    - step 16.1: make i = 0
    - step 16.2: make count = num and decrease i from it
      - step 16.2.1: make j = 1
        - step 16.2.1.1: if i is 0 or i is num -1 then
            - step 16.2.1.1.1: if j is count then print *
                - step 16.2.1.1.1.1: if count < num + i then add 2 to count
            - step 16.2.1.1.2: else if j is count then print * again and else print blank
        - step 16.2.1.2: add 1 to j and if j <= twice of num - 1 then go to step 16.2.1.1 else go to step 16.2.2
      - step 16.2.2: add 1 to i and if i < num then go to step 16.2 else go to step 17
+ step 17: if user input is 0 then gp to step 2
+ step 18: ask if user want to continue
+ step 19: if user choice is y then go to step 5 else go to step 20
+ step 20: end
          
        
