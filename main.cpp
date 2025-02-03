#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>
#include "LogIn/login.h"
#include "shop/shop.h"

using namespace std;


extern string name;
extern string password;
extern double bank;
int main() {
    
    showlogin();
    cout << endl;
    cout << endl;


    if (name == "admin" && password == "admin") {
        bank = 1000000;
        
    } else {
        generateBank();
    }
    
    cout << "Loading shop..." << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    showShop();

    return 0;

}