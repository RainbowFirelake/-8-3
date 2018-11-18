#ifndef MONSTERGENERATOR
#define MONSTERGENERATOR

#include <cstdlib>
#include <ctime>
#include "Monster.h"
#include "MonsterGenerator.h"
#include <array>

Monster MonsterGenerator::generateMonster() // ��������� ��������� ���������� �������
{
	int hp   = getRandomNumber(1, 100);
	Monster::MonsterType type = static_cast<Monster::MonsterType>
		(getRandomNumber(0, static_cast<int>(Monster::MAX_MONSTER_TYPES) - 1)); // ������� 
	
	static std::array<std::string, 6> names{"Ruslan", "Evgeniy", "Yura", "Danila", "Tvoya Mamka", "Pidoras"};

	return Monster(type, names[getRandomNumber(0, 5)], hp);
}

int MonsterGenerator::getRandomNumber(int min, int max) // ������� ������������ ��������
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // ���������� static, ��� ��� ��� �������� ����� ��������� ������ ���� ���
	// ���������� ������������ ���������� ����� � ����� ���������
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

#endif // !1

