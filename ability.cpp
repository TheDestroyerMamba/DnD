#include "ability.hpp"

#include <stdint.h>

using namespace std;

//==================================================================================================

Ability::Ability(uint8_t strenght, uint8_t dexterity, uint8_t constitution, uint8_t wisdom, uint8_t intelligence, uint8_t charism) {
	this->setStrenght(strenght);
	this->setStrenghtMod();

	this->setDexterity(dexterity);
	this->setDexterityMod();

	this->setConstitution(costitution);
	this->setConstitutionMod();

	this->setWisdom(wisdom);
	this->setWisdomMod();

	this->setIntelligence(intelligence);
	this->setIntelligenceMod();

	this->setCharism(charism);
	this->setCharismMod();
};

//==================================================================================================

void Ability::setStrenght(uint8_t strenght) {
	this->strenght = strenght;
};

uint8_t Ability::getStrenght(void) {
	return this->strenght;
};

void Ability::setStrenghtMod(void) {
	uint8_t value = this->getStrenght();

	if (value % 2 != 0) {
		value = value - 1;
	}

	this->strenght_mod = (value - 10) / 2;
};

int8_t Ability::getStrenghtMod(void) {
	return this->strenght_mod;
};



void Ability::setDexterity(uint8_t dexterity) {
	this->dexterity = dexterity;
};

uint8_t Ability::getDexterity(void) {
	return this->dexterity;
};

void Ability::setDexterityMod(void) {
	uint8_t value = this->getDexterity();

	if (value % 2 != 0) {
		value = value - 1;
	}

	this->dexterity_mod = (value - 10) / 2;
};

int8_t Ability::getDexterityMod(void) {
	return this->dexterity_mod;
};



void Ability::setConstitution(uint8_t constitution) {
	this->costitution = costitution;
};

uint8_t Ability::getConstitution(void) {
	return this->costitution;
};

void Ability::setConstitutionMod(void) {
	uint8_t value = this->getConstitution();

	if (value % 2 != 0) {
		value = value - 1;
	}

	this->costitution_mod = (value - 10) / 2;
};

int8_t Ability::getConstitutionMod(void) {
	return this->costitution_mod;
};



void Ability::setWisdom(uint8_t wisdom) {
	this->wisdom = wisdom;
};

uint8_t Ability::getWisdom(void) {
	return this->wisdom;
};

void Ability::setWisdomMod(void) {
	uint8_t value = this->getWisdom();

	if (value % 2 != 0) {
		value = value - 1;
	}

	this->wisdom_mod= (value - 10) / 2;
};

int8_t Ability::getWisdomMod(void) {
	return this->wisdom_mod;
};



void Ability::setIntelligence(uint8_t intelligence) {
	this->intelligence = intelligence;
};

uint8_t Ability::getIntelligence(void) {
	return this->intelligence;
};

void Ability::setIntelligenceMod(void) {
	uint8_t value = this->getIntelligence();

	if (value % 2 != 0) {
		value = value - 1;
	}

	this->intelligence_mod = (value - 10) / 2;
};

int8_t Ability::getIntelligenceMod(void) {
	return this->intelligence_mod;
};



void Ability::setCharism(uint8_t charism) {
	this->charism = charism;
};

uint8_t Ability::getCharism(void) {
	return this->charism;
};

void Ability::setCharismMod(void) {
	uint8_t value = this->getCharism();

	if (value % 2 != 0) {
		value = value - 1;
	}

	this->charism_mod = (value - 10) / 2;
};

int8_t Ability::getCharismMod(void) {
	return this->charism_mod;
};
