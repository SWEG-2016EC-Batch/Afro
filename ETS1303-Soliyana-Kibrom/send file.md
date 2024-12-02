# Send file


A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may
take days.

## Program Analysis 

Input: 

* File size in megabytes (MB)

* Transmission rate = 960 bytes per second.

output: The total time required to transfer the file which is days,hours,minutes and seconds.

operation or Process: 

* Variable Declaration

* print the input prompt message and read the corresponding input data.

* Convert the input file size from MB to Bytes (1 MB = 1024 * 1024 bytes).

* calculate

1.time in seconds = fileSizeInBytes / 960

2.time in days = time in seconds / 86400

3.time in hours = time in seconds % 86400 / 3600

4.time in minutes = time in seconds / 60

5.time in seconds = time in seconds % 60 

* print out prompt messagea and process the result as BMI= weight/(height*height)



## Pseudocode 

Step 1:start 

step 2:  input file size in MB and store it in fileSizeMB.

Step 3: Convert file size in MB to bytes as fileSizeBytes=fileSizeMB×1024×1024

Step 4:Calculate  time in seconds = fileSizeInBytes / 960

Step 5:Calculate .time in days = time in seconds / 86400

Step 6: Calculate time in hours = time in seconds % 86400 / 3600

Step 7:Calculate time in minutes = time in seconds / 60

Step 8: Calculate time in seconds = time in seconds % 60 

Step 9:Print the time required to send the file in days,hours,minutes and seconds.

Step 10:End.



```mermaid
flowchart TD
    Start([Start])
    Input1["Read the file size in MB (fileSizeMB)"]
    ConvertToBytes["Convert fileSizeMB to bytes: fileSizeBytes = fileSizeMB * 1024 * 1024"]
    CalculateTime["Calculate time in seconds: timeinseconds = fileSizeBytes / 960"]
    CalculateDays["Calculate time in days: timeindays = timeinseconds / 86400"]
    CalculateHours["Calculate time in hours: timeinhours = (timeinseconds % 86400) / 3600"]
    CalculateMinutes["Calculate time in minutes: timeinminutes = (timeinseconds % 3600) / 60"]
    CalculateSeconds["Calculate remaining seconds: timeinseconds = timeinseconds % 60"]
    OutputTime["Output the result as: timeindays days, timeinhours hours, timeinminutes minutes, timeinseconds seconds"]
    End([End])

    Start --> Input1
    Input1 --> ConvertToBytes
    ConvertToBytes --> CalculateTime
    CalculateTime --> CalculateDays
    CalculateDays --> CalculateHours
    CalculateHours --> CalculateMinutes
    CalculateMinutes --> CalculateSeconds
    CalculateSeconds --> OutputTime
    OutputTime --> End
