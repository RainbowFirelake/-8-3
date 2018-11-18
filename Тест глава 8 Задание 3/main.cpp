#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Monster.h"
#include "MonsterGenerator.h"
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
	rand(); // пользователям Visual Studio: делаем сброс первого случайного числа

	Monster m = MonsterGenerator::generateMonster();
	m.print();

	system("pause");
	return 0;
}