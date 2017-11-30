#include "Alignement.hpp"

#include <string>
#include <stdint.h>

using namespace std;

//=================================================================== Constructors =================

Divinity(void) {};

Divinity(Divinity* divinity) {

};

Divinity(string name, Alignement alignement) {

};

//=================================================================== Setters and Getters ==========

void setName(string name) {
	this->name = name;
};

string getName(void) {
	return this->name;
};



void setAlignement(Alignement alignement) {
	this->alignement = alignement;
};

void setAlignement(Alignement* alignement) {
	this->alignement = alignement->;
};

Alignement getAlignement(void) {
	return this->Alignement;
};
