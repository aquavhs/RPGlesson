#include "battle.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

int Battle::calculateDamage(int damage)
{
	return damage;
}

int Battle::calculateHealth(int health)
{
	return health;
}

int Battle::calculatePlayerDamage()
{
	int plHealth = Battle::calculateHealth(Player::health());
	int enDamage = Battle::calculateHealth(Enemy::attPower());
	int getPlayerHealth = plHealth - enDamage;

	return getPlayerHealth;
}

int Battle::calculateEnemyDamage()
{
	int enHealth = Battle::calculateHealth(Enemy::health());
	int plDamage = Battle::calculateDamage(Player::attPower());
	int getEnemyHealth = enHealth - plDamage;

	return getEnemyHealth;

}

void Battle::start()
{
	std::cout << "Бой начинается!" << '\n';

	std::cout << "Игрок: ";
	Player::name();

	std::cout << "Враг: ";
	Enemy::name();

	std::cout << "Урон Врага: " << Enemy::attPower() << '\n';
	std::cout << "Урон Игрока: " << Player::attPower() << '\n';

	std::cout << "Остаток HP игрока: " << Battle::calculatePlayerDamage() << '\n';
	std::cout << "Остаток HP врага: " << Battle::calculateEnemyDamage() << '\n';

}