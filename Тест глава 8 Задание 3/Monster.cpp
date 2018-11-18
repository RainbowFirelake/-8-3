#include "Monster.h"
#include <iostream>

std::string Monster::getTypeString() const // Вывод типа монстра
{
	switch (m_type)
	{
		case DRAGON:   return "Dragon";    break;
		case GOBLIN:   return "Goblin";    break;
		case OGRE:     return "Ogre";      break;
		case ORC:      return "Orc";       break;
		case TROLL:    return "Troll";     break;
		case SKELETON: return "Skeleton";  break;
		case VAMPIRE:  return "Vampire";   break;
		case ZOMBIE:   return "Zombie";    break;
		default:       return "Undefined"; break;
	}
}

void Monster::print() const
{
	std::cout << m_name << " is the " << getTypeString() << " that has " << m_hp << " hp" << std::endl;
}





