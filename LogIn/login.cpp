#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "login.h"
using namespace std;

string name;
string password;


void showlogin() {
   


for (char c : " __------------------------------------------------------------------------------------------------------------------__") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    string logo[] = {
        " ________  _______  _________  ________  ________          ________  _________  _______   ________  _____ ______      ",
        "|\\   __  \\|\\  ___ \\|\\___   ___\\\\   __  \\|\\   __  \\        |\\   ____\\|\\___   ___\\\\  ___ \\ |\\   __  \\|\\   _ \\  _   \\    ",
        "\\ \\  \\|\\  \\ \\   __/\\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\       \\ \\  \\___|\\|___ \\  \\_\\ \\   __/|\\ \\  \\|\\  \\ \\  \\\\__\\ \\  \\   ",
        " \\ \\   _  _\\ \\  \\_|/__  \\ \\  \\ \\ \\   _  _\\ \\  \\\\\\  \\       \\ \\_____  \\   \\ \\  \\ \\ \\  \\_|/_\\ \\   __  \\ \\  \\\\|__| \\  \\  ",
        "  \\ \\  \\\\  \\\\ \\  \\_|\\ \\  \\ \\  \\ \\ \\  \\\\  \\\\ \\  \\\\\\  \\       \\|____|\\  \\   \\ \\  \\ \\ \\  \\_|\\ \\ \\  \\_|\\ \\ \\  \\    \\ \\  \\ ",
        "   \\ \\__\\\\ _\\\\ \\_______\\  \\ \\__\\ \\ \\__\\\\ _\\\\ \\_______\\        ____\\_\\  \\   \\ \\__\\ \\ \\_______\\ \\_______\\ \\__\\    \\ \\__\\",
        "    \\|__|\\|__|\\|_______|   \\|__|  \\|__|\\|__|\\|_______|       |\\_________\\   \\|__|  \\|_______|\\|__|\\|__|\\|__|     \\|__|",
        "                                                             \\|_________|                                             ",
        ""
    };

    for (const string& line : logo) {
        cout << line << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }

for (char c : " __------------------------------------------------------------------------------------------------------------------__") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;


cout << "Welcome to the RetroSteam Shop please log in to contiue." << endl;
cout<< endl;

cout << setfill('-') << setw(33) << "-" << endl;
cout << setfill(' ') << setw(15) << " " << "LOGIN" << setw(15) << " " << endl;
cout << setfill('-') << setw(33) << "-" << endl;
cout << endl;
cout << "Username: ";
cin >> name;
cout << "Password: ";
cin >> password;

if (name == "admin" && password == "admin") {
    cout << "You have successfully logged in as admin!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
} else if (name.length() < 3 || password.length() < 8) {
    cout << "Invalid username or password!" << endl;
    cout << "Returning back..." << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    showlogin();
}


cout << endl;
cout << "Logging in as " << name << "..." << endl;
this_thread::sleep_for(chrono::milliseconds(1000));
cout << endl;
for (char c : " __---------------------------__") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}

cout << endl;

cout << setfill(' ') << setw(15) << " " << name << " " << setw(15) << " " << endl;
for (char c : " __---------------------------__") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
this_thread::sleep_for(chrono::milliseconds(1000));
cout << endl;
cout << endl;




}
