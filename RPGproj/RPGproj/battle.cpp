#include "battle.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

int calculateDamage(int powerAtt, int health)
{
	int damage = health - powerAtt;
	
	return damage;
}

void  start()
{
	std::cout << "Бой начинается!" << '\n';
	std::cout << "Игрок: " << Player::name << '\n';
	std::cout << "Враг: " << Enemy::name << '\n';

	int x = calculateDamage(Enemy::attPower(), Player::health());

	std::cout << "Полученный урон: " << x << '\n';
}