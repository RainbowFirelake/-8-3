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
	Monster::MonsterType type = static_cast<Monster::MonsterType>
		(getRandomNumber(0, static_cast<int>(Monster::MAX_MONSTER_TYPES) - 1)); // Перевод 
	
	static std::array<std::string, 6> names{"Ruslan", "Evgeniy", "Yura", "Danila", "Tvoya Mamka", "Pidoras"};

	return Monster(type, names[getRandomNumber(0, 5)], hp);
}

int MonsterGenerator::getRandomNumber(int min, int max) // функция рандомизации значений
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // используем static, так как это значение нужно вычислить только один раз
	// равномерно распределяем вычисление числа в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

#endif // !1

