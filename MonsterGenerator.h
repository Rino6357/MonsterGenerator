#ifndef MONSTERGENERATOR_H
#define MONSTERGENERATOR_H
#include <string>
#include "Random.h"
#include "Monster.h"

namespace MonsterGenerator {

	std::string_view getName(int num) {
		switch (num) {
		case 0:
			return "Bohgram";
		case 1:
			return "Ghorag";
		case 2:
			return "Drudgak";
		case 3:
			return "Morgoj";
		case 4:
			return "Oghdar";
		case 5:
			return "Ramdurr";
		}
		return "???";
	}

	std::string_view getRoar(int num) {
		switch (num) {
		case 0:
			return "jyaahr";
		case 1:
			return "ghaawr";
		case 2:
			return "hrooahr";
		case 3:
			return "*hissss*";
		case 4:
			return "*rattle*";
		case 5:
			return "*sweak*";
		}
		return "???";
	}

	Monster generate() {
		using namespace Random;
		return Monster{ static_cast<Monster::Type>(get(0,Monster::maxMonsterTypes - 1)), getName(get(0, 5)), getRoar(get(0, 5)), get(1, 100) };
	}

}
#endif