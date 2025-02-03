#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>
#include "shop.h"
#include "../outro/outro.h"




using namespace std;

// bank and generate bank
double bank = 0;

void generateBank() {
        srand(time(0));
        bank = (rand() % 41 + 10) * 10;
}
  // end of generateBank function


// enum for gameedition
enum GameEdition {
    STANDARD,
    COLLECTORS,
    ULTIMATE,
    COMPLETE,
    GOTY, 
    ALPHA,
    SPECIAL
};

// enum gamestatus
enum status {
    NOT_PURCHASED,
    PURCHASED
};


// struct game
struct Game {
    string title;
    GameEdition edition;
    string description;
    double price;
    status purchaseStatus;
};




// enum giftcard status
enum status_card {
    NOT_PURCHASED_CARD,
    PURCHASED_CARD
};
//  struct for giftcard
struct GiftCard {
    string title;
    double price_card;
    status_card purchaseStatus_card;


};


enum status_sub {
    NOT_PURCHASED_SUB,
    PURCHASED_SUB
};

enum status_canbuy {
    CAN_BUY,
    CANNOT_BUY
};

struct Subscriptions {
    string title;
    double price_sub;
    string description_sub;
    status_sub purchaseStatus_sub;
    status_canbuy canbuy;
    double percentage;
};




