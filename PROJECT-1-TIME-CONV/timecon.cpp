#include <iostream>
using namespace std;

class Timeconverter {
private:

    int hours;
    int minutes;
    int secound;
    int totalsecound;

public:
    Timeconverter() {
        hours = 0;
        minutes = 0;
        secound = 0;
        totalsecound = 0;
    }

    void secoundToTime(int secs) {
        totalsecound = secs;
        hours = secs / 3600;
        minutes = (secs % 3600) / 60;
        secound = secs % 60;
    }

    void timetosecounds(int h, int m, int s) {
        hours = h;
        minutes = m;
        secound = s;
        totalsecound = (h * 3600) + (m * 60) + s;
    }

    void displaytime() {
        cout << "HH:MM:SS => " << hours << ":";
        if (minutes < 10) cout << "0";
        cout << minutes << ":";
        if (secound < 10) cout << "0";
        cout << secound << endl;
    }

    void displaysecound() {
        cout << "Total seconds: " << totalsecound << endl;
    }
};

int main() {
    Timeconverter tc;
    int choice;

    cout << "Time Converter Program" << endl;
    cout << "1. Convert seconds to HH:MM:SS" << endl;
    cout << "2. Convert HH:MM:SS to seconds" << endl;
    cout << "Enter your choice (1/2): ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        int secs;
        cout << "Enter total seconds: ";
        cin >> secs;
        tc.secoundToTime(secs);
        cout << "Output:" << endl;
        tc.displaytime();
    }
    else if (choice == 2) {
        int h, m, s;
        cout << "Enter hours: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;
        tc.timetosecounds(h, m, s);
        cout << "Output:" << endl;
        tc.displaysecound();
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
