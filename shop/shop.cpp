#include <iostream>
#include <thread>
#include <chrono>
#include <string>

using namespace std;



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
    this_thread::sleep_for(chrono::milliseconds(400));
    cout << "1. Games" << endl;
    cout << "2. Gift Cards" << endl;
    cout << "3. Subscriptions" << endl;
    cout << "4. Exit" << endl;
    this_thread::sleep_for(chrono::milliseconds(400));
    cout << "Enter your choice: ";
    

}



enum GameEdition {
    STANDARD,
    COLLECTORS,
    ULTIMATE,
    COMPLETE,
    GOTY, 
    ALPHA,
    SPECIAL
};

struct Game {
    string title;
    GameEdition edition;
    string description;
    double price;
};

Game games[] = {
    {"The Elder Scrolls V: Skyrim", SPECIAL, "Special Edition (with all DLCs)", 49.99},
    {"Cyberpunk 2077", COLLECTORS, "Collector's Edition", 59.99},
    {"Red Dead Redemption 2", ULTIMATE, "Ultimate Edition", 59.99},
    {"Destiny 2", COMPLETE, "Forsaken (with all expansions)", 39.99},
    {"World of Warcraft", COMPLETE, "Shadowlands (with a year's subscription)", 49.99},
    {"Call of Duty: Modern Warfare", SPECIAL, "Battle Pass & Special Editions", 49.99},
    {"Final Fantasy XIV", COMPLETE, "Complete Collector’s Edition", 39.99},
    {"The Witcher 3: Wild Hunt", GOTY, "Game of the Year Edition (with expansions)", 39.99},
    {"Star Citizen", ALPHA, "Various Pack Upgrades", 39.99},
    {"Halo: The Master Chief Collection", SPECIAL, "Special Editions", 39.99}
};


int main() {
  
    return 0;
}
