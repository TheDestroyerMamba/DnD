#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <stdint.h>

class Level {
	private:
		uint8_t level;

		unsigned int exp;
		unsigned int exp_next_level;

	public:
		Level(void);
		Level(Level* level);
		Level(uint8_t level, unsigned int exp, unsigned int exp_next_level);

		void setLevel(uint8_t level);
		uint8_t getLevel(void);

		void setExp(unsigned int exp);
		unsigned int getExp(void);

		void setExp_Next_Level(unsigned int exp_next_level);
		unsigned int getExp_Next_Level(void);
};

#endif
