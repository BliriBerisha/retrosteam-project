#include <iostream>
using namespace std;
#include <chrono>
#include <thread>
#include "../shop/shop.h"

void showOutro() {
    const char* outro[] = {
        "                                         |",
        "                                         |",
        "                                         |",
        "          RetroSteam Shop                |",
        "   _______                   ________    |",
        "  |ooooooo|      ____       | __  __ |   |",
        "  |[]+++[]|     [____]      |/  \\/  \\|   |",
        "  |+ ___ +|     ]()()[      |\\__/\\__/|   |",
        "  |:|   |:|   ___\\__/___    |[][][][]|   |",
        "  |:|___|:|  |__|    |__|   |++++++++|   |",
        "  |[]===[]|   |_|_/\\_|_|    | ______ |   |",
        "_ ||||||||| _ | | __ | | __ ||______|| __|",
        "  |_______|   |_|[::]|_|    |________|   \\",
        "              \\_|_||_|_/                 \\",
        "                |_||_|                     \\",
        "               _|_||_|_                     \\",
        "      ____    |___||___|  Bliri Berisha FIEK  \\",
        "     /  __\\          ____                     \\",
        "     \\( oo          (___ \\                     \\",
        "     _\\_o/           oo~)/",
        "    / \\|/ \\         _\\-_/_ ",
        "   / / __\\ \\___    / \\|/  \\",
        "   \\ \\|   |__/_)  / / .- \\ \\",
        "    \\/_)  |       \\ \\ .  /_/",
        "     ||___|        \\/___(_/",
        "     | | |          | |  |",
        "     | | |          | |  |",
        "     |_|_|          |_|__|",
        "     [__)_)        (_(___])",
        "           Exiting...                     "
       
        
    };

    for (const char* line : outro) {
        cout << line << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    this_thread::sleep_for(chrono::milliseconds(3000));
}

