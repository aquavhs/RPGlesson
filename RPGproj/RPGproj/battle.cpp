#include "battle.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

int Battle::calculateDamage(int damage)
{
	return damage;
}

void Battle::start()
{
	std::cout << "Бой начинается!" << '\n';

	std::cout << "Игрок: ";
	Player::name();

	std::cout << "Враг: ";
	Enemy::name();

}