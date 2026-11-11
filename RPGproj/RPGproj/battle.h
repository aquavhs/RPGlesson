#ifndef BATTLE_H
#define BATTLE_H


namespace Battle
{
	// Расчитывает урон который наносит атакующий
	int calculateDamage(int powerAtt);

	int calculateHealth(int health);

	int calculatePlayerDamage();

	int calculateEnemyDamage();

	// Выводит информацию о начале боя
	void start();


}

#endif // !BATTLE_H