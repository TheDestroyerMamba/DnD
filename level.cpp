#include "level.hpp"

#include <stdint.h>

using namespace std;

//==================================================================================================

Level::Level(void) {};

Level::Level(Level* level) {
	this->setLevel(level->getLevel());

	this->setExp(level->getExp());

	this->setExp_Next_Level(level->getExp_Next_Level());
};

Level::Level(uint8_t level, unsigned int exp, unsigned int exp_next_level) {
	this->setLevel(level);

	this->setExp(exp);

	this->setExp_Next_Level(exp_next_level);
};

//==================================================================================================

void Level::setLevel(uint8_t level) {
	this->level = level;
};

uint8_t Level::getLevel(void) {
	return this->level;
};



void Level::setExp(unsigned int exp) {
	this->exp = exp;
};

unsigned int Level::getExp(void) {
	return this->exp;
};



void Level::setExp_Next_Level(unsigned int exp_next_level) {
	this->exp_next_level = exp_next_level;
};

unsigned int Level::getExp_Next_Level(void) {
	return this->exp_next_level;
};

//==================================================================================================