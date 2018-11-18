#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Monster.h"
#include "MonsterGenerator.h"
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // ���������� ��������� ���� � �������� ���������� ��������
	rand(); // ������������� Visual Studio: ������ ����� ������� ���������� �����

	Monster m = MonsterGenerator::generateMonster();
	m.print();

	system("pause");
	return 0;
}