#include "health.hpp"

#include <stdint.h>

using namespace std;

//=================================================================== Constructors =================

Health::Health(void) {};

Health::Health(Health* health) {
	this->setMaxHealth(health->getMaxHealth());
	
	this->setCurrentHealth(health->getCurrentHealth());
	
	this->setDice(health->getDice());
};

Health::Health(uint16_t max_health, char* dice) {
	this->setMaxHealth(max_health);
	
	this->setCurrentHealth(this->getMaxHealth());
	
	this->setDice(dice);
};

//=================================================================== Setters and Getters ==========

void setMaxHealth(uint16_t max_health) {
	this->max_health = max_health;
};

uint16_t getMaxHealth(void) {
	return this->max_health;
};



void setCurrentHealth(int16_t current_health) {
	this->current_health = current_health;
};

int16_t getCurrentHealth(void) {
	return this->current_health;
};



void setDice(char* dice) {
	if((dice[0] == "d") && ((dice[1] == 4) || (dice[1] == 6) || (dice[1] == 8) || (dice[1] == 10) || (dice[1] == 12))) {
		this->dice[0] = dice[0];
		this->dice[1] = dice[1];
	}
	else {
		
	}
};

char* getDice(void) {
	return this->dice;
};
