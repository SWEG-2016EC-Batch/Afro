#include <iostream>
using namespace std;

int main() {

    int fileSizeMB, fileSizeBytes, timeindays,timeinhours,timeinminutes,timeinseconds;
    cout << "Enter the file size in MB: \n";
    cin >> fileSizeMB;
    fileSizeBytes = fileSizeMB * 1024 * 1024;
    timeinseconds = fileSizeBytes / 960;
    timeindays = timeinseconds / 86400;
    timeinhours = timeinseconds % 86400 / 3600;
    timeinminutes = timeinseconds % 3600 / 60;
    timeinseconds =timeinseconds % 60;
    cout << "Time required to send the file: \n" <<timeindays<< " days\n" <<timeinhours<<" hours\n"
    <<timeinminutes<<" minutes\n"<<timeinseconds<<" seconds"<< endl;
    return 0;
}
