#ifndef BATTLE_H
#define BATTLE_H


namespace Battle
{
	// Расчитывает урон который наносит атакующий
	int calculateDamage(int powerAtt);

	// Выводит информацию о начале боя
	void start(int playerHealth, int enemyHealth);


}

#endif // !BATTLE_H