#ifndef ABILITY_HPP
#define ABILITY_HPP

#include <stdint.h>

class Ability {
	private:
		uint8_t strenght;
		int8_t strenght_mod;

		uint8_t dexterity;
		int8_t dexterity_mod;

		uint8_t costitution;
		int8_t costitution_mod;

		uint8_t wisdom;
		int8_t wisdom_mod;

		uint8_t intelligence;
		int8_t intelligence_mod;

		uint8_t charism;
		int8_t charism_mod;
		
	public:
		Ability(void);
		Ability(Ability* ability);
		Ability(uint8_t strenght, uint8_t dexterity, uint8_t constitution, uint8_t wisdom, uint8_t intelligence, uint8_t charism);

		void setStrenght(uint8_t strenght);
		uint8_t getStrenght(void);
		void setStrenghtMod(void);
		int8_t getStrenghtMod(void);

		void setDexterity(uint8_t dexterity);
		uint8_t getDexterity(void);
		void setDexterityMod(void);
		int8_t getDexterityMod(void);

		void setConstitution(uint8_t constitution);
		uint8_t getConstitution(void);
		void setConstitutionMod(void);
		int8_t getConstitutionMod(void);

		void setWisdom(uint8_t wisdom);
		uint8_t getWisdom(void);
		void setWisdomMod(void);
		int8_t getWisdomMod(void);

		void setIntelligence(uint8_t intelligence);
		uint8_t getIntelligence(void);
		void setIntelligenceMod(void);
		int8_t getIntelligenceMod(void);

		void setCharism(uint8_t charism);
		uint8_t getCharism(void);
		void setCharismMod(void);
		int8_t getCharismMod(void);
};

#endif
