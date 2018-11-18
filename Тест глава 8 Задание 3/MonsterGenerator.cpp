#ifndef MONSTERGENERATOR
#define MONSTERGENERATOR

#include <cstdlib>
#include <ctime>
#include "Monster.h"
#include "MonsterGenerator.h"
#include <array>

Monster MonsterGenerator::generateMonster() // случайная генерация параметров монстра
{
	int hp   = getRandomNumber(1, 100);
	int int_rand_type = getRandomNumber(0, static_cast<int>(Monster::MAX_MONSTER_TYPES) - 1); // Перевод 
	Monster::MonsterType type;
	switch (int_rand_type)
	{
	case 0:  type = Monster::DRAGON;             break;
	case 1:  type = Monster::GOBLIN;             break;
	case 2:  type = Monster::OGRE;               break;
	case 3:  type = Monster::ORC;                break;
	case 4:  type = Monster::SKELETON;           break;
	case 5:  type = Monster::TROLL;              break;
	case 6:  type = Monster::VAMPIRE;            break;
	case 7:  type = Monster::ZOMBIE;             break;
	default: type = Monster::MAX_MONSTER_TYPES;  break;
	}

	static std::array<std::string, 6> names{"Ruslan", "Evgeniy", "Yura", "Danila", "Tvoya Mamka", "Pidoras"};
	int i = getRandomNumber(0, 5);
	std::string monsterName = names[i];

	return Monster(type, monsterName, hp);
}

int MonsterGenerator::getRandomNumber(int min, int max) // функция рандомизации значений
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // используем static, так как это значение нужно вычислить только один раз
	// равномерно распределяем вычисление числа в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

#endif // !1

