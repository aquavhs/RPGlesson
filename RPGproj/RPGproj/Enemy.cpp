#include <iostream>
#include "Enemy.h"

void Enemy::name()
{
	std::cout << "Марцепан" << '\n';
}

int Enemy::health()
{
	int health{ 80 };
	return health;
}

int Enemy::attPower()
{
	int attPower{ 15 };
	return attPower;
}


void Enemy::printStats(int health, int attPower)
{
	std::cout << "Здоровье врага: " << health << '\n' << "Сила атаки: " << attPower << '\n';
}