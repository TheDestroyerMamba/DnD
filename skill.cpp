#include "skill.hpp"

#include <string>
#include <stdint.h>

using namespace std;

//======================================================================================================================================================================================================

Skill::Skill(void){}

Skill::Skill(Skill* skill) {
	this->setName(skill->getName());
	
	this->setAbilityKey(skill->getAbilityKey());
	
	this->setAbilityValue(skill->getAbilityValue());
	
	this->setGrade(skill->getGrade());
	
	this->setOther(skill->getOther());
}

Skill::Skill(string name, string ability_key, int8_t ability_value, uint8_t grade, int8_t other) {

	this->setName(name);

	this->setAbilityKey(ability_key);
	
	this->setAbilityValue(ability_value);

	this->setGrade(grade);
	
	this->setOther(other);
	
};
//======================================================================================================================================================================================================

void Skill::setName(string name) {
	this->name = name;
};

string Skill::getName(void) {
	return this->name;
};


void Skill::setAbilityKey(string ability_key) {
	this->ability_key = ability_key;
};

string Skill::getAbilityKey(void) {
	return this->ability_key;
};


void Skill::setAbilityValue(int8_t ability_value) {
	this->ability_value = ability_value;
};

int8_t Skill::getAbilityValue(void) {
	return this->ability_value;
};


void Skill::setGrade(uint8_t grade) {
	this->grade = grade;
};

uint8_t Skill::getGrade(void) {
	return this->grade;
};


void Skill::setOther(int8_t other) {
	this->other = other;
};

int8_t Skill::getOther(void) {
	return this->other;
};



