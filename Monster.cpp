#include <iostream>
#include <string>
#include "Monster.h"

Monster::Monster(Type type, std::string_view name, std::string_view roar, int hp)
	: m_type{ type }, m_name{ name }, m_roar{ roar }, m_hp{ hp } {}

constexpr std::string_view Monster::getTypeString() const {
	switch (m_type) {
	case dragon:
		return "dragon";
	case goblin:
		return "goblin";
	case ogre:
		return "ogre";
	case orc:
		return "orc";
	case skeleton:
		return "skeleton";
	case troll:
		return "troll";
	case vampire:
		return "vampire";
	case zombie:
		return "zombie";
	default:
		return "???";
	}
}

void Monster::print() const {
	if (m_hp > 0) {
		std::cout << m_name << " the " << getTypeString() << " has "
			<< m_hp << " hit points and says " << m_roar << ".\n";
	}
	else {
		std::cout << m_name << " the " << getTypeString() << " is dead.\n";
	}
}