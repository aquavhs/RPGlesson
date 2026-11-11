#include "battle.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

int Battle::calculateDamage(int damage)
{
	return damage;
}

void Battle::start(int playerHealth, int enemtHealth)
{
	std::cout << "Бой начинается!" << '\n';

	std::cout << "Игрок: ";
	Player::name();

	std::cout << "Враг: ";
	Enemy::name();

	int enemyAttak = Battle::calculateDamage(Enemy::attPower());
	int plDamage = playerHealth - enemyAttak;

	std::cout << "Игрок получил урон: " << enemyAttak << '\n';
	std::cout << "Здоровье игрока: " << plDamage << '\n';


	int playerAttak = Battle::calculateDamage(Player::attPower());
	int enDamage = enemtHealth - playerAttak;

	std::cout << "Враг получил урон: " << playerAttak << '\n';
	std::cout << "Здоровье врага: " << enDamage << '\n';

}