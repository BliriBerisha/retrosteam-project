#include <iostream>
using namespace std;

#include <thread>
#include <chrono>

void showShop() {
    cout << "Welcome to the RetroSteam Shop!" << endl;
    this_thread::sleep_for(chrono::milliseconds(400));
    cout << "Here you can buy games with a cheap and valid prices! ✓" << endl;
    this_thread::sleep_for(chrono::milliseconds(400));
    cout << "You can also buy gift cards to give to your friends! ✓" << endl;
    this_thread::sleep_for(chrono::milliseconds(400));
    cout << "You can also buy a subscription to play games for a limited time! ✓" << endl;
    this_thread::sleep_for(chrono::milliseconds(400));
    cout << "What would you like to buy?" << endl;
}