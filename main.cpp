#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>
#include "LogIn/login.h"
#include "shop/shop.h"

using namespace std;

int main() {
    
    showlogin();
    cout << endl;
    cout << endl;
    generateBank();
    cout << "Loading shop..." << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    showShop();

    return 0;

}