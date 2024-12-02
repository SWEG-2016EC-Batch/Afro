The pseudocode of the problem:

Input: file size in megabytes (MB),transmission rate = 960 per seconds
Operation :Convert file size to bytes: fileSizeInBytes = fileSizeInMB * 1024 * 1024
 calculate : time in seconds = fileSizeInBytes / 960
Calculate : time in days = time in seconds / 86400,time in hours = time in seconds % 86400 / 3600, time in minutes = time in seconds / 60,time in seconds = time in seconds % 60 
The algorithm of the problem:

Step 1:start 
Step 2: Convert file size in MB to bytes
Step 3:Calculate  time in seconds = fileSizeInBytes / 960
Step 4:Calculate .time in days = time in seconds / 86400
Step 5: Calculate time in hours = time in seconds % 86400 / 3600
Step 6:Calculate time in minutes = time in seconds / 60
Step 7: Calculate time in seconds = time in seconds % 60 
Step 8:Print the time required to send the file in days,hours,minutes and seconds.
Step 9:End.
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
