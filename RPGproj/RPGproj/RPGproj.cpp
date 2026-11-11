#include <iostream>
#include <Windows.h>
#include "Player.h"
#include "Enemy.h"
#include  "battle.h"


int main()
{
    SetConsoleCP(CP_UTF8);        // Кодировка ввода
    SetConsoleOutputCP(CP_UTF8);  // Кодировка вывода


    Player::name();
    Player::printStats(Player::health(), Player::attPower());
    std::cout << '\n';

    Enemy::name();
    Enemy::printStats(Enemy::health(), Enemy::attPower());
    std::cout << '\n';

    Battle::start();

}
