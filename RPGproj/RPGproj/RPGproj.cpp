//#include <iostream>
#include <Windows.h>
#include "Player.h"


int main()
{
    SetConsoleCP(CP_UTF8);        // Кодировка ввода
    SetConsoleOutputCP(CP_UTF8);  // Кодировка вывода



    Player::printStats(Player::health(), Player::attPower());


}
