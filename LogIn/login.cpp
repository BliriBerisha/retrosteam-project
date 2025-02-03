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
   



    std::cout << " ________  _______  _________  ________  ________          ________  _________  _______   ________  _____ ______      \n";
    std::cout << "|\\   __  \\|\\  ___ \\|\\___   ___\\\\   __  \\|\\   __  \\        |\\   ____\\|\\___   ___\\\\  ___ \\ |\\   __  \\|\\   _ \\  _   \\    \n";
    std::cout << "\\ \\  \\|\\  \\ \\   __/\\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\       \\ \\  \\___|\\|___ \\  \\_\\ \\   __/|\\ \\  \\|\\  \\ \\  \\\\__\\ \\  \\   \n";
    std::cout << " \\ \\   _  _\\ \\  \\_|/__  \\ \\  \\ \\ \\   _  _\\ \\  \\\\\\  \\       \\ \\_____  \\   \\ \\  \\ \\ \\  \\_|/_\\ \\   __  \\ \\  \\\\|__| \\  \\  \n";
    std::cout << "  \\ \\  \\\\  \\\\ \\  \\_|\\ \\  \\ \\  \\ \\ \\  \\\\  \\\\ \\  \\\\\\  \\       \\|____|\\  \\   \\ \\  \\ \\ \\  \\_|\\ \\ \\  \\ \\  \\ \\  \\    \\ \\  \\ \n";
    std::cout << "   \\ \\__\\\\ _\\\\ \\_______\\  \\ \\__\\ \\ \\__\\\\ _\\\\ \\_______\\        ____\\_\\  \\   \\ \\__\\ \\ \\_______\\ \\__\\ \\__\\ \\__\\    \\ \\__\\\n";
    std::cout << "    \\|__|\\|__|\\|_______|   \\|__|  \\|__|\\|__|\\|_______|       |\\_________\\   \\|__|  \\|_______|\\|__|\\|__|\\|__|     \\|__|\n";
    std::cout << "                                                             \\|_________|                                             \n";
cout << endl;



cout << "Welcome to the RetroSteam Shop please log in to contiue" << endl;
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
cout << setfill('-') << setw(33) << "-" << endl;
cout << setfill(' ') << setw(15) << " " << name << " " << setw(15) << " " << endl;
cout << setfill('-') << setw(33) << "-" << endl;
this_thread::sleep_for(chrono::milliseconds(1000));
cout << endl;
cout << endl;




}
