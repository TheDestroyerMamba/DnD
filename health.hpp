#ifndef HEALTH_HPP
#define HEALTH_HPP

#include <stdint.h>

typedef enum Dice {
	d4 = 4,
	d6 = 6,
	d8 = 8,
	d10 = 10,
	d12 = 12
};

class Health {
	private:
		uint16_t max_health;
		int16_t current_health;
		//uint16_t no_lethal_damage;
		
		char dice[2];

	public:
		Health(void);
		Health(Health* health);
		Health(uint16_t max_health, char* dice);

		
		
		void setMaxHealth(uint16_t max_health);
		uint16_t getMaxHealth(void);

		void setCurrentHealth(int16_t current_health);
		int16_t getCurrentHealth(void);
		
		void setDice(char* dice);
		char* getDice(void);
		
		/*void setNoLethal(uint16_t current_health);
		uint16_t getNoLethal(void);*/
		
		//void takeDamage(uint8_t damage);
		//void levelUpHealth(void);
};

#endif