Subscriptions subscriptions[] = {
    {"1 Month Subscription", 10, "20% Sale on All Games", NOT_PURCHASED_SUB , CAN_BUY , 0.2},
    {"3 Month Subscription", 25, "30% Sale on All Games", NOT_PURCHASED_SUB , CAN_BUY , 0.3},
    {"6 Month Subscription", 50,  "40% Sale on All Games",NOT_PURCHASED_SUB , CAN_BUY , 0.4},
    {"1 Year Subscription", 100, "50% Sale on All Games" , NOT_PURCHASED_SUB, CAN_BUY , 0.5}
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

//stock of giftcards

GiftCard giftcards[] = {
    {"10$ Gift Card", 10, NOT_PURCHASED_CARD},
    {"25$ Gift Card", 25, NOT_PURCHASED_CARD},
    {"50$ Gift Card", 50, NOT_PURCHASED_CARD},
    {"100$ Gift Card", 100, NOT_PURCHASED_CARD},
    {"250$ Gift Card", 250, NOT_PURCHASED_CARD},
    {"500$ Gift Card", 500, NOT_PURCHASED_CARD}
};


 //showShop function



void showShop() {
    int choice;
  
for (char c : "---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "Welcome to the RetroSteam Shop!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Here you can buy games with a cheap and valid prices! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "You can also buy gift cards to give to your friends! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "You can also buy a subscription to play games for a limited time! " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "You have this amount of Retro-Money: " << bank << endl;
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
     menu:
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;

    cout << "What would you like to buy?" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
   
   
    cout << "1. Games" << endl;
    cout << "2. Gift Cards" << endl;
    cout << "3. Subscriptions" << endl;
    cout << "4. Exit" << endl;
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
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
            showGiftCards();
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        case 3:
            cout << "You have selected Subscriptions!" << endl;
            cout << "Redirection to Subscriptions..." << endl;
            showSubscription();
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        case 4:
            cout << "You have selected Exit!" << endl;
            cout << "Exiting..." << endl;
            showOutro();
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
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}

cout << endl;
    cout << "Games available in the shop:" << endl;
     this_thread::sleep_for(chrono::milliseconds(500));
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "Your current balance: " << bank << endl;
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "0. Exit" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    for (int i = 0 ; i< sizeof(games)/sizeof(games[0]); i++) {
        cout << i+1 << ". " << games[i].title <<  " - " << games[i].price << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
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

    


   for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "You have selected " << games[gameChoice-1].title << " - " << games[gameChoice-1].description << " - " << games[gameChoice-1].price << endl;
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    
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
// end of showGames function





// start of showGiftCards function

void showGiftCards() {
this_thread::sleep_for(chrono::milliseconds(1000));
    char choiceYN;
    GiftCardMenu:
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "Gift Cards available in the shop:" << endl;
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "Your current balance: " << bank << endl;
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "0. Exit" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    for (int i=0;i< sizeof(giftcards)/sizeof(giftcards[0]); i++) {
        cout << i+1 << ". " << giftcards[i].title << " - " << fixed << setprecision(2) << giftcards[i].price_card << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "Enter the number of the gift card you want to buy: ";
    cout << endl;
    int giftCardchoice;
    cin >> giftCardchoice;
       if (giftCardchoice < 0 || giftCardchoice > sizeof(giftcards)/sizeof(giftcards[0])) {
        cout << "Invalid choice!" << endl;
        cout << "Returning back..." << endl;
        goto GiftCardMenu;

        showGiftCards;
    } else if (giftCardchoice == 0) {
        cout << "Exiting..." << endl;
        showShop();
        this_thread::sleep_for(chrono::milliseconds(1000));
        exit(0);
    }
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "You have selected " << giftcards[giftCardchoice-1].title << " - " << giftcards[giftCardchoice-1].price_card << endl;
    for (char c : " ---------------------------") {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(10));
}
cout << endl;
    cout << "Are you sure you want to buy this gift card?" << endl;
     this_thread::sleep_for(chrono::milliseconds(1000));
     cout << "Enter 'Y' for Yes or 'N' for No: ";
      this_thread::sleep_for(chrono::milliseconds(1000));
    cin >> choiceYN;
    switch (choiceYN) {
        case 'y':
        case 'Y':
            if (giftcards[giftCardchoice-1].purchaseStatus_card == PURCHASED_CARD) {
                cout << "You have already bought this gift card!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto GiftCardMenu;

                
            }
            if (giftcards[giftCardchoice-1].price_card > bank) {
                cout << "You don't have enough money to buy this gift card!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto GiftCardMenu;
            }
        
            bank -= giftcards[giftCardchoice-1].price_card;
            cout << "You have successfully bought " << giftcards[giftCardchoice-1].title << "!" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Your remaining balance is: " << bank << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Returning back..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
    

            giftcards[giftCardchoice-1].purchaseStatus_card = PURCHASED_CARD;
            goto GiftCardMenu;
            break;
            case 'n':
            case 'N':
                cout << "You have selected No!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto GiftCardMenu;
                break;
            default:    
                cout << "Invalid choice!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto GiftCardMenu;
                break;



    }
    this_thread::sleep_for(chrono::milliseconds(1000));

     
}

// end of showGiftCards function



void showSubscription() {
    this_thread::sleep_for(chrono::milliseconds(1000));
    int subChoice;
    char paymentChoice;
    subMenu:
    for (char c : " ---------------------------") {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
    cout << endl;
    cout << "Subscriptions available in the shop:" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    for (char c : " ---------------------------") {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
    cout << endl;
    cout << "Your current balance: " << bank << endl;
    for (char c : " ---------------------------") {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
    cout << endl;
    cout << "0. Exit" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    for (int i = 0; i < sizeof(subscriptions) / sizeof(subscriptions[0]); i++) {
        cout << i + 1 << ". " << subscriptions[i].title << " - " << subscriptions[i].description_sub << " - " << subscriptions[i].price_sub << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    for (char c : " ---------------------------") {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
    cout << endl;
    cout << "Enter the number of the subscription you want to buy (0 to Exit...): ";
    cout << endl;
    cin >> subChoice;

    

    if (subChoice < 0 || subChoice > sizeof(subscriptions) / sizeof(subscriptions[0])) {
        cout << "Invalid choice!" << endl;
        cout << "Returning back..." << endl;
        this_thread::sleep_for(chrono::milliseconds(1500));
        goto subMenu;
    } else if (subChoice == 0) {
        cout << "Exiting..." << endl;
        showShop();
        this_thread::sleep_for(chrono::milliseconds(1000));
        exit(0);
    }

    for (char c : " ---------------------------") {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
    cout << endl;
    cout << "You have selected " << subscriptions[subChoice - 1].title << " - " << subscriptions[subChoice - 1].price_sub << endl;
    for (char c : " ---------------------------") {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
    cout << endl;

    cout << "Proceed to payment?" << endl;
    cout << "Enter 'Y' for Yes or 'N' for No: ";
    cin >> paymentChoice;

    switch (paymentChoice) {
        case 'Y':
        case 'y':
            cout << "You have selected Yes!" << endl;
            cout << "Redirecting to payment..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));


            if (subscriptions[subChoice-1].canbuy == CANNOT_BUY) {
                cout << "You can't buy this subscription because you already have one!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto subMenu;
            }

            if (subscriptions[subChoice - 1].purchaseStatus_sub == PURCHASED_SUB) {
                cout << "You have already bought this subscription!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto subMenu;
            }
            if (subscriptions[subChoice - 1].price_sub > bank) {
                cout << "You don't have enough money to buy this subscription!" << endl;
                cout << "Returning back..." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                goto subMenu;
            }

            // buying subscription
            bank -= subscriptions[subChoice - 1].price_sub;
            cout << "You have successfully bought " << subscriptions[subChoice - 1].title << "!" << endl;
            cout << "You now have " << subscriptions[subChoice - 1].description_sub << "!" << endl;
            this_thread::sleep_for(chrono::milliseconds(1500));
            cout << "Your remaining balance is: " << bank << endl;
            cout << "Returning back..." << endl;
        subscriptions[subChoice-1].purchaseStatus_sub = PURCHASED_SUB;
        for (int i = 0; i<sizeof(subscriptions)/sizeof(subscriptions[0]); i++) {
            if (i != subChoice - 1) {
                subscriptions[i].canbuy = CANNOT_BUY;
            }
        }
        for (int i = 0; i < sizeof(games) / sizeof(games[0]); i++) {
            games[i].price = games[i].price * (1-subscriptions[subChoice-1].percentage);
        }


           



            this_thread::sleep_for(chrono::milliseconds(1000));
            goto subMenu;

            break;
        case 'N':
        case 'n':
            cout << "You have selected No!" << endl;
            cout << "Returning back..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            goto subMenu;
            break;
        default:
            cout << "Invalid choice!" << endl;
            cout << "Returning back..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            goto subMenu;
            break;
    }
}












