#include <iostream>
#include "Player.h"

void Player::name()
{
	std::cout << "Игорь" << '\n';
}

int Player::health()
{
	int health{ 100 };
	return health;
}

int Player::attPower()
{
	int attPower{ 20 };
	return attPower;
}


void Player::printStats(int health, int attPower)
{
	std::cout << "Здоровье игрока: " << health << '\n' << "Сила атаки: " << attPower << '\n';
}