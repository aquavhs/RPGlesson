#include "battle.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

int Battle::calculateDamage(int damage)
{
	return damage;
}

void Battle::start(int health)
{
	std::cout << "Бой начинается!" << '\n';

	std::cout << "Игрок: ";
	Player::name();

	std::cout << "Враг: ";
	Enemy::name();

	int enemyAttak = Battle::calculateDamage(Enemy::attPower());
	std::cout << "Игрок получил урон: " << enemyAttak << '\n';

	int damage = health - Battle::calculateDamage(Enemy::attPower());
	std::cout << "Здоровье игрока: " << damage << '\n';

}