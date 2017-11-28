#ifndef SKILL_HPP
#define SKILL_HPP

#include <string>
#include <stdint.h>

using namespace std;

class Skill {
	private:
		string name;
		string ability_key;
		//int8_t total;
		int8_t ability_value; 
		uint8_t grade;
		int8_t other;
	
	public:
		Skill(void);
		Skill(Skill* skill);
		Skill(string name, string ability_key, int8_t ability_value, uint8_t grade, int8_t other);
		
		void setName(string name);
		string getName(void);
		
		void setAbilityKey(string ability_key);
		string getAbilityKey(void);
		
		void setAbilityValue(int8_t ability_value);
		int8_t getAbilityValue(void);
		
		void setGrade(uint8_t grade);
		uint8_t getGrade(void);
		
		void setOther(int8_t other);
		int8_t getOther(void);
		
};

#endif
