// Lafore C++ Ch.5 Q.9
// A program to swap two time values of type struct

#include <iostream>

using namespace std;

struct timeT{
    int hours, minutes, seconds;
};

void Swap(timeT&, timeT&);

int main(){

    timeT time1, time2;
    char ch;

    cout << "Enter 1st time in hh:mm:ss format: ";
    cin >> time1.hours >> ch >> time1.minutes >> ch >> time1.seconds;

    cout << "\nEnter 2nd time in hh:mm:ss format: ";
    cin >> time2.hours >> ch >> time2.minutes >> ch >> time2.seconds;

    cout << "\nBefore Swap:";
    cout << "\n1st time is : " << time1.hours << ch << time1.minutes << ch << time1.seconds;
    cout << "\n2nd time is : " << time2.hours << ch << time2.minutes << ch << time2.seconds;


    Swap(time1, time2);
    cout << "\n\nAfter Swap:" << endl;
    cout << "1st time is : " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
    cout << "2nd time is : " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;
    return 0;
}

void Swap(timeT& time1, timeT& time2){
    time1.hours = time1.hours+time2.hours;
    time2.hours = time1.hours-time2.hours;
    time1.hours = time1.hours-time2.hours;

    time1.minutes = time1.minutes+time2.minutes;
    time2.minutes = time1.minutes-time2.minutes;
    time1.minutes = time1.minutes-time2.minutes;

    time1.seconds = time1.seconds+time2.seconds;
    time2.seconds = time1.seconds-time2.seconds;
    time1.seconds = time1.seconds-time2.seconds;
}
