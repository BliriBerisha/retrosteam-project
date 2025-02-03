#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>
#include "shop.h"


using namespace std;

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



void showShop() {

    int choice;


    srand(time(0));
    double bank = (rand() % 41 + 10) * 10;

    cout << "Welcome to the RetroSteam Shop!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Here you can buy games with a cheap and valid prices! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "You can also buy gift cards to give to your friends! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "You can also buy a subscription to play games for a limited time! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));

    cout << "You have this amount of retro-money: " << bank << endl;
     menu:
    cout << "What would you like to buy?" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
   
   
    cout << "1. Games" << endl;
    cout << "2. Gift Cards" << endl;
    cout << "3. Subscriptions" << endl;
    cout << "4. Exit" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Enter your choice (in numbers): ";
    cin>> choice;
    
    switch(choice) {
        case 1:
            cout << "You have selected Games!" << endl;
            cout << "Redirection to Games..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            showGames();
            break;
        case 2: 
            cout << "You have selected Gift Cards!" << endl;
            cout << "Redirection to Gift Cards..." << endl;
            this_thread::sleep_for(chrono::milliseconds(800));
            break;
        case 3:
            cout << "You have selected Subscriptions!" << endl;
            cout << "Redirection to Subscriptions..." << endl;
            this_thread::sleep_for(chrono::milliseconds(800));
            break;
        case 4:
            cout << "You have selected Exit!" << endl;
            cout << "Exiting..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        default:
            cout << "Invalid choice!" << endl;
            cout << "Returning to main menu..." << endl;
            this_thread::sleep_for(chrono::milliseconds(800));
            goto menu;
            break;
    }



    

    
    

}


//showGames function

void showGames() {
    int gameChoice;
    char paymentChoice;
    gameMenu:
    cout << "Games available in the shop:" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0 ; i< sizeof(games)/sizeof(games[0]); i++) {
        cout << i+1 << ". " << games[i].title <<  " - " << games[i].price << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    cout << "--------------------------------" << endl;
    cout << "Enter the number of the game you want to buy: ";
    cout << endl;
    cin >> gameChoice;

    if (gameChoice < 1 || gameChoice > sizeof(games)/sizeof(games[0])) {
        cout << "Invalid choice!" << endl;
        cout << "Returning to back..." << endl;
        this_thread::sleep_for(chrono::milliseconds(1500));

        goto gameMenu;
    }

    cout << "--------------------------------" << endl;
    cout << "You have selected " << games[gameChoice-1].title << " - " << games[gameChoice-1].description << " - " << games[gameChoice-1].price << endl;
    cout << "--------------------------------" << endl;
    cout << "Proceed to payment?" << endl;
    cout << "Enter 'Y' for Yes or 'N' for No: ";
    cin >> paymentChoice;

    switch (paymentChoice) {
        case 'Y':
        case 'y':
            cout << "You have selected Yes!" << endl;
            cout << "Redirecting to payment..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        case 'N':
        case 'n':
            cout << "You have selected No!" << endl;
            cout << "Returning to back..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            goto gameMenu;
            break;
        default:
            cout << "Invalid choice!" << endl;
            cout << "Returning to back..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            goto gameMenu;
            break;
    }




    
}














int main() {
    showShop();
    return 0;
}