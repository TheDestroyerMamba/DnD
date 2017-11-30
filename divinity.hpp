#ifndef DIVINITY_HPP
#define DIVINITY_HPP

#include "Alignement.hpp"

#include <string>
#include <stdint.h>

using namespace std;

class Divinity {
	private:
		string name;
		Alignement alignement;

	public:
		Divinity(void);
		Divinity(Divinity* divinity);
		Divinity(string name, Alignement alignement);
		
		void setName(string name);
		string getName(void);
		
		void setAlignement(Alignement alignement);
		void setAlignement(Alignement* alignement);
		Alignement getAlignement(void);
};

#endif
