#include <iostream>
#include "Random.h"
#include "Monster.h"
#include "MonsterGenerator.h"

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}