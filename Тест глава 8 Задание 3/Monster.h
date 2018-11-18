#pragma once
#include <string>
class Monster 
{
public:
	enum MonsterType
	{
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMBIE,
		MAX_MONSTER_TYPES
	};
private:
	MonsterType m_type;
	std::string m_name;
	int         m_hp;
public:
	Monster(MonsterType type, std::string name = "unknown", int hp = 100) // инициализатор
		: m_type{ type }, m_name{ name }, m_hp{ hp } {};

	std::string getTypeString() const; // Вывод типа монстра

	void print() const;
};

