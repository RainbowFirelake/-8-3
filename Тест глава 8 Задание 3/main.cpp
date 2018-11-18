#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
	Monster jack(Monster::ORC, "Jack", 90);
	jack.print();

	system("pause");
	return 0;
}