#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>
#include "shop.h"


using namespace std;

double bank;
void generateBank() {
        srand(time(0));
        bank = (rand() % 41 + 10) * 10;
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

enum status {
    NOT_PURCHASED,
    PURCHASED
};

struct Game {
    string title;
    GameEdition edition;
    string description;
    double price;
    status purchaseStatus;
};


//stock of games
Game games[] = {
    {"The Elder Scrolls V: Skyrim", SPECIAL, "Special Edition (with all DLCs)", 49.99, NOT_PURCHASED},
    {"Cyberpunk 2077", COLLECTORS, "Collector's Edition", 59.99, NOT_PURCHASED},
    {"Red Dead Redemption 2", ULTIMATE, "Ultimate Edition", 59.99, NOT_PURCHASED},
    {"Destiny 2", COMPLETE, "Forsaken (with all expansions)", 39.99, NOT_PURCHASED},
    {"World of Warcraft", COMPLETE, "Shadowlands (with a year's subscription)", 49.99, NOT_PURCHASED},
    {"Call of Duty: Modern Warfare", SPECIAL, "Battle Pass & Special Editions", 49.99, NOT_PURCHASED},
    {"Final Fantasy XIV", COMPLETE, "Complete Collector’s Edition", 39.99, NOT_PURCHASED},
    {"The Witcher 3: Wild Hunt", GOTY, "Game of the Year Edition (with expansions)", 39.99, NOT_PURCHASED},
    {"Star Citizen", ALPHA, "Various Pack Upgrades", 39.99, NOT_PURCHASED},
    {"Halo: The Master Chief Collection", SPECIAL, "Special Editions", 39.99, NOT_PURCHASED}
};




 //showShop function

void showShop() {

    int choice;



  

    cout << "Welcome to the RetroSteam Shop!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Here you can buy games with a cheap and valid prices! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "You can also buy gift cards to give to your friends! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "You can also buy a subscription to play games for a limited time! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "--------------------------------" << endl;
    cout << "You have this amount of Retro-Money: " << bank << endl;
    cout << "--------------------------------" << endl;
     menu:
    cout << "--------------------------------" << endl;
    cout << "What would you like to buy?" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
   
   
    cout << "1. Games" << endl;
    cout << "2. Gift Cards" << endl;
    cout << "3. Subscriptions" << endl;
    cout << "4. Exit" << endl;
    cout << "--------------------------------" << endl;
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
    this_thread::sleep_for(chrono::milliseconds(1000));
    int gameChoice;
   
    char paymentChoice;
    gameMenu:
    cout << "Games available in the shop:" << endl;
     this_thread::sleep_for(chrono::milliseconds(500));
    cout << "--------------------------------" << endl;
    cout << "Your current balance: " << bank << endl;
    cout << "0. Exit" << endl;
    for (int i = 0 ; i< sizeof(games)/sizeof(games[0]); i++) {
        cout << i+1 << ". " << games[i].title <<  " - " << games[i].price << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    cout << "--------------------------------" << endl;
    cout << "Enter the number of the game you want to buy (0 to Exit...): ";
    cout << endl;
    cin >> gameChoice;
   
    if (gameChoice < 0 || gameChoice > sizeof(games)/sizeof(games[0])) {
        cout << "Invalid choice!" << endl;
        cout << "Returning back..." << endl;
        this_thread::sleep_for(chrono::milliseconds(1500));

        goto gameMenu;
    } else if (gameChoice == 0) {
        cout << "Exiting..." << endl;
        showShop();
        this_thread::sleep_for(chrono::milliseconds(1000));
        exit(0);
    }

    


    cout << "--------------------------------" << endl;
    cout << "You have selected " << games[gameChoice-1].title << " - " << games[gameChoice-1].description << " - " << games[gameChoice-1].price << endl;
    cout << "--------------------------------" << endl;
    
    cout << "Proceed to payment?" << endl;
    cout << "Enter 'Y' for Yes or 'N' for No: ";
    cin >> paymentChoice;
// bug fix
    switch (paymentChoice) {
        case 'Y':
        case 'y':
            
            cout << "You have selected Yes!" << endl;
            cout << "Redirecting to payment..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));

            if (games[gameChoice-1].purchaseStatus == PURCHASED) {
                cout << "You have already bought this game!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto gameMenu;
            }
            if (games[gameChoice-1].price > bank) {
                cout << "You don't have enough money to buy this game!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto gameMenu;
            }
          

            //buying game
            bank -= games[gameChoice-1].price;
            cout << "You have successfully bought " << games[gameChoice-1].title << "!" << endl;
            cout << "Your remaining balance is: " << bank << endl;
            cout << "Returning back..." << endl;
            games[gameChoice-1].purchaseStatus = PURCHASED;
            this_thread::sleep_for(chrono::milliseconds(1000));
            goto gameMenu;
            
            break;
        case 'N':
        case 'n':
            cout << "You have selected No!" << endl;
            cout << "Returning back..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            goto gameMenu;
            break;
        default:
            cout << "Invalid choice!" << endl;
            cout << "Returning back..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            goto gameMenu;
            break;
    }





    
}














